// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IMGD4000Lessons/SpherePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpherePawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
IMGD4000LESSONS_API UClass* Z_Construct_UClass_ASpherePawn();
IMGD4000LESSONS_API UClass* Z_Construct_UClass_ASpherePawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_IMGD4000Lessons();
// End Cross Module References

// Begin Class ASpherePawn Function HitSomething
struct SpherePawn_eventHitSomething_Parms
{
	UStaticMeshComponent* m;
};
static const FName NAME_ASpherePawn_HitSomething = FName(TEXT("HitSomething"));
void ASpherePawn::HitSomething(UStaticMeshComponent* m)
{
	UFunction* Func = FindFunctionChecked(NAME_ASpherePawn_HitSomething);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		SpherePawn_eventHitSomething_Parms Parms;
		Parms.m=m;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HitSomething_Implementation(m);
	}
}
struct Z_Construct_UFunction_ASpherePawn_HitSomething_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpherePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_m;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpherePawn_HitSomething_Statics::NewProp_m = { "m", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpherePawn_eventHitSomething_Parms, m), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_MetaData), NewProp_m_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpherePawn_HitSomething_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpherePawn_HitSomething_Statics::NewProp_m,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpherePawn_HitSomething_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpherePawn_HitSomething_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpherePawn, nullptr, "HitSomething", nullptr, nullptr, Z_Construct_UFunction_ASpherePawn_HitSomething_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpherePawn_HitSomething_Statics::PropPointers), sizeof(SpherePawn_eventHitSomething_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpherePawn_HitSomething_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpherePawn_HitSomething_Statics::Function_MetaDataParams) };
static_assert(sizeof(SpherePawn_eventHitSomething_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpherePawn_HitSomething()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpherePawn_HitSomething_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpherePawn::execHitSomething)
{
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_m);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HitSomething_Implementation(Z_Param_m);
	P_NATIVE_END;
}
// End Class ASpherePawn Function HitSomething

// Begin Class ASpherePawn
void ASpherePawn::StaticRegisterNativesASpherePawn()
{
	UClass* Class = ASpherePawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HitSomething", &ASpherePawn::execHitSomething },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpherePawn);
UClass* Z_Construct_UClass_ASpherePawn_NoRegister()
{
	return ASpherePawn::StaticClass();
}
struct Z_Construct_UClass_ASpherePawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SpherePawn.h" },
		{ "ModuleRelativePath", "SpherePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "SpherePawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//U prefix denotes a class\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpherePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "U prefix denotes a class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpeed_MetaData[] = {
		{ "Category", "SpherePawn" },
		{ "ModuleRelativePath", "SpherePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "SpherePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpherePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpherePawn_HitSomething, "HitSomething" }, // 3907163560
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpherePawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpherePawn_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpherePawn, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpherePawn_Statics::NewProp_ProjectileSpeed = { "ProjectileSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpherePawn, ProjectileSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileSpeed_MetaData), NewProp_ProjectileSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpherePawn_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpherePawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpherePawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpherePawn_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpherePawn_Statics::NewProp_ProjectileSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpherePawn_Statics::NewProp_Camera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpherePawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpherePawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_IMGD4000Lessons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpherePawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpherePawn_Statics::ClassParams = {
	&ASpherePawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpherePawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpherePawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpherePawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpherePawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpherePawn()
{
	if (!Z_Registration_Info_UClass_ASpherePawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpherePawn.OuterSingleton, Z_Construct_UClass_ASpherePawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpherePawn.OuterSingleton;
}
template<> IMGD4000LESSONS_API UClass* StaticClass<ASpherePawn>()
{
	return ASpherePawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpherePawn);
ASpherePawn::~ASpherePawn() {}
// End Class ASpherePawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ldima_Documents_GitHub_IMGD4000Lessons_IMGD4000Lessons_Source_IMGD4000Lessons_SpherePawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpherePawn, ASpherePawn::StaticClass, TEXT("ASpherePawn"), &Z_Registration_Info_UClass_ASpherePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpherePawn), 1962169883U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ldima_Documents_GitHub_IMGD4000Lessons_IMGD4000Lessons_Source_IMGD4000Lessons_SpherePawn_h_2348624153(TEXT("/Script/IMGD4000Lessons"),
	Z_CompiledInDeferFile_FID_Users_ldima_Documents_GitHub_IMGD4000Lessons_IMGD4000Lessons_Source_IMGD4000Lessons_SpherePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ldima_Documents_GitHub_IMGD4000Lessons_IMGD4000Lessons_Source_IMGD4000Lessons_SpherePawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
