// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TokensGeneratorPlugin/Public/Tokens.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTokens() {}
// Cross Module References
	TOKENSGENERATORPLUGIN_API UEnum* Z_Construct_UEnum_TokensGeneratorPlugin_EGridShape();
	UPackage* Z_Construct_UPackage__Script_TokensGeneratorPlugin();
	TOKENSGENERATORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTokens_DT();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	TOKENSGENERATORPLUGIN_API UClass* Z_Construct_UClass_ATokens_NoRegister();
	TOKENSGENERATORPLUGIN_API UClass* Z_Construct_UClass_ATokens();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	static UEnum* EGridShape_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TokensGeneratorPlugin_EGridShape, Z_Construct_UPackage__Script_TokensGeneratorPlugin(), TEXT("EGridShape"));
		}
		return Singleton;
	}
	template<> TOKENSGENERATORPLUGIN_API UEnum* StaticEnum<EGridShape>()
	{
		return EGridShape_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGridShape(EGridShape_StaticEnum, TEXT("/Script/TokensGeneratorPlugin"), TEXT("EGridShape"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TokensGeneratorPlugin_EGridShape_Hash() { return 4048706874U; }
	UEnum* Z_Construct_UEnum_TokensGeneratorPlugin_EGridShape()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TokensGeneratorPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGridShape"), 0, Get_Z_Construct_UEnum_TokensGeneratorPlugin_EGridShape_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGridShape::none", (int64)EGridShape::none },
				{ "EGridShape::Square", (int64)EGridShape::Square },
				{ "EGridShape::Pental", (int64)EGridShape::Pental },
				{ "EGridShape::Hex", (int64)EGridShape::Hex },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Hex.Name", "EGridShape::Hex" },
				{ "ModuleRelativePath", "Public/Tokens.h" },
				{ "none.Name", "EGridShape::none" },
				{ "Pental.Name", "EGridShape::Pental" },
				{ "Square.Name", "EGridShape::Square" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TokensGeneratorPlugin,
				nullptr,
				"EGridShape",
				"EGridShape",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}

static_assert(std::is_polymorphic<FTokens_DT>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTokens_DT cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FTokens_DT::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TOKENSGENERATORPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FTokens_DT_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTokens_DT, Z_Construct_UPackage__Script_TokensGeneratorPlugin(), TEXT("Tokens_DT"), sizeof(FTokens_DT), Get_Z_Construct_UScriptStruct_FTokens_DT_Hash());
	}
	return Singleton;
}
template<> TOKENSGENERATORPLUGIN_API UScriptStruct* StaticStruct<FTokens_DT>()
{
	return FTokens_DT::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTokens_DT(FTokens_DT::StaticStruct, TEXT("/Script/TokensGeneratorPlugin"), TEXT("Tokens_DT"), false, nullptr, nullptr);
static struct FScriptStruct_TokensGeneratorPlugin_StaticRegisterNativesFTokens_DT
{
	FScriptStruct_TokensGeneratorPlugin_StaticRegisterNativesFTokens_DT()
	{
		UScriptStruct::DeferCppStructOps<FTokens_DT>(FName(TEXT("Tokens_DT")));
	}
} ScriptStruct_TokensGeneratorPlugin_StaticRegisterNativesFTokens_DT;
	struct Z_Construct_UScriptStruct_FTokens_DT_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokens_DT_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Tokens.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTokens_DT_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTokens_DT>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokens_DT_Statics::NewProp_value_MetaData[] = {
		{ "Category", "tokens" },
		{ "ModuleRelativePath", "Public/Tokens.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTokens_DT_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTokens_DT, value), METADATA_PARAMS(Z_Construct_UScriptStruct_FTokens_DT_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokens_DT_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTokens_DT_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "tokens" },
		{ "ModuleRelativePath", "Public/Tokens.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTokens_DT_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTokens_DT, mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTokens_DT_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokens_DT_Statics::NewProp_mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTokens_DT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokens_DT_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTokens_DT_Statics::NewProp_mesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTokens_DT_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TokensGeneratorPlugin,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Tokens_DT",
		sizeof(FTokens_DT),
		alignof(FTokens_DT),
		Z_Construct_UScriptStruct_FTokens_DT_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokens_DT_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTokens_DT_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTokens_DT_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTokens_DT()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTokens_DT_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TokensGeneratorPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Tokens_DT"), sizeof(FTokens_DT), Get_Z_Construct_UScriptStruct_FTokens_DT_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTokens_DT_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTokens_DT_Hash() { return 1499403848U; }
	DEFINE_FUNCTION(ATokens::execGetColumnsKeys)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetColumnsKeys();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATokens::execGetTokenInstacesColumns)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<int32,UInstancedStaticMeshComponent*>*)Z_Param__Result=P_THIS->GetTokenInstacesColumns();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATokens::execGetPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATokens::execClearPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATokens::execAddPoints)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_points);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPoints(Z_Param_points);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATokens::execSetPoints)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Points);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPoints(Z_Param_Points);
		P_NATIVE_END;
	}
	void ATokens::StaticRegisterNativesATokens()
	{
		UClass* Class = ATokens::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPoints", &ATokens::execAddPoints },
			{ "ClearPoints", &ATokens::execClearPoints },
			{ "GetColumnsKeys", &ATokens::execGetColumnsKeys },
			{ "GetPoints", &ATokens::execGetPoints },
			{ "GetTokenInstacesColumns", &ATokens::execGetTokenInstacesColumns },
			{ "SetPoints", &ATokens::execSetPoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATokens_AddPoints_Statics
	{
		struct Tokens_eventAddPoints_Parms
		{
			int32 points;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_points;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATokens_AddPoints_Statics::NewProp_points = { "points", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tokens_eventAddPoints_Parms, points), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATokens_AddPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATokens_AddPoints_Statics::NewProp_points,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATokens_AddPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tokens" },
		{ "ModuleRelativePath", "Public/Tokens.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATokens_AddPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATokens, nullptr, "AddPoints", nullptr, nullptr, sizeof(Tokens_eventAddPoints_Parms), Z_Construct_UFunction_ATokens_AddPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATokens_AddPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATokens_AddPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATokens_AddPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATokens_AddPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATokens_AddPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATokens_ClearPoints_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATokens_ClearPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tokens" },
		{ "ModuleRelativePath", "Public/Tokens.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATokens_ClearPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATokens, nullptr, "ClearPoints", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATokens_ClearPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATokens_ClearPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATokens_ClearPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATokens_ClearPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATokens_GetColumnsKeys_Statics
	{
		struct Tokens_eventGetColumnsKeys_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATokens_GetColumnsKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATokens_GetColumnsKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tokens_eventGetColumnsKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATokens_GetColumnsKeys_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATokens_GetColumnsKeys_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATokens_GetColumnsKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATokens_GetColumnsKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tokens" },
		{ "ModuleRelativePath", "Public/Tokens.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATokens_GetColumnsKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATokens, nullptr, "GetColumnsKeys", nullptr, nullptr, sizeof(Tokens_eventGetColumnsKeys_Parms), Z_Construct_UFunction_ATokens_GetColumnsKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATokens_GetColumnsKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATokens_GetColumnsKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATokens_GetColumnsKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATokens_GetColumnsKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATokens_GetColumnsKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATokens_GetPoints_Statics
	{
		struct Tokens_eventGetPoints_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATokens_GetPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tokens_eventGetPoints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATokens_GetPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATokens_GetPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATokens_GetPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tokens" },
		{ "ModuleRelativePath", "Public/Tokens.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATokens_GetPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATokens, nullptr, "GetPoints", nullptr, nullptr, sizeof(Tokens_eventGetPoints_Parms), Z_Construct_UFunction_ATokens_GetPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATokens_GetPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATokens_GetPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATokens_GetPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATokens_GetPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATokens_GetPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATokens_GetTokenInstacesColumns_Statics
	{
		struct Tokens_eventGetTokenInstacesColumns_Parms
		{
			TMap<int32,UInstancedStaticMeshComponent*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATokens_GetTokenInstacesColumns_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATokens_GetTokenInstacesColumns_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATokens_GetTokenInstacesColumns_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ATokens_GetTokenInstacesColumns_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tokens_eventGetTokenInstacesColumns_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ATokens_GetTokenInstacesColumns_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATokens_GetTokenInstacesColumns_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATokens_GetTokenInstacesColumns_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATokens_GetTokenInstacesColumns_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATokens_GetTokenInstacesColumns_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATokens_GetTokenInstacesColumns_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATokens_GetTokenInstacesColumns_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tokens" },
		{ "ModuleRelativePath", "Public/Tokens.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATokens_GetTokenInstacesColumns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATokens, nullptr, "GetTokenInstacesColumns", nullptr, nullptr, sizeof(Tokens_eventGetTokenInstacesColumns_Parms), Z_Construct_UFunction_ATokens_GetTokenInstacesColumns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATokens_GetTokenInstacesColumns_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATokens_GetTokenInstacesColumns_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATokens_GetTokenInstacesColumns_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATokens_GetTokenInstacesColumns()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATokens_GetTokenInstacesColumns_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATokens_SetPoints_Statics
	{
		struct Tokens_eventSetPoints_Parms
		{
			int32 Points;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Points;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATokens_SetPoints_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Tokens_eventSetPoints_Parms, Points), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATokens_SetPoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATokens_SetPoints_Statics::NewProp_Points,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATokens_SetPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tokens" },
		{ "ModuleRelativePath", "Public/Tokens.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATokens_SetPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATokens, nullptr, "SetPoints", nullptr, nullptr, sizeof(Tokens_eventSetPoints_Parms), Z_Construct_UFunction_ATokens_SetPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATokens_SetPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATokens_SetPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATokens_SetPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATokens_SetPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATokens_SetPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATokens_NoRegister()
	{
		return ATokens::StaticClass();
	}
	struct Z_Construct_UClass_ATokens_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tokens_DT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tokens_DT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TokenMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TokenMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxColumnHeigh_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxColumnHeigh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxColumnMinHeigh_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxColumnMinHeigh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZSpaceing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZSpaceing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XSpaceing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_XSpaceing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YSpaceing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YSpaceing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Points;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Shape_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Shape;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATokens_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TokensGeneratorPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATokens_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATokens_AddPoints, "AddPoints" }, // 845505155
		{ &Z_Construct_UFunction_ATokens_ClearPoints, "ClearPoints" }, // 4240045820
		{ &Z_Construct_UFunction_ATokens_GetColumnsKeys, "GetColumnsKeys" }, // 3700472832
		{ &Z_Construct_UFunction_ATokens_GetPoints, "GetPoints" }, // 3774364509
		{ &Z_Construct_UFunction_ATokens_GetTokenInstacesColumns, "GetTokenInstacesColumns" }, // 845843860
		{ &Z_Construct_UFunction_ATokens_SetPoints, "SetPoints" }, // 1613905392
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATokens_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tokens.h" },
		{ "ModuleRelativePath", "Public/Tokens.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATokens_Statics::NewProp_Tokens_DT_MetaData[] = {
		{ "Category", "Tokens" },
		{ "ModuleRelativePath", "Public/Tokens.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATokens_Statics::NewProp_Tokens_DT = { "Tokens_DT", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATokens, Tokens_DT), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATokens_Statics::NewProp_Tokens_DT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATokens_Statics::NewProp_Tokens_DT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATokens_Statics::NewProp_TokenMesh_MetaData[] = {
		{ "Category", "Tokens" },
		{ "ModuleRelativePath", "Public/Tokens.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATokens_Statics::NewProp_TokenMesh = { "TokenMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATokens, TokenMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATokens_Statics::NewProp_TokenMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATokens_Statics::NewProp_TokenMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATokens_Statics::NewProp_MaxColumnHeigh_MetaData[] = {
		{ "Category", "Apperance" },
		{ "ModuleRelativePath", "Public/Tokens.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATokens_Statics::NewProp_MaxColumnHeigh = { "MaxColumnHeigh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATokens, MaxColumnHeigh), METADATA_PARAMS(Z_Construct_UClass_ATokens_Statics::NewProp_MaxColumnHeigh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATokens_Statics::NewProp_MaxColumnHeigh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATokens_Statics::NewProp_MaxColumnMinHeigh_MetaData[] = {
		{ "Category", "Apperance" },
		{ "ModuleRelativePath", "Public/Tokens.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATokens_Statics::NewProp_MaxColumnMinHeigh = { "MaxColumnMinHeigh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATokens, MaxColumnMinHeigh), METADATA_PARAMS(Z_Construct_UClass_ATokens_Statics::NewProp_MaxColumnMinHeigh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATokens_Statics::NewProp_MaxColumnMinHeigh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATokens_Statics::NewProp_ZSpaceing_MetaData[] = {
		{ "Category", "Apperance" },
		{ "ModuleRelativePath", "Public/Tokens.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATokens_Statics::NewProp_ZSpaceing = { "ZSpaceing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATokens, ZSpaceing), METADATA_PARAMS(Z_Construct_UClass_ATokens_Statics::NewProp_ZSpaceing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATokens_Statics::NewProp_ZSpaceing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATokens_Statics::NewProp_XSpaceing_MetaData[] = {
		{ "Category", "Apperance" },
		{ "ModuleRelativePath", "Public/Tokens.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATokens_Statics::NewProp_XSpaceing = { "XSpaceing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATokens, XSpaceing), METADATA_PARAMS(Z_Construct_UClass_ATokens_Statics::NewProp_XSpaceing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATokens_Statics::NewProp_XSpaceing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATokens_Statics::NewProp_YSpaceing_MetaData[] = {
		{ "Category", "Apperance" },
		{ "ModuleRelativePath", "Public/Tokens.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATokens_Statics::NewProp_YSpaceing = { "YSpaceing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATokens, YSpaceing), METADATA_PARAMS(Z_Construct_UClass_ATokens_Statics::NewProp_YSpaceing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATokens_Statics::NewProp_YSpaceing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATokens_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "Tokens" },
		{ "Comment", "//Total amount of point that size of the heap will be calculated by\n" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Tokens.h" },
		{ "ToolTip", "Total amount of point that size of the heap will be calculated by" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATokens_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0021080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATokens, Points), METADATA_PARAMS(Z_Construct_UClass_ATokens_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATokens_Statics::NewProp_Points_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATokens_Statics::NewProp_Shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATokens_Statics::NewProp_Shape_MetaData[] = {
		{ "Category", "Tokens" },
		{ "Comment", "//Shape of the heap\n" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Tokens.h" },
		{ "ToolTip", "Shape of the heap" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATokens_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0021080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATokens, Shape), Z_Construct_UEnum_TokensGeneratorPlugin_EGridShape, METADATA_PARAMS(Z_Construct_UClass_ATokens_Statics::NewProp_Shape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATokens_Statics::NewProp_Shape_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATokens_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATokens_Statics::NewProp_Tokens_DT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATokens_Statics::NewProp_TokenMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATokens_Statics::NewProp_MaxColumnHeigh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATokens_Statics::NewProp_MaxColumnMinHeigh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATokens_Statics::NewProp_ZSpaceing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATokens_Statics::NewProp_XSpaceing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATokens_Statics::NewProp_YSpaceing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATokens_Statics::NewProp_Points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATokens_Statics::NewProp_Shape_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATokens_Statics::NewProp_Shape,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATokens_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATokens>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATokens_Statics::ClassParams = {
		&ATokens::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATokens_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATokens_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATokens_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATokens_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATokens()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATokens_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATokens, 1864050731);
	template<> TOKENSGENERATORPLUGIN_API UClass* StaticClass<ATokens>()
	{
		return ATokens::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATokens(Z_Construct_UClass_ATokens, &ATokens::StaticClass, TEXT("/Script/TokensGeneratorPlugin"), TEXT("ATokens"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATokens);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
