// Fill out your copyright notice in the Description page of Project Settings.

#include "Game.h"
#include "EnemyBase.h"


// Sets default values
AEnemyBase::AEnemyBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemyBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemyBase::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

	Wander(DeltaTime);
	FVector direction;
	float length;
	GetMovementComponent()->Velocity.ToDirectionAndLength(direction, length);
	//UE_LOG(LogTemp, Log, TEXT("Velocity: (%f,%f,%f) : %f"),direction.X,direction.Y,direction.Z,length);
}

// Called to bind functionality to input
void AEnemyBase::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

void AEnemyBase::Wander(float DeltaTime)
{
	//AddMovementInput(GetActorForwardVector(), speed*DeltaTime);
}
