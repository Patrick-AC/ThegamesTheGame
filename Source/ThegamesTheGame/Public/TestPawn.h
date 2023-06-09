// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TestPawn.generated.h"

UCLASS()
class THEGAMESTHEGAME_API ATestPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATestPawn();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly, Category = "Setup")
	UStaticMeshComponent* Cube;

};
