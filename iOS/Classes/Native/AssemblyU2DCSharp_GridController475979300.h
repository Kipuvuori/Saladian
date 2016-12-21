#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_t1515633077;

#include "AssemblyU2DCSharp_UIController2029583246.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GridController
struct  GridController_t475979300  : public UIController_t2029583246
{
public:
	// UnityEngine.UI.GridLayoutGroup GridController::grid_layout
	GridLayoutGroup_t1515633077 * ___grid_layout_2;
	// System.Boolean GridController::text_resize_needed
	bool ___text_resize_needed_3;
	// System.Boolean GridController::best_fit_on
	bool ___best_fit_on_4;
	// System.Single GridController::PADDING_WIDTH
	float ___PADDING_WIDTH_5;
	// System.Single GridController::PADDING_HEIGHT
	float ___PADDING_HEIGHT_6;

public:
	inline static int32_t get_offset_of_grid_layout_2() { return static_cast<int32_t>(offsetof(GridController_t475979300, ___grid_layout_2)); }
	inline GridLayoutGroup_t1515633077 * get_grid_layout_2() const { return ___grid_layout_2; }
	inline GridLayoutGroup_t1515633077 ** get_address_of_grid_layout_2() { return &___grid_layout_2; }
	inline void set_grid_layout_2(GridLayoutGroup_t1515633077 * value)
	{
		___grid_layout_2 = value;
		Il2CppCodeGenWriteBarrier(&___grid_layout_2, value);
	}

	inline static int32_t get_offset_of_text_resize_needed_3() { return static_cast<int32_t>(offsetof(GridController_t475979300, ___text_resize_needed_3)); }
	inline bool get_text_resize_needed_3() const { return ___text_resize_needed_3; }
	inline bool* get_address_of_text_resize_needed_3() { return &___text_resize_needed_3; }
	inline void set_text_resize_needed_3(bool value)
	{
		___text_resize_needed_3 = value;
	}

	inline static int32_t get_offset_of_best_fit_on_4() { return static_cast<int32_t>(offsetof(GridController_t475979300, ___best_fit_on_4)); }
	inline bool get_best_fit_on_4() const { return ___best_fit_on_4; }
	inline bool* get_address_of_best_fit_on_4() { return &___best_fit_on_4; }
	inline void set_best_fit_on_4(bool value)
	{
		___best_fit_on_4 = value;
	}

	inline static int32_t get_offset_of_PADDING_WIDTH_5() { return static_cast<int32_t>(offsetof(GridController_t475979300, ___PADDING_WIDTH_5)); }
	inline float get_PADDING_WIDTH_5() const { return ___PADDING_WIDTH_5; }
	inline float* get_address_of_PADDING_WIDTH_5() { return &___PADDING_WIDTH_5; }
	inline void set_PADDING_WIDTH_5(float value)
	{
		___PADDING_WIDTH_5 = value;
	}

	inline static int32_t get_offset_of_PADDING_HEIGHT_6() { return static_cast<int32_t>(offsetof(GridController_t475979300, ___PADDING_HEIGHT_6)); }
	inline float get_PADDING_HEIGHT_6() const { return ___PADDING_HEIGHT_6; }
	inline float* get_address_of_PADDING_HEIGHT_6() { return &___PADDING_HEIGHT_6; }
	inline void set_PADDING_HEIGHT_6(float value)
	{
		___PADDING_HEIGHT_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
