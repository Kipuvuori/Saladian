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
// ShipController
struct ShipController_t3277973446;
// EnemyData
struct EnemyData_t3337215892;
// PlayerController
struct PlayerController_t4148409433;

#include "AssemblyU2DCSharp_ObjectController1726962475.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyController
struct  EnemyController_t2146768720  : public ObjectController_t1726962475
{
public:
	// UnityEngine.GameObject EnemyController::health_panel
	GameObject_t1756533147 * ___health_panel_4;
	// ShipController EnemyController::ship
	ShipController_t3277973446 * ___ship_5;
	// EnemyData EnemyController::data
	EnemyData_t3337215892 * ___data_6;
	// System.Boolean EnemyController::running
	bool ___running_7;
	// PlayerController EnemyController::player_to_hunt
	PlayerController_t4148409433 * ___player_to_hunt_8;
	// System.Single EnemyController::ai_run_cycle
	float ___ai_run_cycle_9;
	// System.Single EnemyController::ai_tick
	float ___ai_tick_10;
	// System.Single EnemyController::ai_shoot_cycle
	float ___ai_shoot_cycle_11;
	// System.Single EnemyController::ai_shoot_between
	float ___ai_shoot_between_12;

public:
	inline static int32_t get_offset_of_health_panel_4() { return static_cast<int32_t>(offsetof(EnemyController_t2146768720, ___health_panel_4)); }
	inline GameObject_t1756533147 * get_health_panel_4() const { return ___health_panel_4; }
	inline GameObject_t1756533147 ** get_address_of_health_panel_4() { return &___health_panel_4; }
	inline void set_health_panel_4(GameObject_t1756533147 * value)
	{
		___health_panel_4 = value;
		Il2CppCodeGenWriteBarrier(&___health_panel_4, value);
	}

	inline static int32_t get_offset_of_ship_5() { return static_cast<int32_t>(offsetof(EnemyController_t2146768720, ___ship_5)); }
	inline ShipController_t3277973446 * get_ship_5() const { return ___ship_5; }
	inline ShipController_t3277973446 ** get_address_of_ship_5() { return &___ship_5; }
	inline void set_ship_5(ShipController_t3277973446 * value)
	{
		___ship_5 = value;
		Il2CppCodeGenWriteBarrier(&___ship_5, value);
	}

	inline static int32_t get_offset_of_data_6() { return static_cast<int32_t>(offsetof(EnemyController_t2146768720, ___data_6)); }
	inline EnemyData_t3337215892 * get_data_6() const { return ___data_6; }
	inline EnemyData_t3337215892 ** get_address_of_data_6() { return &___data_6; }
	inline void set_data_6(EnemyData_t3337215892 * value)
	{
		___data_6 = value;
		Il2CppCodeGenWriteBarrier(&___data_6, value);
	}

	inline static int32_t get_offset_of_running_7() { return static_cast<int32_t>(offsetof(EnemyController_t2146768720, ___running_7)); }
	inline bool get_running_7() const { return ___running_7; }
	inline bool* get_address_of_running_7() { return &___running_7; }
	inline void set_running_7(bool value)
	{
		___running_7 = value;
	}

	inline static int32_t get_offset_of_player_to_hunt_8() { return static_cast<int32_t>(offsetof(EnemyController_t2146768720, ___player_to_hunt_8)); }
	inline PlayerController_t4148409433 * get_player_to_hunt_8() const { return ___player_to_hunt_8; }
	inline PlayerController_t4148409433 ** get_address_of_player_to_hunt_8() { return &___player_to_hunt_8; }
	inline void set_player_to_hunt_8(PlayerController_t4148409433 * value)
	{
		___player_to_hunt_8 = value;
		Il2CppCodeGenWriteBarrier(&___player_to_hunt_8, value);
	}

	inline static int32_t get_offset_of_ai_run_cycle_9() { return static_cast<int32_t>(offsetof(EnemyController_t2146768720, ___ai_run_cycle_9)); }
	inline float get_ai_run_cycle_9() const { return ___ai_run_cycle_9; }
	inline float* get_address_of_ai_run_cycle_9() { return &___ai_run_cycle_9; }
	inline void set_ai_run_cycle_9(float value)
	{
		___ai_run_cycle_9 = value;
	}

	inline static int32_t get_offset_of_ai_tick_10() { return static_cast<int32_t>(offsetof(EnemyController_t2146768720, ___ai_tick_10)); }
	inline float get_ai_tick_10() const { return ___ai_tick_10; }
	inline float* get_address_of_ai_tick_10() { return &___ai_tick_10; }
	inline void set_ai_tick_10(float value)
	{
		___ai_tick_10 = value;
	}

	inline static int32_t get_offset_of_ai_shoot_cycle_11() { return static_cast<int32_t>(offsetof(EnemyController_t2146768720, ___ai_shoot_cycle_11)); }
	inline float get_ai_shoot_cycle_11() const { return ___ai_shoot_cycle_11; }
	inline float* get_address_of_ai_shoot_cycle_11() { return &___ai_shoot_cycle_11; }
	inline void set_ai_shoot_cycle_11(float value)
	{
		___ai_shoot_cycle_11 = value;
	}

	inline static int32_t get_offset_of_ai_shoot_between_12() { return static_cast<int32_t>(offsetof(EnemyController_t2146768720, ___ai_shoot_between_12)); }
	inline float get_ai_shoot_between_12() const { return ___ai_shoot_between_12; }
	inline float* get_address_of_ai_shoot_between_12() { return &___ai_shoot_between_12; }
	inline void set_ai_shoot_between_12(float value)
	{
		___ai_shoot_between_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
