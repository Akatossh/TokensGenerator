// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOKENSGENERATORPLUGIN_Tokens_generated_h
#error "Tokens.generated.h already included, missing '#pragma once' in Tokens.h"
#endif
#define TOKENSGENERATORPLUGIN_Tokens_generated_h

#define TokensGenerator_Plugins_TokensGeneratorPlugin_Source_TokensGeneratorPlugin_Public_Tokens_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTokens_DT_Statics; \
	TOKENSGENERATORPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> TOKENSGENERATORPLUGIN_API UScriptStruct* StaticStruct<struct FTokens_DT>();

#define TokensGenerator_Plugins_TokensGeneratorPlugin_Source_TokensGeneratorPlugin_Public_Tokens_h_40_SPARSE_DATA
#define TokensGenerator_Plugins_TokensGeneratorPlugin_Source_TokensGeneratorPlugin_Public_Tokens_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPoints); \
	DECLARE_FUNCTION(execClearPoints); \
	DECLARE_FUNCTION(execAddPoints); \
	DECLARE_FUNCTION(execSetPoints);


#define TokensGenerator_Plugins_TokensGeneratorPlugin_Source_TokensGeneratorPlugin_Public_Tokens_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPoints); \
	DECLARE_FUNCTION(execClearPoints); \
	DECLARE_FUNCTION(execAddPoints); \
	DECLARE_FUNCTION(execSetPoints);


#define TokensGenerator_Plugins_TokensGeneratorPlugin_Source_TokensGeneratorPlugin_Public_Tokens_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATokens(); \
	friend struct Z_Construct_UClass_ATokens_Statics; \
public: \
	DECLARE_CLASS(ATokens, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TokensGeneratorPlugin"), NO_API) \
	DECLARE_SERIALIZER(ATokens)


#define TokensGenerator_Plugins_TokensGeneratorPlugin_Source_TokensGeneratorPlugin_Public_Tokens_h_40_INCLASS \
private: \
	static void StaticRegisterNativesATokens(); \
	friend struct Z_Construct_UClass_ATokens_Statics; \
public: \
	DECLARE_CLASS(ATokens, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TokensGeneratorPlugin"), NO_API) \
	DECLARE_SERIALIZER(ATokens)


#define TokensGenerator_Plugins_TokensGeneratorPlugin_Source_TokensGeneratorPlugin_Public_Tokens_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATokens(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATokens) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATokens); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATokens); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATokens(ATokens&&); \
	NO_API ATokens(const ATokens&); \
public:


#define TokensGenerator_Plugins_TokensGeneratorPlugin_Source_TokensGeneratorPlugin_Public_Tokens_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATokens(ATokens&&); \
	NO_API ATokens(const ATokens&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATokens); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATokens); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATokens)


#define TokensGenerator_Plugins_TokensGeneratorPlugin_Source_TokensGeneratorPlugin_Public_Tokens_h_40_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Points() { return STRUCT_OFFSET(ATokens, Points); } \
	FORCEINLINE static uint32 __PPO__Shape() { return STRUCT_OFFSET(ATokens, Shape); }


#define TokensGenerator_Plugins_TokensGeneratorPlugin_Source_TokensGeneratorPlugin_Public_Tokens_h_37_PROLOG
#define TokensGenerator_Plugins_TokensGeneratorPlugin_Source_TokensGeneratorPlugin_Public_Tokens_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TokensGenerator_Plugins_TokensGeneratorPlugin_Source_TokensGeneratorPlugin_Public_Tokens_h_40_PRIVATE_PROPERTY_OFFSET \
	TokensGenerator_Plugins_TokensGeneratorPlugin_Source_TokensGeneratorPlugin_Public_Tokens_h_40_SPARSE_DATA \
	TokensGenerator_Plugins_TokensGeneratorPlugin_Source_TokensGeneratorPlugin_Public_Tokens_h_40_RPC_WRAPPERS \
	TokensGenerator_Plugins_TokensGeneratorPlugin_Source_TokensGeneratorPlugin_Public_Tokens_h_40_INCLASS \
	TokensGenerator_Plugins_TokensGeneratorPlugin_Source_TokensGeneratorPlugin_Public_Tokens_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TokensGenerator_Plugins_TokensGeneratorPlugin_Source_TokensGeneratorPlugin_Public_Tokens_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TokensGenerator_Plugins_TokensGeneratorPlugin_Source_TokensGeneratorPlugin_Public_Tokens_h_40_PRIVATE_PROPERTY_OFFSET \
	TokensGenerator_Plugins_TokensGeneratorPlugin_Source_TokensGeneratorPlugin_Public_Tokens_h_40_SPARSE_DATA \
	TokensGenerator_Plugins_TokensGeneratorPlugin_Source_TokensGeneratorPlugin_Public_Tokens_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	TokensGenerator_Plugins_TokensGeneratorPlugin_Source_TokensGeneratorPlugin_Public_Tokens_h_40_INCLASS_NO_PURE_DECLS \
	TokensGenerator_Plugins_TokensGeneratorPlugin_Source_TokensGeneratorPlugin_Public_Tokens_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOKENSGENERATORPLUGIN_API UClass* StaticClass<class ATokens>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TokensGenerator_Plugins_TokensGeneratorPlugin_Source_TokensGeneratorPlugin_Public_Tokens_h


#define FOREACH_ENUM_EGRIDSHAPE(op) \
	op(EGridShape::none) \
	op(EGridShape::Square) \
	op(EGridShape::Pental) \
	op(EGridShape::Hex) 

enum class EGridShape : uint8;
template<> TOKENSGENERATORPLUGIN_API UEnum* StaticEnum<EGridShape>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
