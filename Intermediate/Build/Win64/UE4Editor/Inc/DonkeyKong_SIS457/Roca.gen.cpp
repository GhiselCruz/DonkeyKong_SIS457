// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/Roca.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoca() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_ARoca_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_ARoca();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
// End Cross Module References
	void ARoca::StaticRegisterNativesARoca()
	{
	}
	UClass* Z_Construct_UClass_ARoca_NoRegister()
	{
		return ARoca::StaticClass();
	}
	struct Z_Construct_UClass_ARoca_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoca_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoca_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Roca.h" },
		{ "ModuleRelativePath", "Roca.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoca_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoca>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARoca_Statics::ClassParams = {
		&ARoca::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARoca_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARoca_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARoca()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARoca_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARoca, 297707215);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<ARoca>()
	{
		return ARoca::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARoca(Z_Construct_UClass_ARoca, &ARoca::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("ARoca"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoca);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
