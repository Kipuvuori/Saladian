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

// REST
struct REST_t47870930;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<Score>>
struct UnityAction_1_t2254682157;
// System.String
struct String_t;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t897193173;
// System.Collections.Generic.List`1<Score>
struct List_1_t888096406;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void REST::.ctor()
extern "C"  void REST__ctor_m3802609591 (REST_t47870930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator REST::getScores(System.Int32,UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<Score>>)
extern "C"  Il2CppObject * REST_getScores_m1901696679 (Il2CppObject * __this /* static, unused */, int32_t ___limit0, UnityAction_1_t2254682157 * ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator REST::sendScore(System.Int32,System.String,UnityEngine.Events.UnityAction`1<System.Boolean>)
extern "C"  Il2CppObject * REST_sendScore_m2923226357 (Il2CppObject * __this /* static, unused */, int32_t ___score0, String_t* ___name1, UnityAction_1_t897193173 * ___action2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Score> REST::Processjson(System.String)
extern "C"  List_1_t888096406 * REST_Processjson_m2355125879 (Il2CppObject * __this /* static, unused */, String_t* ___jsonString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
