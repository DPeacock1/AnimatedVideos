// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UActorComponent;
#ifdef SQUIDERSPLUGIN_SquidersPluginBPLibrary_generated_h
#error "SquidersPluginBPLibrary.generated.h already included, missing '#pragma once' in SquidersPluginBPLibrary.h"
#endif
#define SQUIDERSPLUGIN_SquidersPluginBPLibrary_generated_h

#define TestFastPath_Plugins_SquidersPlugin_Source_SquidersPlugin_Public_SquidersPluginBPLibrary_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindDefaultComponentByClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_InActorClass); \
		P_GET_OBJECT(UClass,Z_Param_InComponentClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UActorComponent**)Z_Param__Result=USquidersPluginBPLibrary::FindDefaultComponentByClass(Z_Param_InActorClass,Z_Param_InComponentClass); \
		P_NATIVE_END; \
	}


#define TestFastPath_Plugins_SquidersPlugin_Source_SquidersPlugin_Public_SquidersPluginBPLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindDefaultComponentByClass) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_InActorClass); \
		P_GET_OBJECT(UClass,Z_Param_InComponentClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UActorComponent**)Z_Param__Result=USquidersPluginBPLibrary::FindDefaultComponentByClass(Z_Param_InActorClass,Z_Param_InComponentClass); \
		P_NATIVE_END; \
	}


#define TestFastPath_Plugins_SquidersPlugin_Source_SquidersPlugin_Public_SquidersPluginBPLibrary_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSquidersPluginBPLibrary(); \
	friend struct Z_Construct_UClass_USquidersPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(USquidersPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SquidersPlugin"), NO_API) \
	DECLARE_SERIALIZER(USquidersPluginBPLibrary)


#define TestFastPath_Plugins_SquidersPlugin_Source_SquidersPlugin_Public_SquidersPluginBPLibrary_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUSquidersPluginBPLibrary(); \
	friend struct Z_Construct_UClass_USquidersPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(USquidersPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SquidersPlugin"), NO_API) \
	DECLARE_SERIALIZER(USquidersPluginBPLibrary)


#define TestFastPath_Plugins_SquidersPlugin_Source_SquidersPlugin_Public_SquidersPluginBPLibrary_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USquidersPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USquidersPluginBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USquidersPluginBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USquidersPluginBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USquidersPluginBPLibrary(USquidersPluginBPLibrary&&); \
	NO_API USquidersPluginBPLibrary(const USquidersPluginBPLibrary&); \
public:


#define TestFastPath_Plugins_SquidersPlugin_Source_SquidersPlugin_Public_SquidersPluginBPLibrary_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USquidersPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USquidersPluginBPLibrary(USquidersPluginBPLibrary&&); \
	NO_API USquidersPluginBPLibrary(const USquidersPluginBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USquidersPluginBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USquidersPluginBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USquidersPluginBPLibrary)


#define TestFastPath_Plugins_SquidersPlugin_Source_SquidersPlugin_Public_SquidersPluginBPLibrary_h_29_PRIVATE_PROPERTY_OFFSET
#define TestFastPath_Plugins_SquidersPlugin_Source_SquidersPlugin_Public_SquidersPluginBPLibrary_h_26_PROLOG
#define TestFastPath_Plugins_SquidersPlugin_Source_SquidersPlugin_Public_SquidersPluginBPLibrary_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestFastPath_Plugins_SquidersPlugin_Source_SquidersPlugin_Public_SquidersPluginBPLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	TestFastPath_Plugins_SquidersPlugin_Source_SquidersPlugin_Public_SquidersPluginBPLibrary_h_29_RPC_WRAPPERS \
	TestFastPath_Plugins_SquidersPlugin_Source_SquidersPlugin_Public_SquidersPluginBPLibrary_h_29_INCLASS \
	TestFastPath_Plugins_SquidersPlugin_Source_SquidersPlugin_Public_SquidersPluginBPLibrary_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestFastPath_Plugins_SquidersPlugin_Source_SquidersPlugin_Public_SquidersPluginBPLibrary_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestFastPath_Plugins_SquidersPlugin_Source_SquidersPlugin_Public_SquidersPluginBPLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	TestFastPath_Plugins_SquidersPlugin_Source_SquidersPlugin_Public_SquidersPluginBPLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	TestFastPath_Plugins_SquidersPlugin_Source_SquidersPlugin_Public_SquidersPluginBPLibrary_h_29_INCLASS_NO_PURE_DECLS \
	TestFastPath_Plugins_SquidersPlugin_Source_SquidersPlugin_Public_SquidersPluginBPLibrary_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SquidersPluginBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SQUIDERSPLUGIN_API UClass* StaticClass<class USquidersPluginBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestFastPath_Plugins_SquidersPlugin_Source_SquidersPlugin_Public_SquidersPluginBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
