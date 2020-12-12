class RPL_Snowball_Base : ItemBase
{
	override private void EOnContact(IEntity other, Contact extra)
	{
		if (GetGame().IsServer())
			Delete();
		if (GetGame().IsClient())
			DeleteOnClient();
	}

	override void EEDelete(EntityAI parent)
	{
		if (GetGame() && GetGame().IsClient())
			Particle.PlayInWorld(ParticleList.SNOWBALL_IMPACT, GetPosition());
		super.EEDelete(parent);
	}

	float GetShockValue()
	{
		return 0.0;
	}

	string GetAmmoType()
	{
		return "RPL_MeleeSnowball";
	}
};

class RPL_Snowball : RPL_Snowball_Base
{
	override float GetShockValue() {return 70.0;}
	override string GetAmmoType() {return "RPL_MeleeSnowball";}
};

class RPL_SmallSnowball : RPL_Snowball_Base
{
	override float GetShockValue() {return 30.0;}
	override string GetAmmoType() {return "RPL_MeleeSmallSnowball";}
  override int GetViewIndex()
  {
    if (MemoryPointExists("invView2"))
    {
			return 1;
    }
    return 0;
  }
};
