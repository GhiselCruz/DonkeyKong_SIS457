// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/EnemigoVegetalPapa.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoVegetalPapa() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AEnemigoVegetalPapa_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AEnemigoVegetalPapa();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AEnemigoVegetal();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
// End Cross Module References
	void AEnemigoVegetalPapa::StaticRegisterNativesAEnemigoVegetalPapa()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoVegetalPapa_NoRegister()
	{
		return AEnemigoVegetalPapa::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoVegetalPapa_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoVegetalPapa_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigoVegetal,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoVegetalPapa_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemigoVegetalPapa.h" },
		{ "ModuleRelativePath", "EnemigoVegetalPapa.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoVegetalPapa_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoVegetalPapa>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoVegetalPapa_Statics::ClassParams = {
		&AEnemigoVegetalPapa::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoVegetalPapa_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoVegetalPapa_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoVegetalPapa()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoVegetalPapa_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoVegetalPapa, 1006819325);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<AEnemigoVegetalPapa>()
	{
		return AEnemigoVegetalPapa::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoVegetalPapa(Z_Construct_UClass_AEnemigoVegetalPapa, &AEnemigoVegetalPapa::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("AEnemigoVegetalPapa"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoVegetalPapa);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
