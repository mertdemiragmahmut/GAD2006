// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOME_WORK_2_GameManager_generated_h
#error "GameManager.generated.h already included, missing '#pragma once' in GameManager.h"
#endif
#define HOME_WORK_2_GameManager_generated_h

#define FID_GAD2006_Home_Work_2_Source_Home_Work_2_Public_GameManager_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSUnitInfo_Statics; \
	HOME_WORK_2_API static class UScriptStruct* StaticStruct();


template<> HOME_WORK_2_API UScriptStruct* StaticStruct<struct FSUnitInfo>();

#define FID_GAD2006_Home_Work_2_Source_Home_Work_2_Public_GameManager_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSLevelInfo_Statics; \
	HOME_WORK_2_API static class UScriptStruct* StaticStruct();


template<> HOME_WORK_2_API UScriptStruct* StaticStruct<struct FSLevelInfo>();

#define FID_GAD2006_Home_Work_2_Source_Home_Work_2_Public_GameManager_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUndoLastMove);


#define FID_GAD2006_Home_Work_2_Source_Home_Work_2_Public_GameManager_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameManager(); \
	friend struct Z_Construct_UClass_AGameManager_Statics; \
public: \
	DECLARE_CLASS(AGameManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Home_Work_2"), NO_API) \
	DECLARE_SERIALIZER(AGameManager)


#define FID_GAD2006_Home_Work_2_Source_Home_Work_2_Public_GameManager_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGameManager(AGameManager&&); \
	AGameManager(const AGameManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameManager) \
	NO_API virtual ~AGameManager();


#define FID_GAD2006_Home_Work_2_Source_Home_Work_2_Public_GameManager_h_38_PROLOG
#define FID_GAD2006_Home_Work_2_Source_Home_Work_2_Public_GameManager_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GAD2006_Home_Work_2_Source_Home_Work_2_Public_GameManager_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GAD2006_Home_Work_2_Source_Home_Work_2_Public_GameManager_h_41_INCLASS_NO_PURE_DECLS \
	FID_GAD2006_Home_Work_2_Source_Home_Work_2_Public_GameManager_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOME_WORK_2_API UClass* StaticClass<class AGameManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GAD2006_Home_Work_2_Source_Home_Work_2_Public_GameManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
