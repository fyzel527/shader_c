// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHADER_C_shader_cCharacter_generated_h
#error "shader_cCharacter.generated.h already included, missing '#pragma once' in shader_cCharacter.h"
#endif
#define SHADER_C_shader_cCharacter_generated_h

#define shader_c_Source_shader_c_shader_cCharacter_h_12_SPARSE_DATA
#define shader_c_Source_shader_c_shader_cCharacter_h_12_RPC_WRAPPERS
#define shader_c_Source_shader_c_shader_cCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define shader_c_Source_shader_c_shader_cCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAshader_cCharacter(); \
	friend struct Z_Construct_UClass_Ashader_cCharacter_Statics; \
public: \
	DECLARE_CLASS(Ashader_cCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/shader_c"), NO_API) \
	DECLARE_SERIALIZER(Ashader_cCharacter)


#define shader_c_Source_shader_c_shader_cCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAshader_cCharacter(); \
	friend struct Z_Construct_UClass_Ashader_cCharacter_Statics; \
public: \
	DECLARE_CLASS(Ashader_cCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/shader_c"), NO_API) \
	DECLARE_SERIALIZER(Ashader_cCharacter)


#define shader_c_Source_shader_c_shader_cCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Ashader_cCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Ashader_cCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Ashader_cCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Ashader_cCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Ashader_cCharacter(Ashader_cCharacter&&); \
	NO_API Ashader_cCharacter(const Ashader_cCharacter&); \
public:


#define shader_c_Source_shader_c_shader_cCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Ashader_cCharacter(Ashader_cCharacter&&); \
	NO_API Ashader_cCharacter(const Ashader_cCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Ashader_cCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Ashader_cCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Ashader_cCharacter)


#define shader_c_Source_shader_c_shader_cCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(Ashader_cCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(Ashader_cCharacter, FollowCamera); }


#define shader_c_Source_shader_c_shader_cCharacter_h_9_PROLOG
#define shader_c_Source_shader_c_shader_cCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	shader_c_Source_shader_c_shader_cCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	shader_c_Source_shader_c_shader_cCharacter_h_12_SPARSE_DATA \
	shader_c_Source_shader_c_shader_cCharacter_h_12_RPC_WRAPPERS \
	shader_c_Source_shader_c_shader_cCharacter_h_12_INCLASS \
	shader_c_Source_shader_c_shader_cCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define shader_c_Source_shader_c_shader_cCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	shader_c_Source_shader_c_shader_cCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	shader_c_Source_shader_c_shader_cCharacter_h_12_SPARSE_DATA \
	shader_c_Source_shader_c_shader_cCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	shader_c_Source_shader_c_shader_cCharacter_h_12_INCLASS_NO_PURE_DECLS \
	shader_c_Source_shader_c_shader_cCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHADER_C_API UClass* StaticClass<class Ashader_cCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID shader_c_Source_shader_c_shader_cCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
