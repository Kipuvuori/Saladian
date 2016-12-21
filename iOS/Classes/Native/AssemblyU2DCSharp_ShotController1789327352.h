#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// ShotData
struct ShotData_t3672991984;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t1873220070;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "AssemblyU2DCSharp_ObjectController1726962475.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShotController
struct  ShotController_t1789327352  : public ObjectController_t1726962475
{
public:
	// System.Int32 ShotController::speed
	int32_t ___speed_4;
	// UnityEngine.Rigidbody2D ShotController::rigid_body
	Rigidbody2D_t502193897 * ___rigid_body_5;
	// UnityEngine.SpriteRenderer ShotController::sprite_renderer
	SpriteRenderer_t1209076198 * ___sprite_renderer_6;
	// ShotData ShotController::data
	ShotData_t3672991984 * ___data_7;
	// UnityEngine.AudioSource[] ShotController::sounds
	AudioSourceU5BU5D_t1873220070* ___sounds_8;
	// UnityEngine.AudioSource ShotController::sound_laser
	AudioSource_t1135106623 * ___sound_laser_9;
	// UnityEngine.AudioSource ShotController::sound_hit
	AudioSource_t1135106623 * ___sound_hit_10;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(ShotController_t1789327352, ___speed_4)); }
	inline int32_t get_speed_4() const { return ___speed_4; }
	inline int32_t* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(int32_t value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_rigid_body_5() { return static_cast<int32_t>(offsetof(ShotController_t1789327352, ___rigid_body_5)); }
	inline Rigidbody2D_t502193897 * get_rigid_body_5() const { return ___rigid_body_5; }
	inline Rigidbody2D_t502193897 ** get_address_of_rigid_body_5() { return &___rigid_body_5; }
	inline void set_rigid_body_5(Rigidbody2D_t502193897 * value)
	{
		___rigid_body_5 = value;
		Il2CppCodeGenWriteBarrier(&___rigid_body_5, value);
	}

	inline static int32_t get_offset_of_sprite_renderer_6() { return static_cast<int32_t>(offsetof(ShotController_t1789327352, ___sprite_renderer_6)); }
	inline SpriteRenderer_t1209076198 * get_sprite_renderer_6() const { return ___sprite_renderer_6; }
	inline SpriteRenderer_t1209076198 ** get_address_of_sprite_renderer_6() { return &___sprite_renderer_6; }
	inline void set_sprite_renderer_6(SpriteRenderer_t1209076198 * value)
	{
		___sprite_renderer_6 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_renderer_6, value);
	}

	inline static int32_t get_offset_of_data_7() { return static_cast<int32_t>(offsetof(ShotController_t1789327352, ___data_7)); }
	inline ShotData_t3672991984 * get_data_7() const { return ___data_7; }
	inline ShotData_t3672991984 ** get_address_of_data_7() { return &___data_7; }
	inline void set_data_7(ShotData_t3672991984 * value)
	{
		___data_7 = value;
		Il2CppCodeGenWriteBarrier(&___data_7, value);
	}

	inline static int32_t get_offset_of_sounds_8() { return static_cast<int32_t>(offsetof(ShotController_t1789327352, ___sounds_8)); }
	inline AudioSourceU5BU5D_t1873220070* get_sounds_8() const { return ___sounds_8; }
	inline AudioSourceU5BU5D_t1873220070** get_address_of_sounds_8() { return &___sounds_8; }
	inline void set_sounds_8(AudioSourceU5BU5D_t1873220070* value)
	{
		___sounds_8 = value;
		Il2CppCodeGenWriteBarrier(&___sounds_8, value);
	}

	inline static int32_t get_offset_of_sound_laser_9() { return static_cast<int32_t>(offsetof(ShotController_t1789327352, ___sound_laser_9)); }
	inline AudioSource_t1135106623 * get_sound_laser_9() const { return ___sound_laser_9; }
	inline AudioSource_t1135106623 ** get_address_of_sound_laser_9() { return &___sound_laser_9; }
	inline void set_sound_laser_9(AudioSource_t1135106623 * value)
	{
		___sound_laser_9 = value;
		Il2CppCodeGenWriteBarrier(&___sound_laser_9, value);
	}

	inline static int32_t get_offset_of_sound_hit_10() { return static_cast<int32_t>(offsetof(ShotController_t1789327352, ___sound_hit_10)); }
	inline AudioSource_t1135106623 * get_sound_hit_10() const { return ___sound_hit_10; }
	inline AudioSource_t1135106623 ** get_address_of_sound_hit_10() { return &___sound_hit_10; }
	inline void set_sound_hit_10(AudioSource_t1135106623 * value)
	{
		___sound_hit_10 = value;
		Il2CppCodeGenWriteBarrier(&___sound_hit_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
