// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IMGD4000Lessons/IMGD4000LessonsGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMGD4000LessonsGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
IMGD4000LESSONS_API UClass* Z_Construct_UClass_AIMGD4000LessonsGameMode();
IMGD4000LESSONS_API UClass* Z_Construct_UClass_AIMGD4000LessonsGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_IMGD4000Lessons();
// End Cross Module References

// Begin Class AIMGD4000LessonsGameMode
void AIMGD4000LessonsGameMode::StaticRegisterNativesAIMGD4000LessonsGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIMGD4000LessonsGameMode);
UClass* Z_Construct_UClass_AIMGD4000LessonsGameMode_NoRegister()
{
	return AIMGD4000LessonsGameMode::StaticClass();
}
struct Z_Construct_UClass_AIMGD4000LessonsGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "IMGD4000LessonsGameMode.h" },
		{ "ModuleRelativePath", "IMGD4000LessonsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIMGD4000LessonsGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AIMGD4000LessonsGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_IMGD4000Lessons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIMGD4000LessonsGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIMGD4000LessonsGameMode_Statics::ClassParams = {
	&AIMGD4000LessonsGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIMGD4000LessonsGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AIMGD4000LessonsGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIMGD4000LessonsGameMode()
{
	if (!Z_Registration_Info_UClass_AIMGD4000LessonsGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIMGD4000LessonsGameMode.OuterSingleton, Z_Construct_UClass_AIMGD4000LessonsGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIMGD4000LessonsGameMode.OuterSingleton;
}
template<> IMGD4000LESSONS_API UClass* StaticClass<AIMGD4000LessonsGameMode>()
{
	return AIMGD4000LessonsGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIMGD4000LessonsGameMode);
AIMGD4000LessonsGameMode::~AIMGD4000LessonsGameMode() {}
// End Class AIMGD4000LessonsGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ldima_Documents_GitHub_IMGD4000Lessons_IMGD4000Lessons_Source_IMGD4000Lessons_IMGD4000LessonsGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIMGD4000LessonsGameMode, AIMGD4000LessonsGameMode::StaticClass, TEXT("AIMGD4000LessonsGameMode"), &Z_Registration_Info_UClass_AIMGD4000LessonsGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIMGD4000LessonsGameMode), 2184625222U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ldima_Documents_GitHub_IMGD4000Lessons_IMGD4000Lessons_Source_IMGD4000Lessons_IMGD4000LessonsGameMode_h_1089868708(TEXT("/Script/IMGD4000Lessons"),
	Z_CompiledInDeferFile_FID_Users_ldima_Documents_GitHub_IMGD4000Lessons_IMGD4000Lessons_Source_IMGD4000Lessons_IMGD4000LessonsGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ldima_Documents_GitHub_IMGD4000Lessons_IMGD4000Lessons_Source_IMGD4000Lessons_IMGD4000LessonsGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
