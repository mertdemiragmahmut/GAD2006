// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Home_Work_2/Public/TBPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTBPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
HOME_WORK_2_API UClass* Z_Construct_UClass_AGameManager_NoRegister();
HOME_WORK_2_API UClass* Z_Construct_UClass_ATBPlayerController();
HOME_WORK_2_API UClass* Z_Construct_UClass_ATBPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Home_Work_2();
// End Cross Module References

// Begin Class ATBPlayerController
void ATBPlayerController::StaticRegisterNativesATBPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATBPlayerController);
UClass* Z_Construct_UClass_ATBPlayerController_NoRegister()
{
	return ATBPlayerController::StaticClass();
}
struct Z_Construct_UClass_ATBPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TBPlayerController.h" },
		{ "ModuleRelativePath", "Public/TBPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameManager_MetaData[] = {
		{ "Category", "TBPlayerController" },
		{ "ModuleRelativePath", "Public/TBPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATBPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATBPlayerController_Statics::NewProp_GameManager = { "GameManager", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATBPlayerController, GameManager), Z_Construct_UClass_AGameManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameManager_MetaData), NewProp_GameManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATBPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATBPlayerController_Statics::NewProp_GameManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATBPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATBPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Home_Work_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATBPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATBPlayerController_Statics::ClassParams = {
	&ATBPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATBPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATBPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATBPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATBPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATBPlayerController()
{
	if (!Z_Registration_Info_UClass_ATBPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATBPlayerController.OuterSingleton, Z_Construct_UClass_ATBPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATBPlayerController.OuterSingleton;
}
template<> HOME_WORK_2_API UClass* StaticClass<ATBPlayerController>()
{
	return ATBPlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATBPlayerController);
ATBPlayerController::~ATBPlayerController() {}
// End Class ATBPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_GAD2006_Home_Work_2_Source_Home_Work_2_Public_TBPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATBPlayerController, ATBPlayerController::StaticClass, TEXT("ATBPlayerController"), &Z_Registration_Info_UClass_ATBPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATBPlayerController), 483437251U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GAD2006_Home_Work_2_Source_Home_Work_2_Public_TBPlayerController_h_2556762500(TEXT("/Script/Home_Work_2"),
	Z_CompiledInDeferFile_FID_GAD2006_Home_Work_2_Source_Home_Work_2_Public_TBPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GAD2006_Home_Work_2_Source_Home_Work_2_Public_TBPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
