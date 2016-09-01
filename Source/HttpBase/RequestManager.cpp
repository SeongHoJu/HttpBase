// Fill out your copyright notice in the Description page of Project Settings.

#include "HttpBase.h"

#include "RequestObj.h"
#include "RequestManager.h"




bool URequestManager::IsValidRequest(URequestObj* RequestObj)
{
	if (RequestObj != nullptr)
	{
		return (RequestMap.Find(RequestObj->RequestName) != nullptr) ? true : false;
	}
	return false;
}