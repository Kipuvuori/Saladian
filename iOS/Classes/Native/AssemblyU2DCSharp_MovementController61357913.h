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
// CameraController
struct CameraController_t3555666667;

#include "AssemblyU2DCSharp_ObjectController1726962475.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MovementController
struct  MovementController_t61357913  : public ObjectController_t1726962475
{
public:
	// UnityEngine.Camera MovementController::MainCamera
	Camera_t189460977 * ___MainCamera_5;
	// System.Boolean MovementController::keep_inside_camera
	bool ___keep_inside_camera_6;
	// UnityEngine.SpriteRenderer MovementController::sprite
	SpriteRenderer_t1209076198 * ___sprite_7;
	// System.Single MovementController::diff_x
	float ___diff_x_8;
	// System.Single MovementController::diff_y
	float ___diff_y_9;
	// CameraController MovementController::camera_controller
	CameraController_t3555666667 * ___camera_controller_10;

public:
	inline static int32_t get_offset_of_MainCamera_5() { return static_cast<int32_t>(offsetof(MovementController_t61357913, ___MainCamera_5)); }
	inline Camera_t189460977 * get_MainCamera_5() const { return ___MainCamera_5; }
	inline Camera_t189460977 ** get_address_of_MainCamera_5() { return &___MainCamera_5; }
	inline void set_MainCamera_5(Camera_t189460977 * value)
	{
		___MainCamera_5 = value;
		Il2CppCodeGenWriteBarrier(&___MainCamera_5, value);
	}

	inline static int32_t get_offset_of_keep_inside_camera_6() { return static_cast<int32_t>(offsetof(MovementController_t61357913, ___keep_inside_camera_6)); }
	inline bool get_keep_inside_camera_6() const { return ___keep_inside_camera_6; }
	inline bool* get_address_of_keep_inside_camera_6() { return &___keep_inside_camera_6; }
	inline void set_keep_inside_camera_6(bool value)
	{
		___keep_inside_camera_6 = value;
	}

	inline static int32_t get_offset_of_sprite_7() { return static_cast<int32_t>(offsetof(MovementController_t61357913, ___sprite_7)); }
	inline SpriteRenderer_t1209076198 * get_sprite_7() const { return ___sprite_7; }
	inline SpriteRenderer_t1209076198 ** get_address_of_sprite_7() { return &___sprite_7; }
	inline void set_sprite_7(SpriteRenderer_t1209076198 * value)
	{
		___sprite_7 = value;
		Il2CppCodeGenWriteBarrier(&___sprite_7, value);
	}

	inline static int32_t get_offset_of_diff_x_8() { return static_cast<int32_t>(offsetof(MovementController_t61357913, ___diff_x_8)); }
	inline float get_diff_x_8() const { return ___diff_x_8; }
	inline float* get_address_of_diff_x_8() { return &___diff_x_8; }
	inline void set_diff_x_8(float value)
	{
		___diff_x_8 = value;
	}

	inline static int32_t get_offset_of_diff_y_9() { return static_cast<int32_t>(offsetof(MovementController_t61357913, ___diff_y_9)); }
	inline float get_diff_y_9() const { return ___diff_y_9; }
	inline float* get_address_of_diff_y_9() { return &___diff_y_9; }
	inline void set_diff_y_9(float value)
	{
		___diff_y_9 = value;
	}

	inline static int32_t get_offset_of_camera_controller_10() { return static_cast<int32_t>(offsetof(MovementController_t61357913, ___camera_controller_10)); }
	inline CameraController_t3555666667 * get_camera_controller_10() const { return ___camera_controller_10; }
	inline CameraController_t3555666667 ** get_address_of_camera_controller_10() { return &___camera_controller_10; }
	inline void set_camera_controller_10(CameraController_t3555666667 * value)
	{
		___camera_controller_10 = value;
		Il2CppCodeGenWriteBarrier(&___camera_controller_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
