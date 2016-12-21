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

// ShotData
struct  ShotData_t3672991984  : public Il2CppObject
{
public:
	// System.Int32 ShotData::health
	int32_t ___health_1;

public:
	inline static int32_t get_offset_of_health_1() { return static_cast<int32_t>(offsetof(ShotData_t3672991984, ___health_1)); }
	inline int32_t get_health_1() const { return ___health_1; }
	inline int32_t* get_address_of_health_1() { return &___health_1; }
	inline void set_health_1(int32_t value)
	{
		___health_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
