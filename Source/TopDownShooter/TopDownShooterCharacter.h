// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TopDownShooterCharacter.generated.h"

UCLASS(Blueprintable)
class TOPDOWNSHOOTER_API ATopDownShooterCharacter : public ACharacter
{
	GENERATED_BODY()

public:

// make a health property
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Top Down Shooter")
	float health = 100;

// make an isDead property
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Top Down Shooter")
	bool isDead = false;

// calculate death function
	virtual void CalculateDead();

// calculate health function
	UFUNCTION(BlueprintCallable, Category = "Top Down Shooter")
	virtual void CalculateHealth(float Delta);

#if WITH_EDITOR
// Editor based code for changing property
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangeEvent)
		override;
#endif

public:
	// Sets default values for this character's properties
	ATopDownShooterCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
