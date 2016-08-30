// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class HttpBase : ModuleRules
{
	public HttpBase(TargetInfo Target)
	{
		PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "Http",
            "Json",
            "JsonUtilities"
        });
	}
}
