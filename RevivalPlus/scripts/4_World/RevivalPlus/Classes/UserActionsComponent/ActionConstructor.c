modded class ActionConstructor
{
	override void RegisterActions(TTypenameArray actions)
	{
		super.RegisterActions(actions);

		actions.Insert(ActionMakeSnowball);
		actions.Insert(ActionVehicleHorn);
	}
};
