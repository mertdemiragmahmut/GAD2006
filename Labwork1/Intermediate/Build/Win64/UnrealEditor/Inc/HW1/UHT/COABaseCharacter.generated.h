// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "COABaseCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HW1_COABaseCharacter_generated_h
#error "COABaseCharacter.generated.h already included, missing '#pragma once' in COABaseCharacter.h"
#endif
#define HW1_COABaseCharacter_generated_h

#define FID_UnrealProjects_HW1_Source_HW1_Public_COABaseCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACOABaseCharacter(); \
	friend struct Z_Construct_UClass_ACOABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ACOABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HW1"), NO_API) \
	DECLARE_SERIALIZER(ACOABaseCharacter)


#define FID_UnrealProjects_HW1_Source_HW1_Public_COABaseCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACOABaseCharacter(ACOABaseCharacter&&); \
	ACOABaseCharacter(const ACOABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACOABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACOABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACOABaseCharacter) \
	NO_API virtual ~ACOABaseCharacter();


#define FID_UnrealProjects_HW1_Source_HW1_Public_COABaseCharacter_h_10_PROLOG
#define FID_UnrealProjects_HW1_Source_HW1_Public_COABaseCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_HW1_Source_HW1_Public_COABaseCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_HW1_Source_HW1_Public_COABaseCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW1_API UClass* StaticClass<class ACOABaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_HW1_Source_HW1_Public_COABaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
