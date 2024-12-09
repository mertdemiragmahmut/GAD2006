// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HomeWork3/Public/TileBase1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileBase1() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent();
HOMEWORK3_API UClass* Z_Construct_UClass_UTileBase1();
HOMEWORK3_API UClass* Z_Construct_UClass_UTileBase1_NoRegister();
UPackage* Z_Construct_UPackage__Script_HomeWork3();
// End Cross Module References

// Begin Class UTileBase1
void UTileBase1::StaticRegisterNativesUTileBase1()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTileBase1);
UClass* Z_Construct_UClass_UTileBase1_NoRegister()
{
	return UTileBase1::StaticClass();
}
struct Z_Construct_UClass_UTileBase1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "TileBase1.h" },
		{ "ModuleRelativePath", "Public/TileBase1.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileBase1>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTileBase1_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInstancedStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HomeWork3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTileBase1_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTileBase1_Statics::ClassParams = {
	&UTileBase1::StaticClass,
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
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTileBase1_Statics::Class_MetaDataParams), Z_Construct_UClass_UTileBase1_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTileBase1()
{
	if (!Z_Registration_Info_UClass_UTileBase1.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTileBase1.OuterSingleton, Z_Construct_UClass_UTileBase1_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTileBase1.OuterSingleton;
}
template<> HOMEWORK3_API UClass* StaticClass<UTileBase1>()
{
	return UTileBase1::StaticClass();
}
UTileBase1::UTileBase1(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTileBase1);
UTileBase1::~UTileBase1() {}
// End Class UTileBase1

// Begin Registration
struct Z_CompiledInDeferFile_FID_GAD2006_GAD2006_HomeWork3_Source_HomeWork3_Public_TileBase1_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTileBase1, UTileBase1::StaticClass, TEXT("UTileBase1"), &Z_Registration_Info_UClass_UTileBase1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTileBase1), 2909367511U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GAD2006_GAD2006_HomeWork3_Source_HomeWork3_Public_TileBase1_h_440191529(TEXT("/Script/HomeWork3"),
	Z_CompiledInDeferFile_FID_GAD2006_GAD2006_HomeWork3_Source_HomeWork3_Public_TileBase1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GAD2006_GAD2006_HomeWork3_Source_HomeWork3_Public_TileBase1_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
