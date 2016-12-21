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

// EnemyController
struct EnemyController_t2146768720;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void EnemyController::.ctor()
extern "C"  void EnemyController__ctor_m1153179309 (EnemyController_t2146768720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyController::Awake()
extern "C"  void EnemyController_Awake_m1186140764 (EnemyController_t2146768720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyController::Start()
extern "C"  void EnemyController_Start_m2470974037 (EnemyController_t2146768720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyController::Update()
extern "C"  void EnemyController_Update_m3131616442 (EnemyController_t2146768720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyController::runAi(System.Single)
extern "C"  void EnemyController_runAi_m1506721673 (EnemyController_t2146768720 * __this, float ___deltaTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyController::aiMove(System.Single)
extern "C"  void EnemyController_aiMove_m145988649 (EnemyController_t2146768720 * __this, float ___deltaTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyController::aiShoot(System.Single)
extern "C"  void EnemyController_aiShoot_m2078199375 (EnemyController_t2146768720 * __this, float ___deltaTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject EnemyController::whoIsFront()
extern "C"  GameObject_t1756533147 * EnemyController_whoIsFront_m219270629 (EnemyController_t2146768720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyController::setPlayerToHunt()
extern "C"  void EnemyController_setPlayerToHunt_m1541531034 (EnemyController_t2146768720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyController::positionChanged(UnityEngine.Vector3)
extern "C"  void EnemyController_positionChanged_m4020017495 (EnemyController_t2146768720 * __this, Vector3_t2243707580  ___new_position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyController::shipTookDamage(System.Int32)
extern "C"  void EnemyController_shipTookDamage_m807719426 (EnemyController_t2146768720 * __this, int32_t ___amount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyController::shipDestroyed()
extern "C"  void EnemyController_shipDestroyed_m4066696198 (EnemyController_t2146768720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyController::shoot()
extern "C"  void EnemyController_shoot_m2843870152 (EnemyController_t2146768720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
