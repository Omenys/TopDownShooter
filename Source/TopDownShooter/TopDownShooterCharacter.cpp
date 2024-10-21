// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownShooterCharacter.h"

// Sets default values
ATopDownShooterCharacter::ATopDownShooterCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATopDownShooterCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATopDownShooterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATopDownShooterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

// Implement Calculate Health
void ATopDownShooterCharacter::CalculateHealth(float Delta) {
	health += Delta;
	CalculateDead();
}

// Implement Calculate Dead
void ATopDownShooterCharacter::CalculateDead() {
	if (health <= 0) {
		isDead = true;
	}
	else {
		isDead = false;
	}
}

// Implement PostEditChangeProperty
#if WITH_EDITOR
void ATopDownShooterCharacter::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangeEvent) {
	isDead = false;
	health = 100;

	Super::PostEditChangeProperty(PropertyChangeEvent);

	CalculateDead();
}
#endif

