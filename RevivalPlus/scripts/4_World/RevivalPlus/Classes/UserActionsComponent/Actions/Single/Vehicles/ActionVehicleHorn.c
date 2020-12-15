class ActionVehicleHorn : ActionInteractBase
{
	void ActionStartEngine()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_TOOTHORN;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
	}

	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNone;
	}

	override string GetText()
	{
		return "#STR_RPL_VehicleHorn_Honk";
	}

	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		HumanCommandVehicle vehCmd = player.GetCommand_Vehicle();
		CarScript car;
		EntityAI battery = null;

		if (vehCmd && vehCmd.GetVehicleSeat() == DayZPlayerConstants.VEHICLESEAT_DRIVER)
		{
			Transport trans = vehCmd.GetTransport();
			if (trans)
			{
				if (Class.CastTo(car, trans))
				{
					if (car.IsVitalCarBattery() || car.IsVitalTruckBattery())
					{
						if (car.IsVitalCarBattery()) battery = EntityAI.Cast(car.FindAttachmentBySlotName("CarBattery"));
						if (car.IsVitalTruckBattery()) battery = EntityAI.Cast(car.FindAttachmentBySlotName("TruckBattery"));
						if (battery && !battery.IsRuined()) return true;
					}
				}
			}
		}
		return false;
	}

	override void OnExecuteServer(ActionData action_data)
	{
		HumanCommandVehicle vehCmd = action_data.m_Player.GetCommand_Vehicle();
		CarScript car;

		if (vehCmd)
		{
			Transport trans = vehCmd.GetTransport();
			if (trans)
			{
				if (Class.CastTo(car, trans))
				{
					car.Horn();
				}
			}
		}
	}

	override void OnEndServer(ActionData action_data)
	{
		HumanCommandVehicle vehCmd = action_data.m_Player.GetCommand_Vehicle();
		CarScript car;

		if (vehCmd)
		{
			Transport trans = vehCmd.GetTransport();
			if (trans)
			{
				if (Class.CastTo(car, trans))
				{
					car.SoundSynchRemoteReset();
				}
			}
		}
	}

	override bool CanBeUsedInVehicle() {return true;}
};
