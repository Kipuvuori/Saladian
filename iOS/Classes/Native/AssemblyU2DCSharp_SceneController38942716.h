#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// CameraController
struct CameraController_t3555666667;

#include "AssemblyU2DCSharp_Controller1937198888.h"
#include "AssemblyU2DCSharp_CameraResolution256933009.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneController
struct  SceneController_t38942716  : public Controller_t1937198888
{
public:
	// UnityEngine.GameObject SceneController::input
	GameObject_t1756533147 * ___input_2;
	// CameraController SceneController::camera_controller
	CameraController_t3555666667 * ___camera_controller_4;
	// CameraResolution SceneController::resolution
	CameraResolution_t256933009  ___resolution_5;

public:
	inline static int32_t get_offset_of_input_2() { return static_cast<int32_t>(offsetof(SceneController_t38942716, ___input_2)); }
	inline GameObject_t1756533147 * get_input_2() const { return ___input_2; }
	inline GameObject_t1756533147 ** get_address_of_input_2() { return &___input_2; }
	inline void set_input_2(GameObject_t1756533147 * value)
	{
		___input_2 = value;
		Il2CppCodeGenWriteBarrier(&___input_2, value);
	}

	inline static int32_t get_offset_of_camera_controller_4() { return static_cast<int32_t>(offsetof(SceneController_t38942716, ___camera_controller_4)); }
	inline CameraController_t3555666667 * get_camera_controller_4() const { return ___camera_controller_4; }
	inline CameraController_t3555666667 ** get_address_of_camera_controller_4() { return &___camera_controller_4; }
	inline void set_camera_controller_4(CameraController_t3555666667 * value)
	{
		___camera_controller_4 = value;
		Il2CppCodeGenWriteBarrier(&___camera_controller_4, value);
	}

	inline static int32_t get_offset_of_resolution_5() { return static_cast<int32_t>(offsetof(SceneController_t38942716, ___resolution_5)); }
	inline CameraResolution_t256933009  get_resolution_5() const { return ___resolution_5; }
	inline CameraResolution_t256933009 * get_address_of_resolution_5() { return &___resolution_5; }
	inline void set_resolution_5(CameraResolution_t256933009  value)
	{
		___resolution_5 = value;
	}
};

struct SceneController_t38942716_StaticFields
{
public:
	// UnityEngine.GameObject SceneController::Camera
	GameObject_t1756533147 * ___Camera_3;

public:
	inline static int32_t get_offset_of_Camera_3() { return static_cast<int32_t>(offsetof(SceneController_t38942716_StaticFields, ___Camera_3)); }
	inline GameObject_t1756533147 * get_Camera_3() const { return ___Camera_3; }
	inline GameObject_t1756533147 ** get_address_of_Camera_3() { return &___Camera_3; }
	inline void set_Camera_3(GameObject_t1756533147 * value)
	{
		___Camera_3 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
