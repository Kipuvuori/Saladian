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

// Score
struct  Score_t1518975274  : public Il2CppObject
{
public:
	// System.Int32 Score::id
	int32_t ___id_0;
	// System.Int32 Score::score
	int32_t ___score_1;
	// System.String Score::name
	String_t* ___name_2;
	// System.String Score::created_at
	String_t* ___created_at_3;
	// System.String Score::updated_at
	String_t* ___updated_at_4;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_score_1() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___score_1)); }
	inline int32_t get_score_1() const { return ___score_1; }
	inline int32_t* get_address_of_score_1() { return &___score_1; }
	inline void set_score_1(int32_t value)
	{
		___score_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_created_at_3() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___created_at_3)); }
	inline String_t* get_created_at_3() const { return ___created_at_3; }
	inline String_t** get_address_of_created_at_3() { return &___created_at_3; }
	inline void set_created_at_3(String_t* value)
	{
		___created_at_3 = value;
		Il2CppCodeGenWriteBarrier(&___created_at_3, value);
	}

	inline static int32_t get_offset_of_updated_at_4() { return static_cast<int32_t>(offsetof(Score_t1518975274, ___updated_at_4)); }
	inline String_t* get_updated_at_4() const { return ___updated_at_4; }
	inline String_t** get_address_of_updated_at_4() { return &___updated_at_4; }
	inline void set_updated_at_4(String_t* value)
	{
		___updated_at_4 = value;
		Il2CppCodeGenWriteBarrier(&___updated_at_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
