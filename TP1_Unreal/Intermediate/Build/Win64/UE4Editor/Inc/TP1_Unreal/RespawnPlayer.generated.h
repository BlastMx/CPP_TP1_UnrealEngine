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
#ifdef TP1_UNREAL_RespawnPlayer_generated_h
#error "RespawnPlayer.generated.h already included, missing '#pragma once' in RespawnPlayer.h"
#endif
#define TP1_UNREAL_RespawnPlayer_generated_h

#define TP1_Unreal_Source_TP1_Unreal_RespawnPlayer_h_13_SPARSE_DATA
#define TP1_Unreal_Source_TP1_Unreal_RespawnPlayer_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnObject); \
	DECLARE_FUNCTION(execMyDoOnce);


#define TP1_Unreal_Source_TP1_Unreal_RespawnPlayer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnObject); \
	DECLARE_FUNCTION(execMyDoOnce);


#define TP1_Unreal_Source_TP1_Unreal_RespawnPlayer_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARespawnPlayer(); \
	friend struct Z_Construct_UClass_ARespawnPlayer_Statics; \
public: \
	DECLARE_CLASS(ARespawnPlayer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TP1_Unreal"), NO_API) \
	DECLARE_SERIALIZER(ARespawnPlayer)


#define TP1_Unreal_Source_TP1_Unreal_RespawnPlayer_h_13_INCLASS \
private: \
	static void StaticRegisterNativesARespawnPlayer(); \
	friend struct Z_Construct_UClass_ARespawnPlayer_Statics; \
public: \
	DECLARE_CLASS(ARespawnPlayer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TP1_Unreal"), NO_API) \
	DECLARE_SERIALIZER(ARespawnPlayer)


#define TP1_Unreal_Source_TP1_Unreal_RespawnPlayer_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARespawnPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARespawnPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARespawnPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARespawnPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARespawnPlayer(ARespawnPlayer&&); \
	NO_API ARespawnPlayer(const ARespawnPlayer&); \
public:


#define TP1_Unreal_Source_TP1_Unreal_RespawnPlayer_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARespawnPlayer(ARespawnPlayer&&); \
	NO_API ARespawnPlayer(const ARespawnPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARespawnPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARespawnPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARespawnPlayer)


#define TP1_Unreal_Source_TP1_Unreal_RespawnPlayer_h_13_PRIVATE_PROPERTY_OFFSET
#define TP1_Unreal_Source_TP1_Unreal_RespawnPlayer_h_10_PROLOG
#define TP1_Unreal_Source_TP1_Unreal_RespawnPlayer_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TP1_Unreal_Source_TP1_Unreal_RespawnPlayer_h_13_PRIVATE_PROPERTY_OFFSET \
	TP1_Unreal_Source_TP1_Unreal_RespawnPlayer_h_13_SPARSE_DATA \
	TP1_Unreal_Source_TP1_Unreal_RespawnPlayer_h_13_RPC_WRAPPERS \
	TP1_Unreal_Source_TP1_Unreal_RespawnPlayer_h_13_INCLASS \
	TP1_Unreal_Source_TP1_Unreal_RespawnPlayer_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TP1_Unreal_Source_TP1_Unreal_RespawnPlayer_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TP1_Unreal_Source_TP1_Unreal_RespawnPlayer_h_13_PRIVATE_PROPERTY_OFFSET \
	TP1_Unreal_Source_TP1_Unreal_RespawnPlayer_h_13_SPARSE_DATA \
	TP1_Unreal_Source_TP1_Unreal_RespawnPlayer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TP1_Unreal_Source_TP1_Unreal_RespawnPlayer_h_13_INCLASS_NO_PURE_DECLS \
	TP1_Unreal_Source_TP1_Unreal_RespawnPlayer_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TP1_UNREAL_API UClass* StaticClass<class ARespawnPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TP1_Unreal_Source_TP1_Unreal_RespawnPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
