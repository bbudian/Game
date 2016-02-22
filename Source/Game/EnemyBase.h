// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "EnemyBase.generated.h"

UCLASS()
class GAME_API AEnemyBase : public ACharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = Movement)
		float Speed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Movement)
		float DetectionRadius;


	// Sets default values for this character's properties
	AEnemyBase();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	UFUNCTION(BlueprintCallable,Category=Movement)
	virtual void Wander(float DeltaTime);

	
	
};
