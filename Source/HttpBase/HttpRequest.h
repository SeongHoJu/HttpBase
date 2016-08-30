// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "HttpRequest.generated.h"

UCLASS()
class HTTPBASE_API AHttpRequest : public AActor
{
	GENERATED_BODY()
	
public:	
	AHttpRequest(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditAnywhere)
	FString DefaultUrl;

	UPROPERTY(EditAnywhere)
	FString RequestName;

	TSharedPtr<FJsonObject> JsonResponse;

	/*
	UFUNCTION(BlueprintCallable, Category = "Request")
	void RequestCall(const FString& MainString, const FString& Parameters, EVerb Verb);
	void RequestReceive(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bSuccessful);

	virtual void OnReceive(TSharedPtr<FJsonObject> ResponseObj);
	*/
};
