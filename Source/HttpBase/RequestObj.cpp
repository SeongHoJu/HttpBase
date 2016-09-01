// Fill out your copyright notice in the Description page of Project Settings.

#include "HttpBase.h"

#include "RequestManager.h"
#include "RequestObj.h"


URequestObj::URequestObj(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

bool URequestObj::InitRequest()
{
	if (RequestOwner && RequestOwner->IsValidRequest(this))
	{
		return true;
	}

	return false;
}

bool URequestObj::SendRequest(const FString& StringKey, const TArray< struct FRequestWord>& RequestWords)
{
	TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
	HttpRequest->OnProcessRequestComplete().BindUObject(this, &URequestObj::RequestReceive);



	return true;
}