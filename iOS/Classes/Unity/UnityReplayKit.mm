#if UNITY_REPLAY_KIT_AVAILABLE

#import "UnityReplayKit.h"
#import "UnityAppController.h"

extern "C" void	UnityReplayKitTriggerBroadcastStatusCallback (void* callback, bool hasSucceeded, const char* errorMessage);

static UnityReplayKit* _replayKit = nil;

@implementation UnityReplayKit
{
	id broadcastController;
	void* broadcastStartStatusCallback;
}

+ (UnityReplayKit*)sharedInstance
{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _replayKit = [[UnityReplayKit alloc] init];
    });
	return _replayKit;
}

- (BOOL)apiAvailable {
    return [RPScreenRecorder class] != nil;
}

- (BOOL)recordingPreviewAvailable
{
	return _previewController != nil;
}

- (BOOL)startRecording:(BOOL)enableMicrophone
{
	RPScreenRecorder* recorder = [RPScreenRecorder sharedRecorder];
	if (recorder == nil)
	{
		_lastError = [NSString stringWithUTF8String:"Failed to get Screen Recorder"];
		return NO;
	}
    
	recorder.delegate = self;
    __block BOOL success = YES;
	[recorder startRecordingWithMicrophoneEnabled:enableMicrophone handler:^(NSError* error){
		if (error != nil)
        {
			_lastError = [error description];
            success = NO;
        }
	}];
	
	return success;
}

- (BOOL)isRecording
{
	RPScreenRecorder* recorder = [RPScreenRecorder sharedRecorder];
	if (recorder == nil)
	{
		_lastError = [NSString stringWithUTF8String:"Failed to get Screen Recorder"];
		return NO;
	}
	return recorder.isRecording;
}

- (BOOL)stopRecording
{
	RPScreenRecorder* recorder = [RPScreenRecorder sharedRecorder];
	if (recorder == nil)
	{
		_lastError = [NSString stringWithUTF8String:"Failed to get Screen Recorder"];
		return NO;
	}
    
    __block BOOL success = YES;
	[recorder stopRecordingWithHandler:^(RPPreviewViewController* previewViewController, NSError* error){
		if (error != nil)
		{
			_lastError = [error description];
			success = NO;
			return;
		}
		if (previewViewController != nil)
		{
			[previewViewController setPreviewControllerDelegate:self];
			_previewController = previewViewController;
		}
	}];
	
	return success;
}

- (void)screenRecorder:(RPScreenRecorder*)screenRecorder didStopRecordingWithError:(NSError*)error previewViewController:(RPPreviewViewController*)previewViewController
{
    if (error != nil)
    {
		_lastError = [error description];
    }
	_previewController = previewViewController;
}

- (BOOL)showPreview
{
	if (_previewController == nil)
	{
		_lastError = [NSString stringWithUTF8String:"No recording available"];
		return NO;
	}
	
	[_previewController setModalPresentationStyle:UIModalPresentationFullScreen];
    [GetAppController().rootViewController presentViewController:_previewController animated:YES completion:^()
    {
        _previewController = nil;
    }];
	return YES;
}

- (BOOL)discardPreview
{
	if (_previewController == nil)
    {
		return YES;
    }
    
	RPScreenRecorder* recorder = [RPScreenRecorder sharedRecorder];
	if (recorder == nil)
	{
		_lastError = [NSString stringWithUTF8String:"Failed to get Screen Recorder"];
		return NO;
	}
    
	[recorder discardRecordingWithHandler:^()
    {
        _previewController = nil;
    }];
    // TODO - the above callback doesn't seem to be working at the moment.
    _previewController = nil;
	
    return YES;
}

- (void)previewControllerDidFinish:(RPPreviewViewController*)previewController
{
	if (previewController != nil)
    {
		[previewController dismissViewControllerAnimated:YES completion:nil];
    }
}

/****************************************
 *	 ReplayKit Broadcasting API         *
 ****************************************/

- (BOOL)broadcastingApiAvailable
{
	return nil != NSClassFromString(@"RPBroadcastController")
		&& nil != NSClassFromString(@"RPBroadcastActivityViewController");
}

- (NSURL*)broadcastURL
{
	if (broadcastController == nil)
	{
		return nil;
	}
	return [broadcastController broadcastURL];
}

- (BOOL)isBroadcasting
{
	if (broadcastController == nil)
	{
		return NO;
	}
	return [broadcastController isBroadcasting];
}


- (void)broadcastActivityViewController:(id)sBroadcastActivityViewController
	   didFinishWithBroadcastController:(id)sBroadcastController
								  error:(NSError *)error
{
	if (sBroadcastController == nil)
	{
		_lastError = [error description];
	 	UnityReplayKitTriggerBroadcastStatusCallback (broadcastStartStatusCallback, false, [_lastError UTF8String]);
	 	broadcastStartStatusCallback = nullptr;
		[UnityGetGLViewController() dismissViewControllerAnimated:YES completion:nil];
		return;
	}
	
	broadcastController = sBroadcastController;
	[UnityGetGLViewController() dismissViewControllerAnimated:YES completion:^
	{
		[broadcastController performSelector:@selector(startBroadcastWithHandler:) withObject:^(NSError* error)
		{
			if (error != nil)
			{
				_lastError = [error description];
			 	UnityReplayKitTriggerBroadcastStatusCallback (broadcastStartStatusCallback, false, [_lastError UTF8String]);
			 	broadcastStartStatusCallback = nullptr;
				broadcastController = nil;
				return;
			}
		 	UnityReplayKitTriggerBroadcastStatusCallback (broadcastStartStatusCallback, true, "");
		 	broadcastStartStatusCallback = nullptr;
		 	_lastError = nil;
		}];
	}];
}

- (void)startBroadcastingWithCallback:(void *)callback
{
	Class class_BroadcastActivityViewController = NSClassFromString (@"RPBroadcastActivityViewController");
	
	if (class_BroadcastActivityViewController == nil)
	{
		return;
	}
	
	if (broadcastController != nil && [broadcastController isBroadcasting]) 
	{
		_lastError = @"Broadcast already in progress";
	 	UnityReplayKitTriggerBroadcastStatusCallback (callback, false, [_lastError UTF8String]);
		return;
	}

	if (broadcastStartStatusCallback != nullptr) 
	{
		_lastError = @"The last attempt to start a broadcast didn\'t finish yet.";
	 	UnityReplayKitTriggerBroadcastStatusCallback (callback, false, [_lastError UTF8String]);
		return;
	}
	
	[class_BroadcastActivityViewController performSelector:@selector(loadBroadcastActivityViewControllerWithHandler:) withObject:^(id sBroadcastActivityViewController, NSError* error)
	{
		if (sBroadcastActivityViewController == nil || error != nil) 
		{
			_lastError = [error description];
		 	UnityReplayKitTriggerBroadcastStatusCallback (callback, false, [_lastError UTF8String]);
			return;
		}
		[sBroadcastActivityViewController setValue:self forKey:@"delegate"];
		broadcastStartStatusCallback = callback;
		if ([UIDevice currentDevice].userInterfaceIdiom == UIUserInterfaceIdiomPad)
		{
			[sBroadcastActivityViewController setModalPresentationStyle:UIModalPresentationFormSheet];
		}
		else
		{
			[sBroadcastActivityViewController setModalPresentationStyle:UIModalPresentationPopover];
		}
		[UnityGetGLViewController() presentViewController:sBroadcastActivityViewController animated:YES completion:nil];
	}];
	return;
}

- (void)stopBroadcasting
{
	if (broadcastController == nil)
	{				
		return;
	}

	if (![broadcastController isBroadcasting]) 
	{
		broadcastController = nil;
		return;
	}

	[broadcastController performSelector:@selector(finishBroadcastWithHandler:) withObject:^(NSError* error)
	{
		broadcastController = nil;
		if (error == nil)
		{
			return;
		}
		_lastError = [error description];
	}];
}

@end

#endif  // UNITY_REPLAY_KIT_AVAILABLE
