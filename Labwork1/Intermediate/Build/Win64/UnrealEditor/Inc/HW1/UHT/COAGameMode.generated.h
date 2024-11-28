// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "COAGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HW1_COAGameMode_generated_h
#error "COAGameMode.generated.h already included, missing '#pragma once' in COAGameMode.h"
#endif
#define HW1_COAGameMode_generated_h

#define FID_UnrealProjects_HW1_Source_HW1_Public_COAGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACOAGameMode(); \
	friend struct Z_Construct_UClass_ACOAGameMode_Statics; \
public: \
	DECLARE_CLASS(ACOAGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/HW1"), NO_API) \
	DECLARE_SERIALIZER(ACOAGameMode)


#define FID_UnrealProjects_HW1_Source_HW1_Public_COAGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACOAGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACOAGameMode(ACOAGameMode&&); \
	ACOAGameMode(const ACOAGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACOAGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACOAGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACOAGameMode) \
	NO_API virtual ~ACOAGameMode();


#define FID_UnrealProjects_HW1_Source_HW1_Public_COAGameMode_h_12_PROLOG
#define FID_UnrealProjects_HW1_Source_HW1_Public_COAGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_HW1_Source_HW1_Public_COAGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_HW1_Source_HW1_Public_COAGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW1_API UClass* StaticClass<class ACOAGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_HW1_Source_HW1_Public_COAGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
