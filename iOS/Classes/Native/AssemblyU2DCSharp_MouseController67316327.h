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

// MouseController
struct  MouseController_t67316327  : public InputController_t3951031284
{
public:
	// System.Boolean MouseController::shooting
	bool ___shooting_8;

public:
	inline static int32_t get_offset_of_shooting_8() { return static_cast<int32_t>(offsetof(MouseController_t67316327, ___shooting_8)); }
	inline bool get_shooting_8() const { return ___shooting_8; }
	inline bool* get_address_of_shooting_8() { return &___shooting_8; }
	inline void set_shooting_8(bool value)
	{
		___shooting_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
