#include "NoxStateTreeTaskBase.h"

EStateTreeRunStatus FNoxStateTreeTaskBase_ToggleBoolProperty::EnterState(FStateTreeExecutionContext& Context,
	const FStateTreeTransitionResult& Transition) const
{
	FInstanceDataType* InstanceData = Context.GetInstanceDataPtr<FInstanceDataType>(*this);
	check(InstanceData);

	if (bool* BoolValue = InstanceData->BoolPropertyRef.GetMutablePtr<bool>(Context))
	{
		*BoolValue = !(*BoolValue);
	}
	
	return EStateTreeRunStatus::Running;
}
