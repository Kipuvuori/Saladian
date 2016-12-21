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
// CameraData
struct CameraData_t2215975923;

#include "AssemblyU2DCSharp_Controller1937198888.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_CameraResolution256933009.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraController
struct  CameraController_t3555666667  : public Controller_t1937198888
{
public:
	// UnityEngine.Vector2 CameraController::native_resolution
	Vector2_t2243707579  ___native_resolution_4;
	// UnityEngine.Camera CameraController::main_camera
	Camera_t189460977 * ___main_camera_5;
	// CameraData CameraController::data
	CameraData_t2215975923 * ___data_6;
	// CameraResolution CameraController::resolution
	CameraResolution_t256933009  ___resolution_7;
	// System.Boolean CameraController::preserve_aspectratio
	bool ___preserve_aspectratio_8;
	// System.Boolean CameraController::scale_set
	bool ___scale_set_9;

public:
	inline static int32_t get_offset_of_native_resolution_4() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___native_resolution_4)); }
	inline Vector2_t2243707579  get_native_resolution_4() const { return ___native_resolution_4; }
	inline Vector2_t2243707579 * get_address_of_native_resolution_4() { return &___native_resolution_4; }
	inline void set_native_resolution_4(Vector2_t2243707579  value)
	{
		___native_resolution_4 = value;
	}

	inline static int32_t get_offset_of_main_camera_5() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___main_camera_5)); }
	inline Camera_t189460977 * get_main_camera_5() const { return ___main_camera_5; }
	inline Camera_t189460977 ** get_address_of_main_camera_5() { return &___main_camera_5; }
	inline void set_main_camera_5(Camera_t189460977 * value)
	{
		___main_camera_5 = value;
		Il2CppCodeGenWriteBarrier(&___main_camera_5, value);
	}

	inline static int32_t get_offset_of_data_6() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___data_6)); }
	inline CameraData_t2215975923 * get_data_6() const { return ___data_6; }
	inline CameraData_t2215975923 ** get_address_of_data_6() { return &___data_6; }
	inline void set_data_6(CameraData_t2215975923 * value)
	{
		___data_6 = value;
		Il2CppCodeGenWriteBarrier(&___data_6, value);
	}

	inline static int32_t get_offset_of_resolution_7() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___resolution_7)); }
	inline CameraResolution_t256933009  get_resolution_7() const { return ___resolution_7; }
	inline CameraResolution_t256933009 * get_address_of_resolution_7() { return &___resolution_7; }
	inline void set_resolution_7(CameraResolution_t256933009  value)
	{
		___resolution_7 = value;
	}

	inline static int32_t get_offset_of_preserve_aspectratio_8() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___preserve_aspectratio_8)); }
	inline bool get_preserve_aspectratio_8() const { return ___preserve_aspectratio_8; }
	inline bool* get_address_of_preserve_aspectratio_8() { return &___preserve_aspectratio_8; }
	inline void set_preserve_aspectratio_8(bool value)
	{
		___preserve_aspectratio_8 = value;
	}

	inline static int32_t get_offset_of_scale_set_9() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___scale_set_9)); }
	inline bool get_scale_set_9() const { return ___scale_set_9; }
	inline bool* get_address_of_scale_set_9() { return &___scale_set_9; }
	inline void set_scale_set_9(bool value)
	{
		___scale_set_9 = value;
	}
};

struct CameraController_t3555666667_StaticFields
{
public:
	// System.Single CameraController::pixels_to_units
	float ___pixels_to_units_2;
	// System.Single CameraController::scale
	float ___scale_3;
	// System.Single CameraController::desiredRatio
	float ___desiredRatio_10;
	// UnityEngine.Color CameraController::bg_color
	Color_t2020392075  ___bg_color_11;
	// UnityEngine.Camera CameraController::backgroundCam
	Camera_t189460977 * ___backgroundCam_12;

public:
	inline static int32_t get_offset_of_pixels_to_units_2() { return static_cast<int32_t>(offsetof(CameraController_t3555666667_StaticFields, ___pixels_to_units_2)); }
	inline float get_pixels_to_units_2() const { return ___pixels_to_units_2; }
	inline float* get_address_of_pixels_to_units_2() { return &___pixels_to_units_2; }
	inline void set_pixels_to_units_2(float value)
	{
		___pixels_to_units_2 = value;
	}

	inline static int32_t get_offset_of_scale_3() { return static_cast<int32_t>(offsetof(CameraController_t3555666667_StaticFields, ___scale_3)); }
	inline float get_scale_3() const { return ___scale_3; }
	inline float* get_address_of_scale_3() { return &___scale_3; }
	inline void set_scale_3(float value)
	{
		___scale_3 = value;
	}

	inline static int32_t get_offset_of_desiredRatio_10() { return static_cast<int32_t>(offsetof(CameraController_t3555666667_StaticFields, ___desiredRatio_10)); }
	inline float get_desiredRatio_10() const { return ___desiredRatio_10; }
	inline float* get_address_of_desiredRatio_10() { return &___desiredRatio_10; }
	inline void set_desiredRatio_10(float value)
	{
		___desiredRatio_10 = value;
	}

	inline static int32_t get_offset_of_bg_color_11() { return static_cast<int32_t>(offsetof(CameraController_t3555666667_StaticFields, ___bg_color_11)); }
	inline Color_t2020392075  get_bg_color_11() const { return ___bg_color_11; }
	inline Color_t2020392075 * get_address_of_bg_color_11() { return &___bg_color_11; }
	inline void set_bg_color_11(Color_t2020392075  value)
	{
		___bg_color_11 = value;
	}

	inline static int32_t get_offset_of_backgroundCam_12() { return static_cast<int32_t>(offsetof(CameraController_t3555666667_StaticFields, ___backgroundCam_12)); }
	inline Camera_t189460977 * get_backgroundCam_12() const { return ___backgroundCam_12; }
	inline Camera_t189460977 ** get_address_of_backgroundCam_12() { return &___backgroundCam_12; }
	inline void set_backgroundCam_12(Camera_t189460977 * value)
	{
		___backgroundCam_12 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundCam_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
