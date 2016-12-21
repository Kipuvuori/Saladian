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
// PlayerData
struct PlayerData_t3643615029;

#include "AssemblyU2DCSharp_ObjectController1726962475.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public ObjectController_t1726962475
{
public:
	// UnityEngine.GameObject PlayerController::health_panel
	GameObject_t1756533147 * ___health_panel_4;
	// ShipController PlayerController::ship
	ShipController_t3277973446 * ___ship_5;
	// PlayerData PlayerController::data
	PlayerData_t3643615029 * ___data_6;

public:
	inline static int32_t get_offset_of_health_panel_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___health_panel_4)); }
	inline GameObject_t1756533147 * get_health_panel_4() const { return ___health_panel_4; }
	inline GameObject_t1756533147 ** get_address_of_health_panel_4() { return &___health_panel_4; }
	inline void set_health_panel_4(GameObject_t1756533147 * value)
	{
		___health_panel_4 = value;
		Il2CppCodeGenWriteBarrier(&___health_panel_4, value);
	}

	inline static int32_t get_offset_of_ship_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___ship_5)); }
	inline ShipController_t3277973446 * get_ship_5() const { return ___ship_5; }
	inline ShipController_t3277973446 ** get_address_of_ship_5() { return &___ship_5; }
	inline void set_ship_5(ShipController_t3277973446 * value)
	{
		___ship_5 = value;
		Il2CppCodeGenWriteBarrier(&___ship_5, value);
	}

	inline static int32_t get_offset_of_data_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___data_6)); }
	inline PlayerData_t3643615029 * get_data_6() const { return ___data_6; }
	inline PlayerData_t3643615029 ** get_address_of_data_6() { return &___data_6; }
	inline void set_data_6(PlayerData_t3643615029 * value)
	{
		___data_6 = value;
		Il2CppCodeGenWriteBarrier(&___data_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
