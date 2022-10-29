// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Turret.generated.h"

UCLASS()
class SANGUINESERENADE_API ATurret : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Category = "Components", meta = (AllowPrivateAccess = "true"))
		USceneComponent* Root;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* TurretMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UCapsuleComponent* Capsule;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UArrowComponent* BeamSpawner;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		class UBoxComponent* RangeBox;
	
public:	
	// Sets default values for this actor's properties
	ATurret();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
