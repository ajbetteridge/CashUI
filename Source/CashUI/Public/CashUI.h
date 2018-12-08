// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "ModuleManager.h"

#define Msg(Text) if(GEngine) GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Green, TEXT(Text));

class FCashUI : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};