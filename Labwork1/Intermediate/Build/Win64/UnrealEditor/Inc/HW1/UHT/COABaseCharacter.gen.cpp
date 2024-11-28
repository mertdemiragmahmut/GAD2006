// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW1/Public/COABaseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCOABaseCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
HW1_API UClass* Z_Construct_UClass_ACOABaseCharacter();
HW1_API UClass* Z_Construct_UClass_ACOABaseCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW1();
// End Cross Module References

// Begin Class ACOABaseCharacter
void ACOABaseCharacter::StaticRegisterNativesACOABaseCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACOABaseCharacter);
UClass* Z_Construct_UClass_ACOABaseCharacter_NoRegister()
{
	return ACOABaseCharacter::StaticClass();
}
struct Z_Construct_UClass_ACOABaseCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "COABaseCharacter.h" },
		{ "ModuleRelativePath", "Public/COABaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDead_MetaData[] = {
		{ "Category", "COA" },
		{ "ModuleRelativePath", "Public/COABaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "COA" },
		{ "ModuleRelativePath", "Public/COABaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "COA" },
		{ "ModuleRelativePath", "Public/COABaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealingRate_MetaData[] = {
		{ "Category", "COA" },
		{ "ModuleRelativePath", "Public/COABaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "COA" },
		{ "ModuleRelativePath", "Public/COABaseCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDead;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealingRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACOABaseCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ACOABaseCharacter_Statics::NewProp_bDead_SetBit(void* Obj)
{
	((ACOABaseCharacter*)Obj)->bDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACOABaseCharacter_Statics::NewProp_bDead = { "bDead", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACOABaseCharacter), &Z_Construct_UClass_ACOABaseCharacter_Statics::NewProp_bDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDead_MetaData), NewProp_bDead_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACOABaseCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACOABaseCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACOABaseCharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACOABaseCharacter, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACOABaseCharacter_Statics::NewProp_HealingRate = { "HealingRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACOABaseCharacter, HealingRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealingRate_MetaData), NewProp_HealingRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACOABaseCharacter_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACOABaseCharacter, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACOABaseCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACOABaseCharacter_Statics::NewProp_bDead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACOABaseCharacter_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACOABaseCharacter_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACOABaseCharacter_Statics::NewProp_HealingRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACOABaseCharacter_Statics::NewProp_WalkSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACOABaseCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACOABaseCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_HW1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACOABaseCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACOABaseCharacter_Statics::ClassParams = {
	&ACOABaseCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACOABaseCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACOABaseCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACOABaseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ACOABaseCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACOABaseCharacter()
{
	if (!Z_Registration_Info_UClass_ACOABaseCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACOABaseCharacter.OuterSingleton, Z_Construct_UClass_ACOABaseCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACOABaseCharacter.OuterSingleton;
}
template<> HW1_API UClass* StaticClass<ACOABaseCharacter>()
{
	return ACOABaseCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACOABaseCharacter);
ACOABaseCharacter::~ACOABaseCharacter() {}
// End Class ACOABaseCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_HW1_Source_HW1_Public_COABaseCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACOABaseCharacter, ACOABaseCharacter::StaticClass, TEXT("ACOABaseCharacter"), &Z_Registration_Info_UClass_ACOABaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACOABaseCharacter), 1609175514U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_HW1_Source_HW1_Public_COABaseCharacter_h_1928138045(TEXT("/Script/HW1"),
	Z_CompiledInDeferFile_FID_UnrealProjects_HW1_Source_HW1_Public_COABaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_HW1_Source_HW1_Public_COABaseCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
