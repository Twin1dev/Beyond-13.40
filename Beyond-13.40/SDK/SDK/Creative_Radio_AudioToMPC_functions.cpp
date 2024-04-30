#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Creative_Radio_AudioToMPC

#include "Basic.hpp"

#include "Creative_Radio_AudioToMPC_classes.hpp"
#include "Creative_Radio_AudioToMPC_parameters.hpp"


namespace SDK
{

// Function Creative_Radio_AudioToMPC.Creative_Radio_AudioToMPC_C.OnGatheredFFTData
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FChannelData>             FFTData                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// float                                   OutAmplitudeAverage                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreative_Radio_AudioToMPC_C::OnGatheredFFTData(TArray<struct FChannelData>& FFTData, float& OutAmplitudeAverage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Creative_Radio_AudioToMPC_C", "OnGatheredFFTData");

	Params::Creative_Radio_AudioToMPC_C_OnGatheredFFTData Parms{};

	Parms.FFTData = std::move(FFTData);
	Parms.OutAmplitudeAverage = OutAmplitudeAverage;

	UObject::ProcessEvent(Func, &Parms);

	FFTData = std::move(Parms.FFTData);
	OutAmplitudeAverage = Parms.OutAmplitudeAverage;
}

}
