#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// ObstacleData
struct ObstacleData_t2334836119;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;

#include "AssemblyU2DCSharp_MovementController61357913.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObstacleController
struct  ObstacleController_t2319665031  : public MovementController_t61357913
{
public:
	// UnityEngine.AudioSource ObstacleController::die_sound
	AudioSource_t1135106623 * ___die_sound_11;
	// UnityEngine.SpriteRenderer ObstacleController::sprite_renderer
	SpriteRenderer_t1209076198 * ___sprite_renderer_12;
	// ObstacleData ObstacleController::data
	ObstacleData_t2334836119 * ___data_13;
	// UnityEngine.Rigidbody2D ObstacleController::rigid_body
	Rigidbody2D_t502193897 * ___rigid_body_14;
	// System.Boolean ObstacleController::collider_set
	bool ___collider_set_15;

public:
	inline static int32_t get_offset_of_die_sound_11() { return static_cast<int32_t>(offsetof(ObstacleController_t2319665031, ___die_sound_11)); }
	inline AudioSource_t1135106623 * get_die_sound_11() const { return ___die_sound_11; }
	inline AudioSource_t1135106623 ** get_address_of_die_sound_11() { return &___die_sound_11; }
	inline void set_die_sound_11(AudioSource_t1135106623 * value)
	{
		___die_sound_11 = value;
		Il2CppCodeGenWriteBarrier(&___die_sound_11, value);
	}

	inline static int32_t get_offset_of_sprite_renderer_12() { return static_cast<int32_t>(offsetof(ObstacleController_t2319665031, ___sprite_renderer_12)); }
	inline SpriteRenderer_t1209076198 * get_sprite_renderer_12() const { return ___sprite_renderer_12; }
	inline SpriteRenderer_t1209076198 ** get_address_of_sprite_renderer_12() { return &___sprite_renderer_12; }
	inline void set_sprite_renderer_12(SpriteRenderer_t1209076198 * value)
	{
		___sprite_renderer_12 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_renderer_12, value);
	}

	inline static int32_t get_offset_of_data_13() { return static_cast<int32_t>(offsetof(ObstacleController_t2319665031, ___data_13)); }
	inline ObstacleData_t2334836119 * get_data_13() const { return ___data_13; }
	inline ObstacleData_t2334836119 ** get_address_of_data_13() { return &___data_13; }
	inline void set_data_13(ObstacleData_t2334836119 * value)
	{
		___data_13 = value;
		Il2CppCodeGenWriteBarrier(&___data_13, value);
	}

	inline static int32_t get_offset_of_rigid_body_14() { return static_cast<int32_t>(offsetof(ObstacleController_t2319665031, ___rigid_body_14)); }
	inline Rigidbody2D_t502193897 * get_rigid_body_14() const { return ___rigid_body_14; }
	inline Rigidbody2D_t502193897 ** get_address_of_rigid_body_14() { return &___rigid_body_14; }
	inline void set_rigid_body_14(Rigidbody2D_t502193897 * value)
	{
		___rigid_body_14 = value;
		Il2CppCodeGenWriteBarrier(&___rigid_body_14, value);
	}

	inline static int32_t get_offset_of_collider_set_15() { return static_cast<int32_t>(offsetof(ObstacleController_t2319665031, ___collider_set_15)); }
	inline bool get_collider_set_15() const { return ___collider_set_15; }
	inline bool* get_address_of_collider_set_15() { return &___collider_set_15; }
	inline void set_collider_set_15(bool value)
	{
		___collider_set_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
