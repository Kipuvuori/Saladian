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

// ShotController
struct ShotController_t1789327352;
// UnityEngine.Collision2D
struct Collision2D_t1539500754;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754.h"

// System.Void ShotController::.ctor()
extern "C"  void ShotController__ctor_m711711143 (ShotController_t1789327352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShotController::Awake()
extern "C"  void ShotController_Awake_m2598851204 (ShotController_t1789327352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShotController::Start()
extern "C"  void ShotController_Start_m1788744739 (ShotController_t1789327352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShotController::Update()
extern "C"  void ShotController_Update_m2374365718 (ShotController_t1789327352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShotController::shoot(UnityEngine.Vector2,UnityEngine.Quaternion)
extern "C"  void ShotController_shoot_m4193010003 (ShotController_t1789327352 * __this, Vector2_t2243707579  ___position0, Quaternion_t4030073918  ___rotation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShotController::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void ShotController_OnCollisionEnter2D_m3906791321 (ShotController_t1789327352 * __this, Collision2D_t1539500754 * ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShotController::takeDamage(System.Int32)
extern "C"  void ShotController_takeDamage_m2744552252 (ShotController_t1789327352 * __this, int32_t ___amount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShotController::OnBecameInvisible()
extern "C"  void ShotController_OnBecameInvisible_m2957750658 (ShotController_t1789327352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
