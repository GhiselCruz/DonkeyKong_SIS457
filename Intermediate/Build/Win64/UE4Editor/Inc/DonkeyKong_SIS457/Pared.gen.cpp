// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/Pared.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePared() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_APared_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_APared();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
// End Cross Module References
	void APared::StaticRegisterNativesAPared()
	{
	}
	UClass* Z_Construct_UClass_APared_NoRegister()
	{
		return APared::StaticClass();
	}
	struct Z_Construct_UClass_APared_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APared_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APared_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pared.h" },
		{ "ModuleRelativePath", "Pared.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APared_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APared>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APared_Statics::ClassParams = {
		&APared::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APared_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APared_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APared()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APared_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APared, 4217908335);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<APared>()
	{
		return APared::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APared(Z_Construct_UClass_APared, &APared::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("APared"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APared);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
