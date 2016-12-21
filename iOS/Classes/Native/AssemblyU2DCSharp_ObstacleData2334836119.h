#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObstacleData
struct  ObstacleData_t2334836119  : public Il2CppObject
{
public:
	// UnityEngine.Vector2 ObstacleData::start_position
	Vector2_t2243707579  ___start_position_0;
	// System.Int32 ObstacleData::direction
	int32_t ___direction_1;
	// System.Int32 ObstacleData::speed
	int32_t ___speed_2;
	// System.Single ObstacleData::last_move_time
	float ___last_move_time_6;
	// UnityEngine.Vector3 ObstacleData::rotation
	Vector3_t2243707580  ___rotation_8;
	// System.Int32 ObstacleData::health
	int32_t ___health_9;
	// UnityEngine.Vector3 ObstacleData::start_viewport
	Vector3_t2243707580  ___start_viewport_11;

public:
	inline static int32_t get_offset_of_start_position_0() { return static_cast<int32_t>(offsetof(ObstacleData_t2334836119, ___start_position_0)); }
	inline Vector2_t2243707579  get_start_position_0() const { return ___start_position_0; }
	inline Vector2_t2243707579 * get_address_of_start_position_0() { return &___start_position_0; }
	inline void set_start_position_0(Vector2_t2243707579  value)
	{
		___start_position_0 = value;
	}

	inline static int32_t get_offset_of_direction_1() { return static_cast<int32_t>(offsetof(ObstacleData_t2334836119, ___direction_1)); }
	inline int32_t get_direction_1() const { return ___direction_1; }
	inline int32_t* get_address_of_direction_1() { return &___direction_1; }
	inline void set_direction_1(int32_t value)
	{
		___direction_1 = value;
	}

	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(ObstacleData_t2334836119, ___speed_2)); }
	inline int32_t get_speed_2() const { return ___speed_2; }
	inline int32_t* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(int32_t value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_last_move_time_6() { return static_cast<int32_t>(offsetof(ObstacleData_t2334836119, ___last_move_time_6)); }
	inline float get_last_move_time_6() const { return ___last_move_time_6; }
	inline float* get_address_of_last_move_time_6() { return &___last_move_time_6; }
	inline void set_last_move_time_6(float value)
	{
		___last_move_time_6 = value;
	}

	inline static int32_t get_offset_of_rotation_8() { return static_cast<int32_t>(offsetof(ObstacleData_t2334836119, ___rotation_8)); }
	inline Vector3_t2243707580  get_rotation_8() const { return ___rotation_8; }
	inline Vector3_t2243707580 * get_address_of_rotation_8() { return &___rotation_8; }
	inline void set_rotation_8(Vector3_t2243707580  value)
	{
		___rotation_8 = value;
	}

	inline static int32_t get_offset_of_health_9() { return static_cast<int32_t>(offsetof(ObstacleData_t2334836119, ___health_9)); }
	inline int32_t get_health_9() const { return ___health_9; }
	inline int32_t* get_address_of_health_9() { return &___health_9; }
	inline void set_health_9(int32_t value)
	{
		___health_9 = value;
	}

	inline static int32_t get_offset_of_start_viewport_11() { return static_cast<int32_t>(offsetof(ObstacleData_t2334836119, ___start_viewport_11)); }
	inline Vector3_t2243707580  get_start_viewport_11() const { return ___start_viewport_11; }
	inline Vector3_t2243707580 * get_address_of_start_viewport_11() { return &___start_viewport_11; }
	inline void set_start_viewport_11(Vector3_t2243707580  value)
	{
		___start_viewport_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
