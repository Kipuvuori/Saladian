#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;

#include "AssemblyU2DCSharp_Controller1937198888.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectController
struct  ObjectController_t1726962475  : public Controller_t1937198888
{
public:
	// UnityEngine.Animator ObjectController::animator
	Animator_t69676727 * ___animator_2;
	// UnityEngine.SpriteRenderer ObjectController::sprite_renderer
	SpriteRenderer_t1209076198 * ___sprite_renderer_3;

public:
	inline static int32_t get_offset_of_animator_2() { return static_cast<int32_t>(offsetof(ObjectController_t1726962475, ___animator_2)); }
	inline Animator_t69676727 * get_animator_2() const { return ___animator_2; }
	inline Animator_t69676727 ** get_address_of_animator_2() { return &___animator_2; }
	inline void set_animator_2(Animator_t69676727 * value)
	{
		___animator_2 = value;
		Il2CppCodeGenWriteBarrier(&___animator_2, value);
	}

	inline static int32_t get_offset_of_sprite_renderer_3() { return static_cast<int32_t>(offsetof(ObjectController_t1726962475, ___sprite_renderer_3)); }
	inline SpriteRenderer_t1209076198 * get_sprite_renderer_3() const { return ___sprite_renderer_3; }
	inline SpriteRenderer_t1209076198 ** get_address_of_sprite_renderer_3() { return &___sprite_renderer_3; }
	inline void set_sprite_renderer_3(SpriteRenderer_t1209076198 * value)
	{
		___sprite_renderer_3 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_renderer_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
