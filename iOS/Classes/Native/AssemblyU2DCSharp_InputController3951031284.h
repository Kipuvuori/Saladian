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
// UnityEngine.GameObject
struct GameObject_t1756533147;
// InputData
struct InputData_t613368312;

#include "AssemblyU2DCSharp_Controller1937198888.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InputController
struct  InputController_t3951031284  : public Controller_t1937198888
{
public:
	// UnityEngine.Camera InputController::MainCamera
	Camera_t189460977 * ___MainCamera_2;
	// UnityEngine.GameObject InputController::selected
	GameObject_t1756533147 * ___selected_3;
	// InputData InputController::data
	InputData_t613368312 * ___data_4;

public:
	inline static int32_t get_offset_of_MainCamera_2() { return static_cast<int32_t>(offsetof(InputController_t3951031284, ___MainCamera_2)); }
	inline Camera_t189460977 * get_MainCamera_2() const { return ___MainCamera_2; }
	inline Camera_t189460977 ** get_address_of_MainCamera_2() { return &___MainCamera_2; }
	inline void set_MainCamera_2(Camera_t189460977 * value)
	{
		___MainCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___MainCamera_2, value);
	}

	inline static int32_t get_offset_of_selected_3() { return static_cast<int32_t>(offsetof(InputController_t3951031284, ___selected_3)); }
	inline GameObject_t1756533147 * get_selected_3() const { return ___selected_3; }
	inline GameObject_t1756533147 ** get_address_of_selected_3() { return &___selected_3; }
	inline void set_selected_3(GameObject_t1756533147 * value)
	{
		___selected_3 = value;
		Il2CppCodeGenWriteBarrier(&___selected_3, value);
	}

	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(InputController_t3951031284, ___data_4)); }
	inline InputData_t613368312 * get_data_4() const { return ___data_4; }
	inline InputData_t613368312 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(InputData_t613368312 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier(&___data_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
