// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/EnemigoFrutaSandia.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoFrutaSandia() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AEnemigoFrutaSandia_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AEnemigoFrutaSandia();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AEnemigoFruta();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
// End Cross Module References
	void AEnemigoFrutaSandia::StaticRegisterNativesAEnemigoFrutaSandia()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoFrutaSandia_NoRegister()
	{
		return AEnemigoFrutaSandia::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoFrutaSandia_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoFrutaSandia_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigoFruta,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoFrutaSandia_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemigoFrutaSandia.h" },
		{ "ModuleRelativePath", "EnemigoFrutaSandia.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoFrutaSandia_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoFrutaSandia>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoFrutaSandia_Statics::ClassParams = {
		&AEnemigoFrutaSandia::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoFrutaSandia_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoFrutaSandia_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoFrutaSandia()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoFrutaSandia_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoFrutaSandia, 4200183752);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<AEnemigoFrutaSandia>()
	{
		return AEnemigoFrutaSandia::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoFrutaSandia(Z_Construct_UClass_AEnemigoFrutaSandia, &AEnemigoFrutaSandia::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("AEnemigoFrutaSandia"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoFrutaSandia);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
