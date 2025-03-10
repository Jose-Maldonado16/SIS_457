// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIS_457/SIS_457GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIS_457GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SIS_457_API UClass* Z_Construct_UClass_ASIS_457GameMode();
SIS_457_API UClass* Z_Construct_UClass_ASIS_457GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SIS_457();
// End Cross Module References

// Begin Class ASIS_457GameMode
void ASIS_457GameMode::StaticRegisterNativesASIS_457GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASIS_457GameMode);
UClass* Z_Construct_UClass_ASIS_457GameMode_NoRegister()
{
	return ASIS_457GameMode::StaticClass();
}
struct Z_Construct_UClass_ASIS_457GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SIS_457GameMode.h" },
		{ "ModuleRelativePath", "SIS_457GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASIS_457GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASIS_457GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SIS_457,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASIS_457GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASIS_457GameMode_Statics::ClassParams = {
	&ASIS_457GameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASIS_457GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASIS_457GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASIS_457GameMode()
{
	if (!Z_Registration_Info_UClass_ASIS_457GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASIS_457GameMode.OuterSingleton, Z_Construct_UClass_ASIS_457GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASIS_457GameMode.OuterSingleton;
}
template<> SIS_457_API UClass* StaticClass<ASIS_457GameMode>()
{
	return ASIS_457GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASIS_457GameMode);
ASIS_457GameMode::~ASIS_457GameMode() {}
// End Class ASIS_457GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngine_SIS_457_Source_SIS_457_SIS_457GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASIS_457GameMode, ASIS_457GameMode::StaticClass, TEXT("ASIS_457GameMode"), &Z_Registration_Info_UClass_ASIS_457GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASIS_457GameMode), 1332088216U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_SIS_457_Source_SIS_457_SIS_457GameMode_h_3678326535(TEXT("/Script/SIS_457"),
	Z_CompiledInDeferFile_FID_UnrealEngine_SIS_457_Source_SIS_457_SIS_457GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_SIS_457_Source_SIS_457_SIS_457GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
