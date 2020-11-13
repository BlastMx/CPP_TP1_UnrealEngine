// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TP1_Unreal : ModuleRules
{
	public TP1_Unreal(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
