#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.InputField
struct InputField_t1631627530;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;

#include "AssemblyU2DCSharp_UIController2029583246.h"
#include "AssemblyU2DCSharp_UIButton3377238306.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreController
struct  ScoreController_t1938732650  : public UIController_t2029583246
{
public:
	// UnityEngine.UI.Text ScoreController::list
	Text_t356221433 * ___list_2;
	// UnityEngine.UI.Text ScoreController::score
	Text_t356221433 * ___score_3;
	// UnityEngine.GameObject ScoreController::game_over_panel
	GameObject_t1756533147 * ___game_over_panel_4;
	// UnityEngine.UI.Text ScoreController::game_over_title
	Text_t356221433 * ___game_over_title_5;
	// UnityEngine.UI.Text ScoreController::game_over_list
	Text_t356221433 * ___game_over_list_6;
	// UIButton ScoreController::restart_button
	UIButton_t3377238306  ___restart_button_7;
	// UIButton ScoreController::quit_button
	UIButton_t3377238306  ___quit_button_8;
	// UIButton ScoreController::send_button
	UIButton_t3377238306  ___send_button_9;
	// UnityEngine.GameObject ScoreController::restart_go
	GameObject_t1756533147 * ___restart_go_10;
	// UnityEngine.GameObject ScoreController::quit_go
	GameObject_t1756533147 * ___quit_go_11;
	// UnityEngine.GameObject ScoreController::send_go
	GameObject_t1756533147 * ___send_go_12;
	// UnityEngine.UI.InputField ScoreController::username
	InputField_t1631627530 * ___username_13;
	// System.Boolean ScoreController::running
	bool ___running_15;
	// UnityEngine.Events.UnityAction ScoreController::restart_action
	UnityAction_t4025899511 * ___restart_action_16;
	// UnityEngine.Events.UnityAction ScoreController::quit_action
	UnityAction_t4025899511 * ___quit_action_17;
	// System.Boolean ScoreController::scale_text
	bool ___scale_text_18;

public:
	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(ScoreController_t1938732650, ___list_2)); }
	inline Text_t356221433 * get_list_2() const { return ___list_2; }
	inline Text_t356221433 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(Text_t356221433 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier(&___list_2, value);
	}

	inline static int32_t get_offset_of_score_3() { return static_cast<int32_t>(offsetof(ScoreController_t1938732650, ___score_3)); }
	inline Text_t356221433 * get_score_3() const { return ___score_3; }
	inline Text_t356221433 ** get_address_of_score_3() { return &___score_3; }
	inline void set_score_3(Text_t356221433 * value)
	{
		___score_3 = value;
		Il2CppCodeGenWriteBarrier(&___score_3, value);
	}

	inline static int32_t get_offset_of_game_over_panel_4() { return static_cast<int32_t>(offsetof(ScoreController_t1938732650, ___game_over_panel_4)); }
	inline GameObject_t1756533147 * get_game_over_panel_4() const { return ___game_over_panel_4; }
	inline GameObject_t1756533147 ** get_address_of_game_over_panel_4() { return &___game_over_panel_4; }
	inline void set_game_over_panel_4(GameObject_t1756533147 * value)
	{
		___game_over_panel_4 = value;
		Il2CppCodeGenWriteBarrier(&___game_over_panel_4, value);
	}

	inline static int32_t get_offset_of_game_over_title_5() { return static_cast<int32_t>(offsetof(ScoreController_t1938732650, ___game_over_title_5)); }
	inline Text_t356221433 * get_game_over_title_5() const { return ___game_over_title_5; }
	inline Text_t356221433 ** get_address_of_game_over_title_5() { return &___game_over_title_5; }
	inline void set_game_over_title_5(Text_t356221433 * value)
	{
		___game_over_title_5 = value;
		Il2CppCodeGenWriteBarrier(&___game_over_title_5, value);
	}

	inline static int32_t get_offset_of_game_over_list_6() { return static_cast<int32_t>(offsetof(ScoreController_t1938732650, ___game_over_list_6)); }
	inline Text_t356221433 * get_game_over_list_6() const { return ___game_over_list_6; }
	inline Text_t356221433 ** get_address_of_game_over_list_6() { return &___game_over_list_6; }
	inline void set_game_over_list_6(Text_t356221433 * value)
	{
		___game_over_list_6 = value;
		Il2CppCodeGenWriteBarrier(&___game_over_list_6, value);
	}

	inline static int32_t get_offset_of_restart_button_7() { return static_cast<int32_t>(offsetof(ScoreController_t1938732650, ___restart_button_7)); }
	inline UIButton_t3377238306  get_restart_button_7() const { return ___restart_button_7; }
	inline UIButton_t3377238306 * get_address_of_restart_button_7() { return &___restart_button_7; }
	inline void set_restart_button_7(UIButton_t3377238306  value)
	{
		___restart_button_7 = value;
	}

	inline static int32_t get_offset_of_quit_button_8() { return static_cast<int32_t>(offsetof(ScoreController_t1938732650, ___quit_button_8)); }
	inline UIButton_t3377238306  get_quit_button_8() const { return ___quit_button_8; }
	inline UIButton_t3377238306 * get_address_of_quit_button_8() { return &___quit_button_8; }
	inline void set_quit_button_8(UIButton_t3377238306  value)
	{
		___quit_button_8 = value;
	}

	inline static int32_t get_offset_of_send_button_9() { return static_cast<int32_t>(offsetof(ScoreController_t1938732650, ___send_button_9)); }
	inline UIButton_t3377238306  get_send_button_9() const { return ___send_button_9; }
	inline UIButton_t3377238306 * get_address_of_send_button_9() { return &___send_button_9; }
	inline void set_send_button_9(UIButton_t3377238306  value)
	{
		___send_button_9 = value;
	}

	inline static int32_t get_offset_of_restart_go_10() { return static_cast<int32_t>(offsetof(ScoreController_t1938732650, ___restart_go_10)); }
	inline GameObject_t1756533147 * get_restart_go_10() const { return ___restart_go_10; }
	inline GameObject_t1756533147 ** get_address_of_restart_go_10() { return &___restart_go_10; }
	inline void set_restart_go_10(GameObject_t1756533147 * value)
	{
		___restart_go_10 = value;
		Il2CppCodeGenWriteBarrier(&___restart_go_10, value);
	}

	inline static int32_t get_offset_of_quit_go_11() { return static_cast<int32_t>(offsetof(ScoreController_t1938732650, ___quit_go_11)); }
	inline GameObject_t1756533147 * get_quit_go_11() const { return ___quit_go_11; }
	inline GameObject_t1756533147 ** get_address_of_quit_go_11() { return &___quit_go_11; }
	inline void set_quit_go_11(GameObject_t1756533147 * value)
	{
		___quit_go_11 = value;
		Il2CppCodeGenWriteBarrier(&___quit_go_11, value);
	}

	inline static int32_t get_offset_of_send_go_12() { return static_cast<int32_t>(offsetof(ScoreController_t1938732650, ___send_go_12)); }
	inline GameObject_t1756533147 * get_send_go_12() const { return ___send_go_12; }
	inline GameObject_t1756533147 ** get_address_of_send_go_12() { return &___send_go_12; }
	inline void set_send_go_12(GameObject_t1756533147 * value)
	{
		___send_go_12 = value;
		Il2CppCodeGenWriteBarrier(&___send_go_12, value);
	}

	inline static int32_t get_offset_of_username_13() { return static_cast<int32_t>(offsetof(ScoreController_t1938732650, ___username_13)); }
	inline InputField_t1631627530 * get_username_13() const { return ___username_13; }
	inline InputField_t1631627530 ** get_address_of_username_13() { return &___username_13; }
	inline void set_username_13(InputField_t1631627530 * value)
	{
		___username_13 = value;
		Il2CppCodeGenWriteBarrier(&___username_13, value);
	}

	inline static int32_t get_offset_of_running_15() { return static_cast<int32_t>(offsetof(ScoreController_t1938732650, ___running_15)); }
	inline bool get_running_15() const { return ___running_15; }
	inline bool* get_address_of_running_15() { return &___running_15; }
	inline void set_running_15(bool value)
	{
		___running_15 = value;
	}

	inline static int32_t get_offset_of_restart_action_16() { return static_cast<int32_t>(offsetof(ScoreController_t1938732650, ___restart_action_16)); }
	inline UnityAction_t4025899511 * get_restart_action_16() const { return ___restart_action_16; }
	inline UnityAction_t4025899511 ** get_address_of_restart_action_16() { return &___restart_action_16; }
	inline void set_restart_action_16(UnityAction_t4025899511 * value)
	{
		___restart_action_16 = value;
		Il2CppCodeGenWriteBarrier(&___restart_action_16, value);
	}

	inline static int32_t get_offset_of_quit_action_17() { return static_cast<int32_t>(offsetof(ScoreController_t1938732650, ___quit_action_17)); }
	inline UnityAction_t4025899511 * get_quit_action_17() const { return ___quit_action_17; }
	inline UnityAction_t4025899511 ** get_address_of_quit_action_17() { return &___quit_action_17; }
	inline void set_quit_action_17(UnityAction_t4025899511 * value)
	{
		___quit_action_17 = value;
		Il2CppCodeGenWriteBarrier(&___quit_action_17, value);
	}

	inline static int32_t get_offset_of_scale_text_18() { return static_cast<int32_t>(offsetof(ScoreController_t1938732650, ___scale_text_18)); }
	inline bool get_scale_text_18() const { return ___scale_text_18; }
	inline bool* get_address_of_scale_text_18() { return &___scale_text_18; }
	inline void set_scale_text_18(bool value)
	{
		___scale_text_18 = value;
	}
};

struct ScoreController_t1938732650_StaticFields
{
public:
	// System.Single ScoreController::current_score
	float ___current_score_14;

public:
	inline static int32_t get_offset_of_current_score_14() { return static_cast<int32_t>(offsetof(ScoreController_t1938732650_StaticFields, ___current_score_14)); }
	inline float get_current_score_14() const { return ___current_score_14; }
	inline float* get_address_of_current_score_14() { return &___current_score_14; }
	inline void set_current_score_14(float value)
	{
		___current_score_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
