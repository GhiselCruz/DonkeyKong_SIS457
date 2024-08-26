// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/EnemigoObjetoBomba.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoObjetoBomba() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AEnemigoObjetoBomba_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AEnemigoObjetoBomba();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AEnemigoObjeto();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
// End Cross Module References
	void AEnemigoObjetoBomba::StaticRegisterNativesAEnemigoObjetoBomba()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoObjetoBomba_NoRegister()
	{
		return AEnemigoObjetoBomba::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoObjetoBomba_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoObjetoBomba_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigoObjeto,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoObjetoBomba_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemigoObjetoBomba.h" },
		{ "ModuleRelativePath", "EnemigoObjetoBomba.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoObjetoBomba_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoObjetoBomba>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoObjetoBomba_Statics::ClassParams = {
		&AEnemigoObjetoBomba::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoObjetoBomba_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoObjetoBomba_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoObjetoBomba()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoObjetoBomba_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoObjetoBomba, 3175408320);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<AEnemigoObjetoBomba>()
	{
		return AEnemigoObjetoBomba::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoObjetoBomba(Z_Construct_UClass_AEnemigoObjetoBomba, &AEnemigoObjetoBomba::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("AEnemigoObjetoBomba"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoObjetoBomba);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
