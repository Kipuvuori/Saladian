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
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// ScoreController
struct ScoreController_t1938732650;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_SceneController38942716.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t3607102586  : public SceneController_t38942716
{
public:
	// UnityEngine.GameObject GameController::players_ship
	GameObject_t1756533147 * ___players_ship_6;
	// UnityEngine.GameObject GameController::obstacle
	GameObject_t1756533147 * ___obstacle_7;
	// UnityEngine.GameObject GameController::background
	GameObject_t1756533147 * ___background_8;
	// UnityEngine.GameObject GameController::player
	GameObject_t1756533147 * ___player_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameController::obstacles
	List_1_t1125654279 * ___obstacles_10;
	// ScoreController GameController::score_controller
	ScoreController_t1938732650 * ___score_controller_12;
	// System.Single GameController::last_obstacle
	float ___last_obstacle_16;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameController::enemies
	List_1_t1125654279 * ___enemies_17;
	// UnityEngine.GameObject GameController::healthPanel
	GameObject_t1756533147 * ___healthPanel_18;
	// System.Int32 GameController::enemy_waves
	int32_t ___enemy_waves_20;

public:
	inline static int32_t get_offset_of_players_ship_6() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___players_ship_6)); }
	inline GameObject_t1756533147 * get_players_ship_6() const { return ___players_ship_6; }
	inline GameObject_t1756533147 ** get_address_of_players_ship_6() { return &___players_ship_6; }
	inline void set_players_ship_6(GameObject_t1756533147 * value)
	{
		___players_ship_6 = value;
		Il2CppCodeGenWriteBarrier(&___players_ship_6, value);
	}

	inline static int32_t get_offset_of_obstacle_7() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___obstacle_7)); }
	inline GameObject_t1756533147 * get_obstacle_7() const { return ___obstacle_7; }
	inline GameObject_t1756533147 ** get_address_of_obstacle_7() { return &___obstacle_7; }
	inline void set_obstacle_7(GameObject_t1756533147 * value)
	{
		___obstacle_7 = value;
		Il2CppCodeGenWriteBarrier(&___obstacle_7, value);
	}

	inline static int32_t get_offset_of_background_8() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___background_8)); }
	inline GameObject_t1756533147 * get_background_8() const { return ___background_8; }
	inline GameObject_t1756533147 ** get_address_of_background_8() { return &___background_8; }
	inline void set_background_8(GameObject_t1756533147 * value)
	{
		___background_8 = value;
		Il2CppCodeGenWriteBarrier(&___background_8, value);
	}

	inline static int32_t get_offset_of_player_9() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___player_9)); }
	inline GameObject_t1756533147 * get_player_9() const { return ___player_9; }
	inline GameObject_t1756533147 ** get_address_of_player_9() { return &___player_9; }
	inline void set_player_9(GameObject_t1756533147 * value)
	{
		___player_9 = value;
		Il2CppCodeGenWriteBarrier(&___player_9, value);
	}

	inline static int32_t get_offset_of_obstacles_10() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___obstacles_10)); }
	inline List_1_t1125654279 * get_obstacles_10() const { return ___obstacles_10; }
	inline List_1_t1125654279 ** get_address_of_obstacles_10() { return &___obstacles_10; }
	inline void set_obstacles_10(List_1_t1125654279 * value)
	{
		___obstacles_10 = value;
		Il2CppCodeGenWriteBarrier(&___obstacles_10, value);
	}

	inline static int32_t get_offset_of_score_controller_12() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___score_controller_12)); }
	inline ScoreController_t1938732650 * get_score_controller_12() const { return ___score_controller_12; }
	inline ScoreController_t1938732650 ** get_address_of_score_controller_12() { return &___score_controller_12; }
	inline void set_score_controller_12(ScoreController_t1938732650 * value)
	{
		___score_controller_12 = value;
		Il2CppCodeGenWriteBarrier(&___score_controller_12, value);
	}

	inline static int32_t get_offset_of_last_obstacle_16() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___last_obstacle_16)); }
	inline float get_last_obstacle_16() const { return ___last_obstacle_16; }
	inline float* get_address_of_last_obstacle_16() { return &___last_obstacle_16; }
	inline void set_last_obstacle_16(float value)
	{
		___last_obstacle_16 = value;
	}

	inline static int32_t get_offset_of_enemies_17() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___enemies_17)); }
	inline List_1_t1125654279 * get_enemies_17() const { return ___enemies_17; }
	inline List_1_t1125654279 ** get_address_of_enemies_17() { return &___enemies_17; }
	inline void set_enemies_17(List_1_t1125654279 * value)
	{
		___enemies_17 = value;
		Il2CppCodeGenWriteBarrier(&___enemies_17, value);
	}

	inline static int32_t get_offset_of_healthPanel_18() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___healthPanel_18)); }
	inline GameObject_t1756533147 * get_healthPanel_18() const { return ___healthPanel_18; }
	inline GameObject_t1756533147 ** get_address_of_healthPanel_18() { return &___healthPanel_18; }
	inline void set_healthPanel_18(GameObject_t1756533147 * value)
	{
		___healthPanel_18 = value;
		Il2CppCodeGenWriteBarrier(&___healthPanel_18, value);
	}

	inline static int32_t get_offset_of_enemy_waves_20() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___enemy_waves_20)); }
	inline int32_t get_enemy_waves_20() const { return ___enemy_waves_20; }
	inline int32_t* get_address_of_enemy_waves_20() { return &___enemy_waves_20; }
	inline void set_enemy_waves_20(int32_t value)
	{
		___enemy_waves_20 = value;
	}
};

struct GameController_t3607102586_StaticFields
{
public:
	// UnityEngine.GameObject GameController::ObstacleMama
	GameObject_t1756533147 * ___ObstacleMama_11;

public:
	inline static int32_t get_offset_of_ObstacleMama_11() { return static_cast<int32_t>(offsetof(GameController_t3607102586_StaticFields, ___ObstacleMama_11)); }
	inline GameObject_t1756533147 * get_ObstacleMama_11() const { return ___ObstacleMama_11; }
	inline GameObject_t1756533147 ** get_address_of_ObstacleMama_11() { return &___ObstacleMama_11; }
	inline void set_ObstacleMama_11(GameObject_t1756533147 * value)
	{
		___ObstacleMama_11 = value;
		Il2CppCodeGenWriteBarrier(&___ObstacleMama_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
