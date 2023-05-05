// Fill out your copyright notice in the Description page of Project Settings.


#include "TestObstacle.h"

// Sets default values
ATestObstacle::ATestObstacle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestObstacle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

