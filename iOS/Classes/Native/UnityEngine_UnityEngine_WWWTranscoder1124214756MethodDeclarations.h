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

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t663144255;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Text_Encoding663144255.h"

// System.Byte[] UnityEngine.WWWTranscoder::Byte2Hex(System.Byte,System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* WWWTranscoder_Byte2Hex_m1676183558 (Il2CppObject * __this /* static, unused */, uint8_t ___b0, ByteU5BU5D_t3397334013* ___hexChars1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWWTranscoder::URLEncode(System.String,System.Text.Encoding)
extern "C"  String_t* WWWTranscoder_URLEncode_m3846210256 (Il2CppObject * __this /* static, unused */, String_t* ___toEncode0, Encoding_t663144255 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWTranscoder::Encode(System.Byte[],System.Byte,System.Byte,System.Byte[],System.Boolean)
extern "C"  ByteU5BU5D_t3397334013* WWWTranscoder_Encode_m4207510302 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___input0, uint8_t ___escapeChar1, uint8_t ___space2, ByteU5BU5D_t3397334013* ___forbidden3, bool ___uppercase4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWWTranscoder::ByteArrayContains(System.Byte[],System.Byte)
extern "C"  bool WWWTranscoder_ByteArrayContains_m1587254237 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___array0, uint8_t ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWTranscoder::.cctor()
extern "C"  void WWWTranscoder__cctor_m916878076 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
