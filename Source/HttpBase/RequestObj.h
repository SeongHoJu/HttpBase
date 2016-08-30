// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Object.h"
#include "RequestObj.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EVerb : uint8
{
	EGET,
	EPUT,
	EPOST,

	EVerbMax
};


UCLASS()
class HTTPBASE_API URequestObj : public UObject
{
	GENERATED_BODY()
	
	
	
	
	
};
