#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t4216439300;
// System.String
struct String_t;
// UnityEngine.Sprite
struct Sprite_t309593783;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "UnityEngine_UnityEngine_Bounds3033363703.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Sprite309593783.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Boolean Tools::BestFitBalance(UnityEngine.UI.Text,UnityEngine.UI.Text)
extern "C"  bool Tools_BestFitBalance_m1298595109 (Il2CppObject * __this /* static, unused */, Text_t356221433 * ___text10, Text_t356221433 * ___text21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Tools::getSmallestFontSize(UnityEngine.UI.Text[])
extern "C"  int32_t Tools_getSmallestFontSize_m2337707477 (Il2CppObject * __this /* static, unused */, TextU5BU5D_t4216439300* ___texts0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tools::setToFontSize(UnityEngine.UI.Text[],System.Int32)
extern "C"  void Tools_setToFontSize_m549723200 (Il2CppObject * __this /* static, unused */, TextU5BU5D_t4216439300* ___texts0, int32_t ___font_size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tools::turnBestFitOn(UnityEngine.UI.Text[])
extern "C"  void Tools_turnBestFitOn_m4103684573 (Il2CppObject * __this /* static, unused */, TextU5BU5D_t4216439300* ___texts0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Tools::BoundsIsEncapsulated(UnityEngine.Bounds,UnityEngine.Bounds)
extern "C"  bool Tools_BoundsIsEncapsulated_m1526328954 (Il2CppObject * __this /* static, unused */, Bounds_t3033363703  ___Encapsulator0, Bounds_t3033363703  ___Encapsulating1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Tools::FormatName(System.String,System.Int32)
extern "C"  String_t* Tools_FormatName_m2126613622 (Il2CppObject * __this /* static, unused */, String_t* ___name0, int32_t ___max_length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Tools::TurnAroundPoint(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2243707579  Tools_TurnAroundPoint_m3056034750 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  ___center0, Vector2_t2243707579  ___point1, float ___degrees2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Tools::FrontOfSprite(UnityEngine.Sprite,UnityEngine.Vector2,UnityEngine.Quaternion)
extern "C"  Vector2_t2243707579  Tools_FrontOfSprite_m1615105807 (Il2CppObject * __this /* static, unused */, Sprite_t309593783 * ___sprite0, Vector2_t2243707579  ___position1, Quaternion_t4030073918  ___rotation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Tools::RandomPlaceOnBorderViewPort()
extern "C"  Vector3_t2243707580  Tools_RandomPlaceOnBorderViewPort_m955556579 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
