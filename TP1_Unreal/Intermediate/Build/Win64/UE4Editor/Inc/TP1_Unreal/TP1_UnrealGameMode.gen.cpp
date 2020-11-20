// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TP1_Unreal/TP1_UnrealGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP1_UnrealGameMode() {}
// Cross Module References
	TP1_UNREAL_API UClass* Z_Construct_UClass_ATP1_UnrealGameMode_NoRegister();
	TP1_UNREAL_API UClass* Z_Construct_UClass_ATP1_UnrealGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TP1_Unreal();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void ATP1_UnrealGameMode::StaticRegisterNativesATP1_UnrealGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATP1_UnrealGameMode_NoRegister()
	{
		return ATP1_UnrealGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATP1_UnrealGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BulletPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecaleBullet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecaleBullet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP1_UnrealGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TP1_Unreal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP1_UnrealGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TP1_UnrealGameMode.h" },
		{ "ModuleRelativePath", "TP1_UnrealGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP1_UnrealGameMode_Statics::NewProp_BulletPawn_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "TP1_UnrealGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATP1_UnrealGameMode_Statics::NewProp_BulletPawn = { "BulletPawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP1_UnrealGameMode, BulletPawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATP1_UnrealGameMode_Statics::NewProp_BulletPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP1_UnrealGameMode_Statics::NewProp_BulletPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP1_UnrealGameMode_Statics::NewProp_DecaleBullet_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "TP1_UnrealGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATP1_UnrealGameMode_Statics::NewProp_DecaleBullet = { "DecaleBullet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP1_UnrealGameMode, DecaleBullet), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATP1_UnrealGameMode_Statics::NewProp_DecaleBullet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP1_UnrealGameMode_Statics::NewProp_DecaleBullet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP1_UnrealGameMode_Statics::NewProp_ActorToSpawn_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "TP1_UnrealGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATP1_UnrealGameMode_Statics::NewProp_ActorToSpawn = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATP1_UnrealGameMode, ActorToSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATP1_UnrealGameMode_Statics::NewProp_ActorToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATP1_UnrealGameMode_Statics::NewProp_ActorToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATP1_UnrealGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP1_UnrealGameMode_Statics::NewProp_BulletPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP1_UnrealGameMode_Statics::NewProp_DecaleBullet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATP1_UnrealGameMode_Statics::NewProp_ActorToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP1_UnrealGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP1_UnrealGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATP1_UnrealGameMode_Statics::ClassParams = {
		&ATP1_UnrealGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATP1_UnrealGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATP1_UnrealGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATP1_UnrealGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATP1_UnrealGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATP1_UnrealGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATP1_UnrealGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATP1_UnrealGameMode, 4153244139);
	template<> TP1_UNREAL_API UClass* StaticClass<ATP1_UnrealGameMode>()
	{
		return ATP1_UnrealGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATP1_UnrealGameMode(Z_Construct_UClass_ATP1_UnrealGameMode, &ATP1_UnrealGameMode::StaticClass, TEXT("/Script/TP1_Unreal"), TEXT("ATP1_UnrealGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP1_UnrealGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
