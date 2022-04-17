// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighterLab02/PaPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaPlayerController() {}
// Cross Module References
	STARFIGHTERLAB02_API UClass* Z_Construct_UClass_APaPlayerController_NoRegister();
	STARFIGHTERLAB02_API UClass* Z_Construct_UClass_APaPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_StarFighterLab02();
// End Cross Module References
	void APaPlayerController::StaticRegisterNativesAPaPlayerController()
	{
	}
	UClass* Z_Construct_UClass_APaPlayerController_NoRegister()
	{
		return APaPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_APaPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighterLab02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PaPlayerController.h" },
		{ "ModuleRelativePath", "PaPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaPlayerController_Statics::ClassParams = {
		&APaPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaPlayerController, 4202252344);
	template<> STARFIGHTERLAB02_API UClass* StaticClass<APaPlayerController>()
	{
		return APaPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaPlayerController(Z_Construct_UClass_APaPlayerController, &APaPlayerController::StaticClass, TEXT("/Script/StarFighterLab02"), TEXT("APaPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
