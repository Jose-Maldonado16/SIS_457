// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIS_457/ladrillo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeladrillo() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
SIS_457_API UClass* Z_Construct_UClass_Aladrillo();
SIS_457_API UClass* Z_Construct_UClass_Aladrillo_NoRegister();
UPackage* Z_Construct_UPackage__Script_SIS_457();
// End Cross Module References

// Begin Class Aladrillo
void Aladrillo::StaticRegisterNativesAladrillo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Aladrillo);
UClass* Z_Construct_UClass_Aladrillo_NoRegister()
{
	return Aladrillo::StaticClass();
}
struct Z_Construct_UClass_Aladrillo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ladrillo.h" },
		{ "ModuleRelativePath", "ladrillo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aladrillo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Aladrillo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SIS_457,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Aladrillo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Aladrillo_Statics::ClassParams = {
	&Aladrillo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aladrillo_Statics::Class_MetaDataParams), Z_Construct_UClass_Aladrillo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Aladrillo()
{
	if (!Z_Registration_Info_UClass_Aladrillo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Aladrillo.OuterSingleton, Z_Construct_UClass_Aladrillo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Aladrillo.OuterSingleton;
}
template<> SIS_457_API UClass* StaticClass<Aladrillo>()
{
	return Aladrillo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Aladrillo);
Aladrillo::~Aladrillo() {}
// End Class Aladrillo

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealEngine_SIS_457_Source_SIS_457_ladrillo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Aladrillo, Aladrillo::StaticClass, TEXT("Aladrillo"), &Z_Registration_Info_UClass_Aladrillo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Aladrillo), 408950978U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealEngine_SIS_457_Source_SIS_457_ladrillo_h_162975673(TEXT("/Script/SIS_457"),
	Z_CompiledInDeferFile_FID_UnrealEngine_SIS_457_Source_SIS_457_ladrillo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealEngine_SIS_457_Source_SIS_457_ladrillo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
