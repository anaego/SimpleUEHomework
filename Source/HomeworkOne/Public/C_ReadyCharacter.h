// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HomeworkOneCharacter.h"
#include "C_ReadyCharacter.generated.h"

/**
 * 
 */
UCLASS()
class HOMEWORKONE_API AC_ReadyCharacter : public AHomeworkOneCharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = UpdateHealthView)
	int Health = 100;

	UFUNCTION(BlueprintImplementableEvent) 
	void UpdateHealthView(int H);

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
