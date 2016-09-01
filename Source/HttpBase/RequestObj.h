// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Object.h"

#include "Runtime/Online/HTTP/Public/Http.h"

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

	URequestObj(const FObjectInitializer& ObjectInitializer);

	UPROPERTY()
	class URequestManager* RequestOwner;

	UPROPERTY()
	FName RequestName;

	virtual bool InitRequest();

	virtual bool SendRequest(const FString& StringKey, const TArray< struct FRequestWord>& RequestWords);
	void RequestReceive(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bSuccessful) {}
	
};
