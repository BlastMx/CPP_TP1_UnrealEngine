// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TP1_UNREAL_Bullet_generated_h
#error "Bullet.generated.h already included, missing '#pragma once' in Bullet.h"
#endif
#define TP1_UNREAL_Bullet_generated_h

#define TP1_Unreal_Source_TP1_Unreal_Bullet_h_13_SPARSE_DATA
#define TP1_Unreal_Source_TP1_Unreal_Bullet_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCompHit);


#define TP1_Unreal_Source_TP1_Unreal_Bullet_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCompHit);


#define TP1_Unreal_Source_TP1_Unreal_Bullet_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TP1_Unreal"), NO_API) \
	DECLARE_SERIALIZER(ABullet)


#define TP1_Unreal_Source_TP1_Unreal_Bullet_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend struct Z_Construct_UClass_ABullet_Statics; \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TP1_Unreal"), NO_API) \
	DECLARE_SERIALIZER(ABullet)


#define TP1_Unreal_Source_TP1_Unreal_Bullet_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABullet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public:


#define TP1_Unreal_Source_TP1_Unreal_Bullet_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABullet)


#define TP1_Unreal_Source_TP1_Unreal_Bullet_h_13_PRIVATE_PROPERTY_OFFSET
#define TP1_Unreal_Source_TP1_Unreal_Bullet_h_10_PROLOG
#define TP1_Unreal_Source_TP1_Unreal_Bullet_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TP1_Unreal_Source_TP1_Unreal_Bullet_h_13_PRIVATE_PROPERTY_OFFSET \
	TP1_Unreal_Source_TP1_Unreal_Bullet_h_13_SPARSE_DATA \
	TP1_Unreal_Source_TP1_Unreal_Bullet_h_13_RPC_WRAPPERS \
	TP1_Unreal_Source_TP1_Unreal_Bullet_h_13_INCLASS \
	TP1_Unreal_Source_TP1_Unreal_Bullet_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TP1_Unreal_Source_TP1_Unreal_Bullet_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TP1_Unreal_Source_TP1_Unreal_Bullet_h_13_PRIVATE_PROPERTY_OFFSET \
	TP1_Unreal_Source_TP1_Unreal_Bullet_h_13_SPARSE_DATA \
	TP1_Unreal_Source_TP1_Unreal_Bullet_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TP1_Unreal_Source_TP1_Unreal_Bullet_h_13_INCLASS_NO_PURE_DECLS \
	TP1_Unreal_Source_TP1_Unreal_Bullet_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TP1_UNREAL_API UClass* StaticClass<class ABullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TP1_Unreal_Source_TP1_Unreal_Bullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
