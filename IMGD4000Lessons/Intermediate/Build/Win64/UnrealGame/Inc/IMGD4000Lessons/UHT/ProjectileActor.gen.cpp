// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IMGD4000Lessons/ProjectileActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
IMGD4000LESSONS_API UClass* Z_Construct_UClass_AProjectileActor();
IMGD4000LESSONS_API UClass* Z_Construct_UClass_AProjectileActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_IMGD4000Lessons();
// End Cross Module References

// Begin Class AProjectileActor
void AProjectileActor::StaticRegisterNativesAProjectileActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectileActor);
UClass* Z_Construct_UClass_AProjectileActor_NoRegister()
{
	return AProjectileActor::StaticClass();
}
struct Z_Construct_UClass_AProjectileActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ProjectileActor.h" },
		{ "ModuleRelativePath", "ProjectileActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProjectileActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_IMGD4000Lessons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectileActor_Statics::ClassParams = {
	&AProjectileActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectileActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectileActor()
{
	if (!Z_Registration_Info_UClass_AProjectileActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectileActor.OuterSingleton, Z_Construct_UClass_AProjectileActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectileActor.OuterSingleton;
}
template<> IMGD4000LESSONS_API UClass* StaticClass<AProjectileActor>()
{
	return AProjectileActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileActor);
AProjectileActor::~AProjectileActor() {}
// End Class AProjectileActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ldima_Documents_GitHub_IMGD4000Lessons_IMGD4000Lessons_Source_IMGD4000Lessons_ProjectileActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectileActor, AProjectileActor::StaticClass, TEXT("AProjectileActor"), &Z_Registration_Info_UClass_AProjectileActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectileActor), 913506225U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ldima_Documents_GitHub_IMGD4000Lessons_IMGD4000Lessons_Source_IMGD4000Lessons_ProjectileActor_h_2356406496(TEXT("/Script/IMGD4000Lessons"),
	Z_CompiledInDeferFile_FID_Users_ldima_Documents_GitHub_IMGD4000Lessons_IMGD4000Lessons_Source_IMGD4000Lessons_ProjectileActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ldima_Documents_GitHub_IMGD4000Lessons_IMGD4000Lessons_Source_IMGD4000Lessons_ProjectileActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
