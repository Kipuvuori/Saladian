#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Button
struct Button_t2872111280;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIButton
struct  UIButton_t3377238306 
{
public:
	// UnityEngine.GameObject UIButton::gameObject
	GameObject_t1756533147 * ___gameObject_0;
	// UnityEngine.UI.Text UIButton::text
	Text_t356221433 * ___text_1;
	// UnityEngine.UI.Button UIButton::button
	Button_t2872111280 * ___button_2;

public:
	inline static int32_t get_offset_of_gameObject_0() { return static_cast<int32_t>(offsetof(UIButton_t3377238306, ___gameObject_0)); }
	inline GameObject_t1756533147 * get_gameObject_0() const { return ___gameObject_0; }
	inline GameObject_t1756533147 ** get_address_of_gameObject_0() { return &___gameObject_0; }
	inline void set_gameObject_0(GameObject_t1756533147 * value)
	{
		___gameObject_0 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_0, value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(UIButton_t3377238306, ___text_1)); }
	inline Text_t356221433 * get_text_1() const { return ___text_1; }
	inline Text_t356221433 ** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(Text_t356221433 * value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier(&___text_1, value);
	}

	inline static int32_t get_offset_of_button_2() { return static_cast<int32_t>(offsetof(UIButton_t3377238306, ___button_2)); }
	inline Button_t2872111280 * get_button_2() const { return ___button_2; }
	inline Button_t2872111280 ** get_address_of_button_2() { return &___button_2; }
	inline void set_button_2(Button_t2872111280 * value)
	{
		___button_2 = value;
		Il2CppCodeGenWriteBarrier(&___button_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UIButton
struct UIButton_t3377238306_marshaled_pinvoke
{
	GameObject_t1756533147 * ___gameObject_0;
	Text_t356221433 * ___text_1;
	Button_t2872111280 * ___button_2;
};
// Native definition for COM marshalling of UIButton
struct UIButton_t3377238306_marshaled_com
{
	GameObject_t1756533147 * ___gameObject_0;
	Text_t356221433 * ___text_1;
	Button_t2872111280 * ___button_2;
};
