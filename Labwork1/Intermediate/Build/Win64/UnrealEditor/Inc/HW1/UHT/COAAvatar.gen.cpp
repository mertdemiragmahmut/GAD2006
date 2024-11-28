// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW1/Public/COAAvatar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCOAAvatar() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
HW1_API UClass* Z_Construct_UClass_ACOAAvatar();
HW1_API UClass* Z_Construct_UClass_ACOAAvatar_NoRegister();
HW1_API UClass* Z_Construct_UClass_ACOABaseCharacter();
UPackage* Z_Construct_UPackage__Script_HW1();
// End Cross Module References

// Begin Class ACOAAvatar
void ACOAAvatar::StaticRegisterNativesACOAAvatar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACOAAvatar);
UClass* Z_Construct_UClass_ACOAAvatar_NoRegister()
{
	return ACOAAvatar::StaticClass();
}
struct Z_Construct_UClass_ACOAAvatar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "COAAvatar.h" },
		{ "ModuleRelativePath", "Public/COAAvatar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mCamera_MetaData[] = {
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/COAAvatar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mSpringArm_MetaData[] = {
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/COAAvatar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[] = {
		{ "Category", "COA" },
		{ "ModuleRelativePath", "Public/COAAvatar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "Category", "COA" },
		{ "ModuleRelativePath", "Public/COAAvatar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "COA" },
		{ "ModuleRelativePath", "Public/COAAvatar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaGainRate_MetaData[] = {
		{ "Category", "COA" },
		{ "ModuleRelativePath", "Public/COAAvatar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminDrainRate_MetaData[] = {
		{ "Category", "COA" },
		{ "ModuleRelativePath", "Public/COAAvatar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStaminaDrained_MetaData[] = {
		{ "Category", "COA" },
		{ "ModuleRelativePath", "Public/COAAvatar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRunning_MetaData[] = {
		{ "Category", "COA" },
		{ "ModuleRelativePath", "Public/COAAvatar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mSpringArm;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaGainRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminDrainRate;
	static void NewProp_bStaminaDrained_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStaminaDrained;
	static void NewProp_bRunning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunning;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACOAAvatar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACOAAvatar_Statics::NewProp_mCamera = { "mCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACOAAvatar, mCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mCamera_MetaData), NewProp_mCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACOAAvatar_Statics::NewProp_mSpringArm = { "mSpringArm", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACOAAvatar, mSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mSpringArm_MetaData), NewProp_mSpringArm_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACOAAvatar_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACOAAvatar, RunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunSpeed_MetaData), NewProp_RunSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACOAAvatar_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACOAAvatar, Stamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACOAAvatar_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACOAAvatar, MaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACOAAvatar_Statics::NewProp_StaminaGainRate = { "StaminaGainRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACOAAvatar, StaminaGainRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaGainRate_MetaData), NewProp_StaminaGainRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACOAAvatar_Statics::NewProp_StaminDrainRate = { "StaminDrainRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACOAAvatar, StaminDrainRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminDrainRate_MetaData), NewProp_StaminDrainRate_MetaData) };
void Z_Construct_UClass_ACOAAvatar_Statics::NewProp_bStaminaDrained_SetBit(void* Obj)
{
	((ACOAAvatar*)Obj)->bStaminaDrained = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACOAAvatar_Statics::NewProp_bStaminaDrained = { "bStaminaDrained", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACOAAvatar), &Z_Construct_UClass_ACOAAvatar_Statics::NewProp_bStaminaDrained_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStaminaDrained_MetaData), NewProp_bStaminaDrained_MetaData) };
void Z_Construct_UClass_ACOAAvatar_Statics::NewProp_bRunning_SetBit(void* Obj)
{
	((ACOAAvatar*)Obj)->bRunning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACOAAvatar_Statics::NewProp_bRunning = { "bRunning", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACOAAvatar), &Z_Construct_UClass_ACOAAvatar_Statics::NewProp_bRunning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRunning_MetaData), NewProp_bRunning_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACOAAvatar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACOAAvatar_Statics::NewProp_mCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACOAAvatar_Statics::NewProp_mSpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACOAAvatar_Statics::NewProp_RunSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACOAAvatar_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACOAAvatar_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACOAAvatar_Statics::NewProp_StaminaGainRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACOAAvatar_Statics::NewProp_StaminDrainRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACOAAvatar_Statics::NewProp_bStaminaDrained,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACOAAvatar_Statics::NewProp_bRunning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACOAAvatar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACOAAvatar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACOABaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_HW1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACOAAvatar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACOAAvatar_Statics::ClassParams = {
	&ACOAAvatar::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACOAAvatar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACOAAvatar_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACOAAvatar_Statics::Class_MetaDataParams), Z_Construct_UClass_ACOAAvatar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACOAAvatar()
{
	if (!Z_Registration_Info_UClass_ACOAAvatar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACOAAvatar.OuterSingleton, Z_Construct_UClass_ACOAAvatar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACOAAvatar.OuterSingleton;
}
template<> HW1_API UClass* StaticClass<ACOAAvatar>()
{
	return ACOAAvatar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACOAAvatar);
ACOAAvatar::~ACOAAvatar() {}
// End Class ACOAAvatar

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_HW1_Source_HW1_Public_COAAvatar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACOAAvatar, ACOAAvatar::StaticClass, TEXT("ACOAAvatar"), &Z_Registration_Info_UClass_ACOAAvatar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACOAAvatar), 2620260644U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_HW1_Source_HW1_Public_COAAvatar_h_3618293124(TEXT("/Script/HW1"),
	Z_CompiledInDeferFile_FID_UnrealProjects_HW1_Source_HW1_Public_COAAvatar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_HW1_Source_HW1_Public_COAAvatar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
