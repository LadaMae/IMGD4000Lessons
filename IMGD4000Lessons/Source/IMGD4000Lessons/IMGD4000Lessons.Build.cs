// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class IMGD4000Lessons : ModuleRules
{
	public IMGD4000Lessons(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
