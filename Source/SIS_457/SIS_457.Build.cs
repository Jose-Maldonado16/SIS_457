// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SIS_457 : ModuleRules
{
	public SIS_457(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
