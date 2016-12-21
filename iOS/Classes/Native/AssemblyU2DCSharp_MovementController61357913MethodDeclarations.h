#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// MovementController
struct MovementController_t61357913;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// System.Void MovementController::.ctor()
extern "C"  void MovementController__ctor_m880340624 (MovementController_t61357913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MovementController::Awake()
extern "C"  void MovementController_Awake_m248489125 (MovementController_t61357913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MovementController::Start()
extern "C"  void MovementController_Start_m670675224 (MovementController_t61357913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MovementController::Update()
extern "C"  void MovementController_Update_m1480900769 (MovementController_t61357913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MovementController::keepInsideCamera()
extern "C"  void MovementController_keepInsideCamera_m335858896 (MovementController_t61357913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MovementController::getConfinedPosition(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  MovementController_getConfinedPosition_m2186790230 (MovementController_t61357913 * __this, Vector3_t2243707580  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MovementController::currentPosition()
extern "C"  Vector3_t2243707580  MovementController_currentPosition_m3114676924 (MovementController_t61357913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion MovementController::currentRotation()
extern "C"  Quaternion_t4030073918  MovementController_currentRotation_m1095662361 (MovementController_t61357913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MovementController::move(System.Int32,System.Single,System.Boolean)
extern "C"  Vector3_t2243707580  MovementController_move_m307817770 (MovementController_t61357913 * __this, int32_t ___direction0, float ___distance1, bool ___confine_to_camera2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 MovementController::move(UnityEngine.Vector3,System.Boolean,System.Boolean)
extern "C"  Vector3_t2243707580  MovementController_move_m367589520 (MovementController_t61357913 * __this, Vector3_t2243707580  ___position0, bool ___confine_to_camera1, bool ___rotate2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MovementController::toMiddleOfScreen()
extern "C"  void MovementController_toMiddleOfScreen_m391829199 (MovementController_t61357913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MovementController::toCameraPoint(System.Single,System.Single)
extern "C"  void MovementController_toCameraPoint_m859007958 (MovementController_t61357913 * __this, float ___x0, float ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MovementController::toRandomPlaceOnBorder()
extern "C"  void MovementController_toRandomPlaceOnBorder_m3435803634 (MovementController_t61357913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
