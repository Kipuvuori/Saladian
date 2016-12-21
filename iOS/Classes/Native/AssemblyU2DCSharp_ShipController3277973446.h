#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// ShipData
struct ShipData_t831616138;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "AssemblyU2DCSharp_MovementController61357913.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShipController
struct  ShipController_t3277973446  : public MovementController_t61357913
{
public:
	// UnityEngine.SpriteRenderer ShipController::sprite_renderer
	SpriteRenderer_t1209076198 * ___sprite_renderer_11;
	// UnityEngine.GameObject ShipController::parent
	GameObject_t1756533147 * ___parent_12;
	// ShipData ShipController::data
	ShipData_t831616138 * ___data_13;
	// UnityEngine.AudioSource ShipController::die_sound
	AudioSource_t1135106623 * ___die_sound_14;

public:
	inline static int32_t get_offset_of_sprite_renderer_11() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___sprite_renderer_11)); }
	inline SpriteRenderer_t1209076198 * get_sprite_renderer_11() const { return ___sprite_renderer_11; }
	inline SpriteRenderer_t1209076198 ** get_address_of_sprite_renderer_11() { return &___sprite_renderer_11; }
	inline void set_sprite_renderer_11(SpriteRenderer_t1209076198 * value)
	{
		___sprite_renderer_11 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_renderer_11, value);
	}

	inline static int32_t get_offset_of_parent_12() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___parent_12)); }
	inline GameObject_t1756533147 * get_parent_12() const { return ___parent_12; }
	inline GameObject_t1756533147 ** get_address_of_parent_12() { return &___parent_12; }
	inline void set_parent_12(GameObject_t1756533147 * value)
	{
		___parent_12 = value;
		Il2CppCodeGenWriteBarrier(&___parent_12, value);
	}

	inline static int32_t get_offset_of_data_13() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___data_13)); }
	inline ShipData_t831616138 * get_data_13() const { return ___data_13; }
	inline ShipData_t831616138 ** get_address_of_data_13() { return &___data_13; }
	inline void set_data_13(ShipData_t831616138 * value)
	{
		___data_13 = value;
		Il2CppCodeGenWriteBarrier(&___data_13, value);
	}

	inline static int32_t get_offset_of_die_sound_14() { return static_cast<int32_t>(offsetof(ShipController_t3277973446, ___die_sound_14)); }
	inline AudioSource_t1135106623 * get_die_sound_14() const { return ___die_sound_14; }
	inline AudioSource_t1135106623 ** get_address_of_die_sound_14() { return &___die_sound_14; }
	inline void set_die_sound_14(AudioSource_t1135106623 * value)
	{
		___die_sound_14 = value;
		Il2CppCodeGenWriteBarrier(&___die_sound_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
