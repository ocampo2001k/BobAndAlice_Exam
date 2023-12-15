#include "BobAndAliceGameSubsystem.h"

// Constructor
UBobAndAliceGameSubsystem::UBobAndAliceGameSubsystem ()
{
	// Set default values for the current time
	TimeRemaining = 45;
}

// Initialize the subsystem
void
UBobAndAliceGameSubsystem::Initialize (FSubsystemCollectionBase &Collection)
{
	Super::Initialize (Collection);
}

// Deinitialize the subsystem
void
UBobAndAliceGameSubsystem::Deinitialize ()
{
	Super::Deinitialize ();
}

// Function to set the current time
void
UBobAndAliceGameSubsystem::SetCurrentTime (float NewTime)
{
	TimeRemaining = NewTime;
}

// Function to get the current time
float
UBobAndAliceGameSubsystem::GetCurrentTime () const
{
	return TimeRemaining;
}
