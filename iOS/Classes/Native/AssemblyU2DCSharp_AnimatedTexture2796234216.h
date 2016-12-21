#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t193706927;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimatedTexture
struct  AnimatedTexture_t2796234216  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector2 AnimatedTexture::speed
	Vector2_t2243707579  ___speed_2;
	// UnityEngine.Vector2 AnimatedTexture::MaxSpeed
	Vector2_t2243707579  ___MaxSpeed_3;
	// UnityEngine.Vector2 AnimatedTexture::offset
	Vector2_t2243707579  ___offset_4;
	// UnityEngine.Material AnimatedTexture::material
	Material_t193706927 * ___material_5;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(AnimatedTexture_t2796234216, ___speed_2)); }
	inline Vector2_t2243707579  get_speed_2() const { return ___speed_2; }
	inline Vector2_t2243707579 * get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(Vector2_t2243707579  value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_MaxSpeed_3() { return static_cast<int32_t>(offsetof(AnimatedTexture_t2796234216, ___MaxSpeed_3)); }
	inline Vector2_t2243707579  get_MaxSpeed_3() const { return ___MaxSpeed_3; }
	inline Vector2_t2243707579 * get_address_of_MaxSpeed_3() { return &___MaxSpeed_3; }
	inline void set_MaxSpeed_3(Vector2_t2243707579  value)
	{
		___MaxSpeed_3 = value;
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(AnimatedTexture_t2796234216, ___offset_4)); }
	inline Vector2_t2243707579  get_offset_4() const { return ___offset_4; }
	inline Vector2_t2243707579 * get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(Vector2_t2243707579  value)
	{
		___offset_4 = value;
	}

	inline static int32_t get_offset_of_material_5() { return static_cast<int32_t>(offsetof(AnimatedTexture_t2796234216, ___material_5)); }
	inline Material_t193706927 * get_material_5() const { return ___material_5; }
	inline Material_t193706927 ** get_address_of_material_5() { return &___material_5; }
	inline void set_material_5(Material_t193706927 * value)
	{
		___material_5 = value;
		Il2CppCodeGenWriteBarrier(&___material_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
