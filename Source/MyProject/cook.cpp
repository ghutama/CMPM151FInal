// Fill out your copyright notice in the Description page of Project Settings.


#include "cook.h"

// Sets default values
Acook::Acook()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Acook::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Acook::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void Acook::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

