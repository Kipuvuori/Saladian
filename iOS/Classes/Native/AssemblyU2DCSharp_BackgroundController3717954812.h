#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// BackgroundData
struct BackgroundData_t177760760;

#include "AssemblyU2DCSharp_UIController2029583246.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BackgroundController
struct  BackgroundController_t3717954812  : public UIController_t2029583246
{
public:
	// UnityEngine.Camera BackgroundController::MainCamera
	Camera_t189460977 * ___MainCamera_2;
	// UnityEngine.SpriteRenderer BackgroundController::sprite_renderer
	SpriteRenderer_t1209076198 * ___sprite_renderer_3;
	// BackgroundData BackgroundController::data
	BackgroundData_t177760760 * ___data_5;

public:
	inline static int32_t get_offset_of_MainCamera_2() { return static_cast<int32_t>(offsetof(BackgroundController_t3717954812, ___MainCamera_2)); }
	inline Camera_t189460977 * get_MainCamera_2() const { return ___MainCamera_2; }
	inline Camera_t189460977 ** get_address_of_MainCamera_2() { return &___MainCamera_2; }
	inline void set_MainCamera_2(Camera_t189460977 * value)
	{
		___MainCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___MainCamera_2, value);
	}

	inline static int32_t get_offset_of_sprite_renderer_3() { return static_cast<int32_t>(offsetof(BackgroundController_t3717954812, ___sprite_renderer_3)); }
	inline SpriteRenderer_t1209076198 * get_sprite_renderer_3() const { return ___sprite_renderer_3; }
	inline SpriteRenderer_t1209076198 ** get_address_of_sprite_renderer_3() { return &___sprite_renderer_3; }
	inline void set_sprite_renderer_3(SpriteRenderer_t1209076198 * value)
	{
		___sprite_renderer_3 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_renderer_3, value);
	}

	inline static int32_t get_offset_of_data_5() { return static_cast<int32_t>(offsetof(BackgroundController_t3717954812, ___data_5)); }
	inline BackgroundData_t177760760 * get_data_5() const { return ___data_5; }
	inline BackgroundData_t177760760 ** get_address_of_data_5() { return &___data_5; }
	inline void set_data_5(BackgroundData_t177760760 * value)
	{
		___data_5 = value;
		Il2CppCodeGenWriteBarrier(&___data_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
