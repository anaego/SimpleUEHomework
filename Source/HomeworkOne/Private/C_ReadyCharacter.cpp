// Fill out your copyright notice in the Description page of Project Settings.


#include "C_ReadyCharacter.h"
#include "Net/UnrealNetwork.h"

void AC_ReadyCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ThisClass, Health);
}
