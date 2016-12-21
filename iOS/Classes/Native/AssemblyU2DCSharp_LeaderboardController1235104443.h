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
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;

#include "AssemblyU2DCSharp_SceneController38942716.h"
#include "AssemblyU2DCSharp_UIButton3377238306.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeaderboardController
struct  LeaderboardController_t1235104443  : public SceneController_t38942716
{
public:
	// UnityEngine.GameObject LeaderboardController::return_go
	GameObject_t1756533147 * ___return_go_6;
	// UIButton LeaderboardController::return_button
	UIButton_t3377238306  ___return_button_7;
	// UnityEngine.GameObject LeaderboardController::list
	GameObject_t1756533147 * ___list_8;

public:
	inline static int32_t get_offset_of_return_go_6() { return static_cast<int32_t>(offsetof(LeaderboardController_t1235104443, ___return_go_6)); }
	inline GameObject_t1756533147 * get_return_go_6() const { return ___return_go_6; }
	inline GameObject_t1756533147 ** get_address_of_return_go_6() { return &___return_go_6; }
	inline void set_return_go_6(GameObject_t1756533147 * value)
	{
		___return_go_6 = value;
		Il2CppCodeGenWriteBarrier(&___return_go_6, value);
	}

	inline static int32_t get_offset_of_return_button_7() { return static_cast<int32_t>(offsetof(LeaderboardController_t1235104443, ___return_button_7)); }
	inline UIButton_t3377238306  get_return_button_7() const { return ___return_button_7; }
	inline UIButton_t3377238306 * get_address_of_return_button_7() { return &___return_button_7; }
	inline void set_return_button_7(UIButton_t3377238306  value)
	{
		___return_button_7 = value;
	}

	inline static int32_t get_offset_of_list_8() { return static_cast<int32_t>(offsetof(LeaderboardController_t1235104443, ___list_8)); }
	inline GameObject_t1756533147 * get_list_8() const { return ___list_8; }
	inline GameObject_t1756533147 ** get_address_of_list_8() { return &___list_8; }
	inline void set_list_8(GameObject_t1756533147 * value)
	{
		___list_8 = value;
		Il2CppCodeGenWriteBarrier(&___list_8, value);
	}
};

struct LeaderboardController_t1235104443_StaticFields
{
public:
	// UnityEngine.Events.UnityAction LeaderboardController::<>f__mg$cache0
	UnityAction_t4025899511 * ___U3CU3Ef__mgU24cache0_9;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_9() { return static_cast<int32_t>(offsetof(LeaderboardController_t1235104443_StaticFields, ___U3CU3Ef__mgU24cache0_9)); }
	inline UnityAction_t4025899511 * get_U3CU3Ef__mgU24cache0_9() const { return ___U3CU3Ef__mgU24cache0_9; }
	inline UnityAction_t4025899511 ** get_address_of_U3CU3Ef__mgU24cache0_9() { return &___U3CU3Ef__mgU24cache0_9; }
	inline void set_U3CU3Ef__mgU24cache0_9(UnityAction_t4025899511 * value)
	{
		___U3CU3Ef__mgU24cache0_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
