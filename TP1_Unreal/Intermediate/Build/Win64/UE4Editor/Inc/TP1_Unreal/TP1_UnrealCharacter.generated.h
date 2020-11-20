// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
#ifdef TP1_UNREAL_TP1_UnrealCharacter_generated_h
#error "TP1_UnrealCharacter.generated.h already included, missing '#pragma once' in TP1_UnrealCharacter.h"
#endif
#define TP1_UNREAL_TP1_UnrealCharacter_generated_h

#define TP1_Unreal_Source_TP1_Unreal_TP1_UnrealCharacter_h_14_SPARSE_DATA
#define TP1_Unreal_Source_TP1_Unreal_TP1_UnrealCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPickupObject); \
	DECLARE_FUNCTION(execSpawnBullet); \
	DECLARE_FUNCTION(execSpawnObject);


#define TP1_Unreal_Source_TP1_Unreal_TP1_UnrealCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPickupObject); \
	DECLARE_FUNCTION(execSpawnBullet); \
	DECLARE_FUNCTION(execSpawnObject);


#define TP1_Unreal_Source_TP1_Unreal_TP1_UnrealCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATP1_UnrealCharacter(); \
	friend struct Z_Construct_UClass_ATP1_UnrealCharacter_Statics; \
public: \
	DECLARE_CLASS(ATP1_UnrealCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TP1_Unreal"), NO_API) \
	DECLARE_SERIALIZER(ATP1_UnrealCharacter)


#define TP1_Unreal_Source_TP1_Unreal_TP1_UnrealCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATP1_UnrealCharacter(); \
	friend struct Z_Construct_UClass_ATP1_UnrealCharacter_Statics; \
public: \
	DECLARE_CLASS(ATP1_UnrealCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TP1_Unreal"), NO_API) \
	DECLARE_SERIALIZER(ATP1_UnrealCharacter)


#define TP1_Unreal_Source_TP1_Unreal_TP1_UnrealCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATP1_UnrealCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATP1_UnrealCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP1_UnrealCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP1_UnrealCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATP1_UnrealCharacter(ATP1_UnrealCharacter&&); \
	NO_API ATP1_UnrealCharacter(const ATP1_UnrealCharacter&); \
public:


#define TP1_Unreal_Source_TP1_Unreal_TP1_UnrealCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATP1_UnrealCharacter(ATP1_UnrealCharacter&&); \
	NO_API ATP1_UnrealCharacter(const ATP1_UnrealCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATP1_UnrealCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATP1_UnrealCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATP1_UnrealCharacter)


#define TP1_Unreal_Source_TP1_Unreal_TP1_UnrealCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ATP1_UnrealCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ATP1_UnrealCharacter, FollowCamera); }


#define TP1_Unreal_Source_TP1_Unreal_TP1_UnrealCharacter_h_11_PROLOG
#define TP1_Unreal_Source_TP1_Unreal_TP1_UnrealCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TP1_Unreal_Source_TP1_Unreal_TP1_UnrealCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	TP1_Unreal_Source_TP1_Unreal_TP1_UnrealCharacter_h_14_SPARSE_DATA \
	TP1_Unreal_Source_TP1_Unreal_TP1_UnrealCharacter_h_14_RPC_WRAPPERS \
	TP1_Unreal_Source_TP1_Unreal_TP1_UnrealCharacter_h_14_INCLASS \
	TP1_Unreal_Source_TP1_Unreal_TP1_UnrealCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TP1_Unreal_Source_TP1_Unreal_TP1_UnrealCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TP1_Unreal_Source_TP1_Unreal_TP1_UnrealCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	TP1_Unreal_Source_TP1_Unreal_TP1_UnrealCharacter_h_14_SPARSE_DATA \
	TP1_Unreal_Source_TP1_Unreal_TP1_UnrealCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TP1_Unreal_Source_TP1_Unreal_TP1_UnrealCharacter_h_14_INCLASS_NO_PURE_DECLS \
	TP1_Unreal_Source_TP1_Unreal_TP1_UnrealCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TP1_UNREAL_API UClass* StaticClass<class ATP1_UnrealCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TP1_Unreal_Source_TP1_Unreal_TP1_UnrealCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
