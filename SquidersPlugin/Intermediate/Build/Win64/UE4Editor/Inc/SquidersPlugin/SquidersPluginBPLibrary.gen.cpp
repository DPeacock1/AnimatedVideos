// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SquidersPlugin/Public/SquidersPluginBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSquidersPluginBPLibrary() {}
// Cross Module References
	SQUIDERSPLUGIN_API UClass* Z_Construct_UClass_USquidersPluginBPLibrary_NoRegister();
	SQUIDERSPLUGIN_API UClass* Z_Construct_UClass_USquidersPluginBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_SquidersPlugin();
	SQUIDERSPLUGIN_API UFunction* Z_Construct_UFunction_USquidersPluginBPLibrary_FindDefaultComponentByClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void USquidersPluginBPLibrary::StaticRegisterNativesUSquidersPluginBPLibrary()
	{
		UClass* Class = USquidersPluginBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindDefaultComponentByClass", &USquidersPluginBPLibrary::execFindDefaultComponentByClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USquidersPluginBPLibrary_FindDefaultComponentByClass_Statics
	{
		struct SquidersPluginBPLibrary_eventFindDefaultComponentByClass_Parms
		{
			const TSubclassOf<AActor>  InActorClass;
			const TSubclassOf<UActorComponent>  InComponentClass;
			UActorComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InComponentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InComponentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InActorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USquidersPluginBPLibrary_FindDefaultComponentByClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USquidersPluginBPLibrary_FindDefaultComponentByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SquidersPluginBPLibrary_eventFindDefaultComponentByClass_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USquidersPluginBPLibrary_FindDefaultComponentByClass_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USquidersPluginBPLibrary_FindDefaultComponentByClass_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USquidersPluginBPLibrary_FindDefaultComponentByClass_Statics::NewProp_InComponentClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USquidersPluginBPLibrary_FindDefaultComponentByClass_Statics::NewProp_InComponentClass = { "InComponentClass", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SquidersPluginBPLibrary_eventFindDefaultComponentByClass_Parms, InComponentClass), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_USquidersPluginBPLibrary_FindDefaultComponentByClass_Statics::NewProp_InComponentClass_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USquidersPluginBPLibrary_FindDefaultComponentByClass_Statics::NewProp_InComponentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USquidersPluginBPLibrary_FindDefaultComponentByClass_Statics::NewProp_InActorClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USquidersPluginBPLibrary_FindDefaultComponentByClass_Statics::NewProp_InActorClass = { "InActorClass", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SquidersPluginBPLibrary_eventFindDefaultComponentByClass_Parms, InActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_USquidersPluginBPLibrary_FindDefaultComponentByClass_Statics::NewProp_InActorClass_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USquidersPluginBPLibrary_FindDefaultComponentByClass_Statics::NewProp_InActorClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USquidersPluginBPLibrary_FindDefaultComponentByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USquidersPluginBPLibrary_FindDefaultComponentByClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USquidersPluginBPLibrary_FindDefaultComponentByClass_Statics::NewProp_InComponentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USquidersPluginBPLibrary_FindDefaultComponentByClass_Statics::NewProp_InActorClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USquidersPluginBPLibrary_FindDefaultComponentByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "DisplayName", "FindDefaultComponentByClass" },
		{ "Keywords", "SquidersPlugin default component class get object" },
		{ "ModuleRelativePath", "Public/SquidersPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USquidersPluginBPLibrary_FindDefaultComponentByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USquidersPluginBPLibrary, nullptr, "FindDefaultComponentByClass", nullptr, nullptr, sizeof(SquidersPluginBPLibrary_eventFindDefaultComponentByClass_Parms), Z_Construct_UFunction_USquidersPluginBPLibrary_FindDefaultComponentByClass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USquidersPluginBPLibrary_FindDefaultComponentByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USquidersPluginBPLibrary_FindDefaultComponentByClass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USquidersPluginBPLibrary_FindDefaultComponentByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USquidersPluginBPLibrary_FindDefaultComponentByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USquidersPluginBPLibrary_FindDefaultComponentByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USquidersPluginBPLibrary_NoRegister()
	{
		return USquidersPluginBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USquidersPluginBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USquidersPluginBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SquidersPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USquidersPluginBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USquidersPluginBPLibrary_FindDefaultComponentByClass, "FindDefaultComponentByClass" }, // 1488278930
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USquidersPluginBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "SquidersPluginBPLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SquidersPluginBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USquidersPluginBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USquidersPluginBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USquidersPluginBPLibrary_Statics::ClassParams = {
		&USquidersPluginBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USquidersPluginBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USquidersPluginBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USquidersPluginBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USquidersPluginBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USquidersPluginBPLibrary, 392125009);
	template<> SQUIDERSPLUGIN_API UClass* StaticClass<USquidersPluginBPLibrary>()
	{
		return USquidersPluginBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USquidersPluginBPLibrary(Z_Construct_UClass_USquidersPluginBPLibrary, &USquidersPluginBPLibrary::StaticClass, TEXT("/Script/SquidersPlugin"), TEXT("USquidersPluginBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USquidersPluginBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
