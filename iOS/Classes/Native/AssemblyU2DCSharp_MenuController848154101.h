#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t2042527209;
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

// MenuController
struct  MenuController_t848154101  : public SceneController_t38942716
{
public:
	// UnityEngine.UI.Image MenuController::background_image
	Image_t2042527209 * ___background_image_6;
	// UnityEngine.GameObject MenuController::start_game_go
	GameObject_t1756533147 * ___start_game_go_7;
	// UIButton MenuController::start_game_button
	UIButton_t3377238306  ___start_game_button_8;
	// UnityEngine.GameObject MenuController::quit_game_go
	GameObject_t1756533147 * ___quit_game_go_9;
	// UIButton MenuController::quit_game_button
	UIButton_t3377238306  ___quit_game_button_10;
	// UnityEngine.GameObject MenuController::leaderboard_go
	GameObject_t1756533147 * ___leaderboard_go_11;
	// UIButton MenuController::leaderboard_button
	UIButton_t3377238306  ___leaderboard_button_12;
	// UnityEngine.GameObject MenuController::menuPanel
	GameObject_t1756533147 * ___menuPanel_13;

public:
	inline static int32_t get_offset_of_background_image_6() { return static_cast<int32_t>(offsetof(MenuController_t848154101, ___background_image_6)); }
	inline Image_t2042527209 * get_background_image_6() const { return ___background_image_6; }
	inline Image_t2042527209 ** get_address_of_background_image_6() { return &___background_image_6; }
	inline void set_background_image_6(Image_t2042527209 * value)
	{
		___background_image_6 = value;
		Il2CppCodeGenWriteBarrier(&___background_image_6, value);
	}

	inline static int32_t get_offset_of_start_game_go_7() { return static_cast<int32_t>(offsetof(MenuController_t848154101, ___start_game_go_7)); }
	inline GameObject_t1756533147 * get_start_game_go_7() const { return ___start_game_go_7; }
	inline GameObject_t1756533147 ** get_address_of_start_game_go_7() { return &___start_game_go_7; }
	inline void set_start_game_go_7(GameObject_t1756533147 * value)
	{
		___start_game_go_7 = value;
		Il2CppCodeGenWriteBarrier(&___start_game_go_7, value);
	}

	inline static int32_t get_offset_of_start_game_button_8() { return static_cast<int32_t>(offsetof(MenuController_t848154101, ___start_game_button_8)); }
	inline UIButton_t3377238306  get_start_game_button_8() const { return ___start_game_button_8; }
	inline UIButton_t3377238306 * get_address_of_start_game_button_8() { return &___start_game_button_8; }
	inline void set_start_game_button_8(UIButton_t3377238306  value)
	{
		___start_game_button_8 = value;
	}

	inline static int32_t get_offset_of_quit_game_go_9() { return static_cast<int32_t>(offsetof(MenuController_t848154101, ___quit_game_go_9)); }
	inline GameObject_t1756533147 * get_quit_game_go_9() const { return ___quit_game_go_9; }
	inline GameObject_t1756533147 ** get_address_of_quit_game_go_9() { return &___quit_game_go_9; }
	inline void set_quit_game_go_9(GameObject_t1756533147 * value)
	{
		___quit_game_go_9 = value;
		Il2CppCodeGenWriteBarrier(&___quit_game_go_9, value);
	}

	inline static int32_t get_offset_of_quit_game_button_10() { return static_cast<int32_t>(offsetof(MenuController_t848154101, ___quit_game_button_10)); }
	inline UIButton_t3377238306  get_quit_game_button_10() const { return ___quit_game_button_10; }
	inline UIButton_t3377238306 * get_address_of_quit_game_button_10() { return &___quit_game_button_10; }
	inline void set_quit_game_button_10(UIButton_t3377238306  value)
	{
		___quit_game_button_10 = value;
	}

	inline static int32_t get_offset_of_leaderboard_go_11() { return static_cast<int32_t>(offsetof(MenuController_t848154101, ___leaderboard_go_11)); }
	inline GameObject_t1756533147 * get_leaderboard_go_11() const { return ___leaderboard_go_11; }
	inline GameObject_t1756533147 ** get_address_of_leaderboard_go_11() { return &___leaderboard_go_11; }
	inline void set_leaderboard_go_11(GameObject_t1756533147 * value)
	{
		___leaderboard_go_11 = value;
		Il2CppCodeGenWriteBarrier(&___leaderboard_go_11, value);
	}

	inline static int32_t get_offset_of_leaderboard_button_12() { return static_cast<int32_t>(offsetof(MenuController_t848154101, ___leaderboard_button_12)); }
	inline UIButton_t3377238306  get_leaderboard_button_12() const { return ___leaderboard_button_12; }
	inline UIButton_t3377238306 * get_address_of_leaderboard_button_12() { return &___leaderboard_button_12; }
	inline void set_leaderboard_button_12(UIButton_t3377238306  value)
	{
		___leaderboard_button_12 = value;
	}

	inline static int32_t get_offset_of_menuPanel_13() { return static_cast<int32_t>(offsetof(MenuController_t848154101, ___menuPanel_13)); }
	inline GameObject_t1756533147 * get_menuPanel_13() const { return ___menuPanel_13; }
	inline GameObject_t1756533147 ** get_address_of_menuPanel_13() { return &___menuPanel_13; }
	inline void set_menuPanel_13(GameObject_t1756533147 * value)
	{
		___menuPanel_13 = value;
		Il2CppCodeGenWriteBarrier(&___menuPanel_13, value);
	}
};

struct MenuController_t848154101_StaticFields
{
public:
	// UnityEngine.Events.UnityAction MenuController::<>f__mg$cache0
	UnityAction_t4025899511 * ___U3CU3Ef__mgU24cache0_14;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_14() { return static_cast<int32_t>(offsetof(MenuController_t848154101_StaticFields, ___U3CU3Ef__mgU24cache0_14)); }
	inline UnityAction_t4025899511 * get_U3CU3Ef__mgU24cache0_14() const { return ___U3CU3Ef__mgU24cache0_14; }
	inline UnityAction_t4025899511 ** get_address_of_U3CU3Ef__mgU24cache0_14() { return &___U3CU3Ef__mgU24cache0_14; }
	inline void set_U3CU3Ef__mgU24cache0_14(UnityAction_t4025899511 * value)
	{
		___U3CU3Ef__mgU24cache0_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
