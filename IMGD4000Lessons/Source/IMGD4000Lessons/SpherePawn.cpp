// Fill out your copyright notice in the Description page of Project Settings.

#include "SpherePawn.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "InputActionValue.h"

// Sets default values
ASpherePawn::ASpherePawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>("PawnMovement");
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("SphereMesh");
	Camera = CreateDefaultSubobject<UCameraComponent>("CameraComponent");

	Camera->SetRelativeLocation(FVector(-500.f, 0.f, 0.f));
	Camera->SetupAttachment(Mesh);

	static ConstructorHelpers::FObjectFinder<UStaticMesh>SphereMeshAsset(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
	Mesh->SetStaticMesh(SphereMeshAsset.Object);

	RootComponent = Mesh;
	ProjectileSpeed = 10.f;

}

// Called when the game starts or when spawned
void ASpherePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASpherePawn::Fire(const FInputActionValue& InputActionValue)
{
	FVector loc = GetActorLocation();
	loc.Z += 100.f;
	loc.Y += 50.f;

	AProjectileActor* a = GetWorld()->SpawnActor<AProjectileActor>(loc, GetActorRotation());

	a->Speed = ProjectileSpeed;
}

void ASpherePawn::FireLaser(const FInputActionValue& InputActionValue)
{
	FVector start = GetActorLocation();
	start.Z += 100.f;
	start.Y += 100.f;
	start.X += 150.f;

	float distance = 1000.f;
	FVector fv = GetActorForwardVector();
	FVector end = ((fv * distance) + start);

	DrawDebugLine(GetWorld(), start, end, FColor::Red, false, 2.f, 0, 5.f);

	GetWorld()->LineTraceSingleByChannel(hr, start, end, ECC_Visibility, cqp);

	if (hr.bBlockingHit == true) {
		if (hr.GetActor() != this) {
			UE_LOG(LogTemp, Warning, TEXT("HIT! %s"), *hr.GetActor()->GetName());
			HitSomething(Cast<UStaticMeshComponent>(hr.GetActor()->GetRootComponent()));
		}
	}

	if (hr.bBlockingHit == true) {
		if (hr.GetActor() != this) {
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, FString::Printf(TEXT("HIT! %s"), *hr.GetActor()->GetName()));

			HitSomething(Cast<UStaticMeshComponent>(hr.GetActor()->GetRootComponent()));
		}
	}

	//AProjectileActor* a = GetWorld()->SpawnActor<AProjectileActor>(start, GetActorRotation());

	//a->Speed = ProjectileSpeed;
}

// Called every frame
void ASpherePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASpherePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ASpherePawn::Move(const FInputActionValue& InputActionValue)
{

	const FVector2D InputAxisVector = InputActionValue.Get<FVector2D>();

	//Get control rotation
	const FRotator ControlRotation = GetControlRotation();

	//Isolate the yaw
	const FRotator YawRotation(0, ControlRotation.Yaw, 0);
	//Get forward vector	
	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	//Get right vector
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);



	//Move the character
	if (Mesh)
	{
		AddMovementInput(ForwardDirection, InputAxisVector.Y);
		AddMovementInput(RightDirection, InputAxisVector.X);
	}
}

void ASpherePawn::HitSomething_Implementation(class UStaticMeshComponent* meshThatWasHit) {
	UE_LOG(LogTemp, Warning, TEXT("HIT SOMETHING CALLED"));
}

