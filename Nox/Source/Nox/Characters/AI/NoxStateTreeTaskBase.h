#pragma once
#include "coreminimal.h"
#include "StateTreeTaskBase.h"
#include "StateTreePropertyRef.h"
#include "NoxStateTreeTaskBase.generated.h"

USTRUCT()
struct NOX_API FNoxStateTreeTaskBase_ToggleBoolProperty_InstanceData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "", meta = (RefType = "Bool"))
	FStateTreePropertyRef BoolPropertyRef;
};

USTRUCT(meta = (DisplayName = "Toggle Bool"))
struct NOX_API FNoxStateTreeTaskBase_ToggleBoolProperty : public FStateTreeTaskCommonBase
{
	GENERATED_BODY()

	using FInstanceDataType = FNoxStateTreeTaskBase_ToggleBoolProperty_InstanceData;
	virtual const UStruct* GetInstanceDataType() const override { return FInstanceDataType::StaticStruct(); }

	virtual EStateTreeRunStatus EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition) const override;
};

