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

// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Texture
struct Texture_t2243626319;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"

// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C"  void Material__ctor_m1440882780 (Material_t193706927 * __this, Material_t193706927 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern "C"  Texture_t2243626319 * Material_get_mainTexture_m432794412 (Material_t193706927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTextureScale(UnityEngine.Vector2)
extern "C"  void Material_set_mainTextureScale_m723074403 (Material_t193706927 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
extern "C"  Texture_t2243626319 * Material_GetTexture_m1257877102 (Material_t193706927 * __this, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
extern "C"  Texture_t2243626319 * Material_GetTexture_m648312929 (Material_t193706927 * __this, int32_t ___nameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_GetTextureScaleAndOffset(UnityEngine.Material,System.String,UnityEngine.Vector4&)
extern "C"  void Material_Internal_GetTextureScaleAndOffset_m1384230327 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___mat0, String_t* ___name1, Vector4_t2243707581 * ___output2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
extern "C"  void Material_SetTextureOffset_m3084369360 (Material_t193706927 * __this, String_t* ___propertyName0, Vector2_t2243707579  ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetTextureOffset(UnityEngine.Material,System.String,UnityEngine.Vector2&)
extern "C"  void Material_INTERNAL_CALL_SetTextureOffset_m4252917387 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___self0, String_t* ___propertyName1, Vector2_t2243707579 * ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Material::GetTextureOffset(System.String)
extern "C"  Vector2_t2243707579  Material_GetTextureOffset_m4148619067 (Material_t193706927 * __this, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTextureScale(System.String,UnityEngine.Vector2)
extern "C"  void Material_SetTextureScale_m1622979841 (Material_t193706927 * __this, String_t* ___propertyName0, Vector2_t2243707579  ___scale1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetTextureScale(UnityEngine.Material,System.String,UnityEngine.Vector2&)
extern "C"  void Material_INTERNAL_CALL_SetTextureScale_m2049074868 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___self0, String_t* ___propertyName1, Vector2_t2243707579 * ___scale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C"  void Material_SetFloat_m1926275467 (Material_t193706927 * __this, String_t* ___propertyName0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C"  void Material_SetFloat_m953675160 (Material_t193706927 * __this, int32_t ___nameID0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern "C"  void Material_SetInt_m522302436 (Material_t193706927 * __this, String_t* ___propertyName0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
extern "C"  bool Material_HasProperty_m3511389613 (Material_t193706927 * __this, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
extern "C"  bool Material_HasProperty_m3175512802 (Material_t193706927 * __this, int32_t ___nameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
extern "C"  void Material_Internal_CreateWithMaterial_m2907597451 (Il2CppObject * __this /* static, unused */, Material_t193706927 * ___mono0, Material_t193706927 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
extern "C"  void Material_EnableKeyword_m3724752646 (Material_t193706927 * __this, String_t* ___keyword0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::DisableKeyword(System.String)
extern "C"  void Material_DisableKeyword_m1204728089 (Material_t193706927 * __this, String_t* ___keyword0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
