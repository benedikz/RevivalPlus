class ActionMakeSnowball : ActionContinuousBase {
  static const ref array < string > surface_types = {
    "cp_dirt",
    "cp_grass"
  };

  void ActionMakeSnowball() {
    m_CallbackClass = ActionDefibrilateSelfCB;
    m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
    m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
    m_FullBody = true;
  }

  override void CreateConditionComponents() {
    m_ConditionItem = new CCINotPresent;
    m_ConditionTarget = new CCTSurface(UAMaxDistances.DEFAULT);
  }

  override string GetText() {
    return "#STR_RPL_MakeSnowball";
  }

  override bool HasTarget() {
    return true;
  }

  override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item) {
    if ((GetGame().IsClient() || !GetGame().IsMultiplayer()) && !player.IsPlacingLocal() && target) {
      int liquid_type;
      string surface_type;
      g_Game.SurfaceUnderObject(player, surface_type, liquid_type);
      return surface_types.Find(surface_type) != -1;
    }

    return true;
  }

  override void OnFinishProgressServer(ActionData action_data) {
    ref array < string > snowball_types = {
      "RPL_Snowball",
      "RPL_SmallSnowball"
    };
    if (action_data.m_Player) {
      action_data.m_Player.GetHumanInventory().CreateInHands(snowball_types.GetRandomElement());
    }
  }
};
