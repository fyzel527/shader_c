// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "shader_c/shader_cGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeshader_cGameMode() {}
// Cross Module References
	SHADER_C_API UClass* Z_Construct_UClass_Ashader_cGameMode_NoRegister();
	SHADER_C_API UClass* Z_Construct_UClass_Ashader_cGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_shader_c();
// End Cross Module References
	void Ashader_cGameMode::StaticRegisterNativesAshader_cGameMode()
	{
	}
	UClass* Z_Construct_UClass_Ashader_cGameMode_NoRegister()
	{
		return Ashader_cGameMode::StaticClass();
	}
	struct Z_Construct_UClass_Ashader_cGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ashader_cGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_shader_c,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ashader_cGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "shader_cGameMode.h" },
		{ "ModuleRelativePath", "shader_cGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ashader_cGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ashader_cGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Ashader_cGameMode_Statics::ClassParams = {
		&Ashader_cGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_Ashader_cGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Ashader_cGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Ashader_cGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Ashader_cGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Ashader_cGameMode, 3420613449);
	template<> SHADER_C_API UClass* StaticClass<Ashader_cGameMode>()
	{
		return Ashader_cGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Ashader_cGameMode(Z_Construct_UClass_Ashader_cGameMode, &Ashader_cGameMode::StaticClass, TEXT("/Script/shader_c"), TEXT("Ashader_cGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ashader_cGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
