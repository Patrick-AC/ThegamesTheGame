// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ThegamesTheGame : ModuleRules
{
	public ThegamesTheGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
