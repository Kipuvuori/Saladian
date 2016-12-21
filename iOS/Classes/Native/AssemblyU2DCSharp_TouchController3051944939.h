#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_InputController3951031284.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchController
struct  TouchController_t3051944939  : public InputController_t3951031284
{
public:
	// System.Boolean TouchController::shooting
	bool ___shooting_5;

public:
	inline static int32_t get_offset_of_shooting_5() { return static_cast<int32_t>(offsetof(TouchController_t3051944939, ___shooting_5)); }
	inline bool get_shooting_5() const { return ___shooting_5; }
	inline bool* get_address_of_shooting_5() { return &___shooting_5; }
	inline void set_shooting_5(bool value)
	{
		___shooting_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
