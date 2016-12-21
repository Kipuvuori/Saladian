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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyData
struct  EnemyData_t3337215892  : public Il2CppObject
{
public:
	// System.Int32 EnemyData::speed
	int32_t ___speed_1;

public:
	inline static int32_t get_offset_of_speed_1() { return static_cast<int32_t>(offsetof(EnemyData_t3337215892, ___speed_1)); }
	inline int32_t get_speed_1() const { return ___speed_1; }
	inline int32_t* get_address_of_speed_1() { return &___speed_1; }
	inline void set_speed_1(int32_t value)
	{
		___speed_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
