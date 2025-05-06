// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IMGD4000Lessons/SpherePawn_Tut4.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpherePawn_Tut4() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
IMGD4000LESSONS_API UClass* Z_Construct_UClass_ASpherePawn_Tut4();
IMGD4000LESSONS_API UClass* Z_Construct_UClass_ASpherePawn_Tut4_NoRegister();
UPackage* Z_Construct_UPackage__Script_IMGD4000Lessons();
// End Cross Module References

// Begin Class ASpherePawn_Tut4
void ASpherePawn_Tut4::StaticRegisterNativesASpherePawn_Tut4()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpherePawn_Tut4);
UClass* Z_Construct_UClass_ASpherePawn_Tut4_NoRegister()
{
	return ASpherePawn_Tut4::StaticClass();
}
struct Z_Construct_UClass_ASpherePawn_Tut4_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SpherePawn_Tut4.h" },
		{ "ModuleRelativePath", "SpherePawn_Tut4.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "SpherePawn_Tut4" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpherePawn_Tut4.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "SpherePawn_Tut4" },
		{ "ModuleRelativePath", "SpherePawn_Tut4.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpherePawn_Tut4>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpherePawn_Tut4_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpherePawn_Tut4, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpherePawn_Tut4_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpherePawn_Tut4, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpherePawn_Tut4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpherePawn_Tut4_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpherePawn_Tut4_Statics::NewProp_Health,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpherePawn_Tut4_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpherePawn_Tut4_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_IMGD4000Lessons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpherePawn_Tut4_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpherePawn_Tut4_Statics::ClassParams = {
	&ASpherePawn_Tut4::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASpherePawn_Tut4_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpherePawn_Tut4_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpherePawn_Tut4_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpherePawn_Tut4_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpherePawn_Tut4()
{
	if (!Z_Registration_Info_UClass_ASpherePawn_Tut4.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpherePawn_Tut4.OuterSingleton, Z_Construct_UClass_ASpherePawn_Tut4_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpherePawn_Tut4.OuterSingleton;
}
template<> IMGD4000LESSONS_API UClass* StaticClass<ASpherePawn_Tut4>()
{
	return ASpherePawn_Tut4::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpherePawn_Tut4);
ASpherePawn_Tut4::~ASpherePawn_Tut4() {}
// End Class ASpherePawn_Tut4

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ldima_Documents_GitHub_IMGD4000Lessons_IMGD4000Lessons_Source_IMGD4000Lessons_SpherePawn_Tut4_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpherePawn_Tut4, ASpherePawn_Tut4::StaticClass, TEXT("ASpherePawn_Tut4"), &Z_Registration_Info_UClass_ASpherePawn_Tut4, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpherePawn_Tut4), 4293319523U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ldima_Documents_GitHub_IMGD4000Lessons_IMGD4000Lessons_Source_IMGD4000Lessons_SpherePawn_Tut4_h_3805867588(TEXT("/Script/IMGD4000Lessons"),
	Z_CompiledInDeferFile_FID_Users_ldima_Documents_GitHub_IMGD4000Lessons_IMGD4000Lessons_Source_IMGD4000Lessons_SpherePawn_Tut4_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ldima_Documents_GitHub_IMGD4000Lessons_IMGD4000Lessons_Source_IMGD4000Lessons_SpherePawn_Tut4_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
