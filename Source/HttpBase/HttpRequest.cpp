// Fill out your copyright notice in the Description page of Project Settings.

#include "HttpBase.h"
#include "HttpRequest.h"


AHttpRequest::AHttpRequest(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
}

/*
void AHttpRequest::RequestCall(const FString& MainString, const FString& Parameters, EVerb Verb)
{
	TSharedRef<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
	Request->OnProcessRequestComplete().BindUObject(this, &AHttpRequest::RequestReceive);

	// URL
	Request->SetURL(MainString + TEXT("?") + Parameters);

	// Verb
	static const FString VerbStrings[static_cast<uint8>(EVerb::EVerbMax)] = { TEXT("GET"), TEXT("PUT"), TEXT("POST") };
	FString VerbString = VerbStrings[static_cast<uint8>(Verb)];
	Request->SetVerb(VerbString);

	// Send!
	Request->ProcessRequest();
}

void AHttpRequest::RequestReceive(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bSuccessful)
{
	if (bSuccessful)
	{
		TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());
		if (FJsonSerializer::Deserialize(Reader, JsonResponse))
		{
			OnReceive(JsonResponse);
		}
	}
}

void AHttpRequest::OnReceive(TSharedPtr<FJsonObject> ResponseObj)
{
	
}

*/