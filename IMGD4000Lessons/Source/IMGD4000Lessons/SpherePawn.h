// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include <GameFramework/FloatingPawnMovement.h>
#include "SpherePawn.generated.h"

struct FInputActionValue;

UCLASS()
class IMGD4000LESSONS_API ASpherePawn : public APawn
{
	GENERATED_BODY()

public:

	ASpherePawn();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//U prefix denotes a class
	UPROPERTY(EditAnywhere) class UStaticMeshComponent* Mesh;

	void Move(const FInputActionValue& InputActionValue);

protected:

	virtual void BeginPlay() override;
	UFloatingPawnMovement* PawnMovement;

};