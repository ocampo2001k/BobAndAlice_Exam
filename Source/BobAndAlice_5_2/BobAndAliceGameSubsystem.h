#pragma once

#include "CoreMinimal.h"
#include "BobAndAliceGameSubsystem.generated.h"

/**
 *
 */
UCLASS ()
class BOBANDALICE_5_2_API UBobAndAliceGameSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY ()

public:
	// Constructor
	UBobAndAliceGameSubsystem ();

	// Initialize the subsystem
	virtual void Initialize (FSubsystemCollectionBase &Collection) override;

	// Deinitialize the subsystem
	virtual void Deinitialize () override;

	// Function to set the current times
	UFUNCTION (BlueprintCallable)
	void SetCurrentTime (float NewTime);

	// Function to get the current time
	UFUNCTION (BlueprintCallable)
	float GetCurrentTime () const;

private:
	// Variable to store the current time
	UPROPERTY (VisibleAnywhere, BlueprintReadOnly, Category = "Time",
	           meta = (AllowPrivateAccess = "true"))
	float TimeRemaining;
};
