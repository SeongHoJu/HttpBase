// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Object.h"

#include "RequestObj.h"
#include "RequestManager.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FRequestWord
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RequestTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RequestValue;

	FRequestWord() RequestTitle(TEXT("")), RequestValue(TEXT("")) {}

	void AppendRequest(FString& BaseString)
	{
		if (RequestTitle.Len() > 0)
		{
			FString ReqWords = FString::Printf(TEXT("&%s=%s"), *RequestTitle, *RequestValue);
			BaseString.Append(ReqWords);
		}
	}
};

UCLASS()
class HTTPBASE_API URequestManager : public UObject
{
	GENERATED_BODY()

public:

	UPROPERTY()
	TMultiMap<FName, FRequestWord> RequestMap;

	virtual bool IsValidRequest(URequestObj* RequestObj);

	template<typename RequestType>
	RequestType* CreateRequest()
	{
		RequestType* StaticRequestClass = RequestType::StaticClass();
		if (StaticRequestClass && StaticRequestClass->IsChildOf(URequestObj::StaticClass()))
		{
			URequestObj* HttpRequest = NewObject<RequestType>(this, StaticRequestClass->GetFName());

			return HttpRequest;
		}
		
		return nullptr;
	}
};
