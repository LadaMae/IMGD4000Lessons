// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include <GameFramework/FloatingPawnMovement.h>
#include "ProjectileActor.h"
#include "DrawDebugHelpers.h"
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
	UPROPERTY(EditAnywhere)
	float ProjectileSpeed;
	void Fire(const FInputActionValue& InputActionValue);
	void FireLaser(const FInputActionValue& InputActionValue);

	UFUNCTION(BlueprintNativeEvent)
	void HitSomething(class UStaticMeshComponent* m);
	void HitSomething_Implementation(class UStaticMeshComponent* m);

	FCollisionQueryParams cqp;
	FHitResult hr;

protected:

	virtual void BeginPlay() override;
	UFloatingPawnMovement* PawnMovement;
	UPROPERTY(EditAnywhere)
	class UCameraComponent* Camera;

};