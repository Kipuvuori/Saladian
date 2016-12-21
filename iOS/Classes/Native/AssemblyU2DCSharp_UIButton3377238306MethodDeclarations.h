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

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Button
struct Button_t2872111280;
// System.String
struct String_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
// UIButton
struct UIButton_t3377238306;
struct UIButton_t3377238306_marshaled_pinvoke;
struct UIButton_t3377238306_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UIButton3377238306.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "UnityEngine_UI_UnityEngine_UI_Button2872111280.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Events_UnityAction4025899511.h"

// System.Void UIButton::.ctor(UnityEngine.GameObject,UnityEngine.UI.Text,UnityEngine.UI.Button,System.String,UnityEngine.Events.UnityAction)
extern "C"  void UIButton__ctor_m4248047623 (UIButton_t3377238306 * __this, GameObject_t1756533147 * ____gameObject0, Text_t356221433 * ____text1, Button_t2872111280 * ____button2, String_t* ____text_string3, UnityAction_t4025899511 * ____action4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIButton::.ctor(UnityEngine.GameObject,System.String,UnityEngine.Events.UnityAction)
extern "C"  void UIButton__ctor_m189115166 (UIButton_t3377238306 * __this, GameObject_t1756533147 * ____gameObject0, String_t* ____text_string1, UnityAction_t4025899511 * ____action2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIButton::get_Text()
extern "C"  String_t* UIButton_get_Text_m1166756466 (UIButton_t3377238306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIButton::set_Text(System.String)
extern "C"  void UIButton_set_Text_m3040467467 (UIButton_t3377238306 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIButton::set_Action(UnityEngine.Events.UnityAction)
extern "C"  void UIButton_set_Action_m3408200313 (UIButton_t3377238306 * __this, UnityAction_t4025899511 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIButton::get_Interactable()
extern "C"  bool UIButton_get_Interactable_m158064460 (UIButton_t3377238306 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIButton::set_Interactable(System.Boolean)
extern "C"  void UIButton_set_Interactable_m672155627 (UIButton_t3377238306 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct UIButton_t3377238306;
struct UIButton_t3377238306_marshaled_pinvoke;

extern "C" void UIButton_t3377238306_marshal_pinvoke(const UIButton_t3377238306& unmarshaled, UIButton_t3377238306_marshaled_pinvoke& marshaled);
extern "C" void UIButton_t3377238306_marshal_pinvoke_back(const UIButton_t3377238306_marshaled_pinvoke& marshaled, UIButton_t3377238306& unmarshaled);
extern "C" void UIButton_t3377238306_marshal_pinvoke_cleanup(UIButton_t3377238306_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct UIButton_t3377238306;
struct UIButton_t3377238306_marshaled_com;

extern "C" void UIButton_t3377238306_marshal_com(const UIButton_t3377238306& unmarshaled, UIButton_t3377238306_marshaled_com& marshaled);
extern "C" void UIButton_t3377238306_marshal_com_back(const UIButton_t3377238306_marshaled_com& marshaled, UIButton_t3377238306& unmarshaled);
extern "C" void UIButton_t3377238306_marshal_com_cleanup(UIButton_t3377238306_marshaled_com& marshaled);
