// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/Barril.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarril() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_ABarril_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_ABarril();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABarril::StaticRegisterNativesABarril()
	{
	}
	UClass* Z_Construct_UClass_ABarril_NoRegister()
	{
		return ABarril::StaticClass();
	}
	struct Z_Construct_UClass_ABarril_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mallaBarril_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mallaBarril;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABarril_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarril_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Barril.h" },
		{ "ModuleRelativePath", "Barril.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarril_Statics::NewProp_mallaBarril_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Proyectile" },
		{ "Comment", "//malla del barril\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Barril.h" },
		{ "ToolTip", "malla del barril" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABarril_Statics::NewProp_mallaBarril = { "mallaBarril", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABarril, mallaBarril), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABarril_Statics::NewProp_mallaBarril_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABarril_Statics::NewProp_mallaBarril_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABarril_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarril_Statics::NewProp_mallaBarril,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABarril_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABarril>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABarril_Statics::ClassParams = {
		&ABarril::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABarril_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABarril_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABarril_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABarril_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABarril()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABarril_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABarril, 1677307511);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<ABarril>()
	{
		return ABarril::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABarril(Z_Construct_UClass_ABarril, &ABarril::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("ABarril"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABarril);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
