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

// InputController
struct InputController_t3951031284;
// PlayerController
struct PlayerController_t4148409433;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void InputController::.ctor()
extern "C"  void InputController__ctor_m1592142465 (InputController_t3951031284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputController::Awake()
extern "C"  void InputController_Awake_m3079539104 (InputController_t3951031284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputController::Start()
extern "C"  void InputController_Start_m1340460537 (InputController_t3951031284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputController::Update()
extern "C"  void InputController_Update_m3485699262 (InputController_t3951031284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputController::releaseGameObject()
extern "C"  void InputController_releaseGameObject_m973218683 (InputController_t3951031284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputController::tellPosition(UnityEngine.Vector2)
extern "C"  void InputController_tellPosition_m3739738977 (InputController_t3951031284 * __this, Vector2_t2243707579  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputController::shoot()
extern "C"  void InputController_shoot_m362642076 (InputController_t3951031284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean InputController::movePlayer(UnityEngine.Vector3,System.Boolean)
extern "C"  bool InputController_movePlayer_m1485118525 (InputController_t3951031284 * __this, Vector3_t2243707580  ___screen_point0, bool ___checkDistance1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerController InputController::getPlayer()
extern "C"  PlayerController_t4148409433 * InputController_getPlayer_m900849202 (InputController_t3951031284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputController::quit()
extern "C"  void InputController_quit_m3021281160 (InputController_t3951031284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputController::restart()
extern "C"  void InputController_restart_m3704055684 (InputController_t3951031284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
