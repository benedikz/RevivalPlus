modded class CarScript
{
  protected EffectSound m_HornEffectSound;
  protected string m_HornExterior_Sound;
  protected string m_HornInterior_Sound;
  protected bool m_RemoteSoundSynch;

  void CarScript()
  {
    OnInit();
  }

  void OnInit()
  {
    string exteriorHornVal = ConfigGetString("exteriorHorn");
    if (exteriorHornVal != "")
      m_HornExterior_Sound = exteriorHornVal;
    else
      m_HornExterior_Sound = "RPL_VehicleHorn_Exterior_SoundSet";

    string interiorHornVal = ConfigGetString("interiorHorn");
    if (interiorHornVal != "")
      m_HornInterior_Sound = interiorHornVal;
    else
      m_HornInterior_Sound = "RPL_VehicleHorn_Interior_SoundSet";

    RegisterNetSyncVariableBool("m_RemoteSoundSynch");
  }

  void Horn()
  {
    SoundSynchRemote();
    if (GetGame().IsServer())
    {
      ref NoiseParams noiseParams = new NoiseParams();
      vector noisePosition = this.GetPosition();
      noiseParams.LoadFromPath("CfgVehicles CarScript NoiseCarHorn");
      GetGame().GetNoiseSystem().AddNoisePos(EntityAI.Cast(this), noisePosition, noiseParams);
    }
  }

  override void OnVariablesSynchronized()
	{
    super.OnVariablesSynchronized();
    if (IsSoundSynchRemote())
      PlayHornEffect();
  }

  void PlayHornEffect()
	{
    Object battery;
    EffectSound sound;
    if (IsVitalCarBattery()) battery = Object.Cast(this.FindAttachmentBySlotName("CarBattery"));
		if (IsVitalTruckBattery()) battery = Object.Cast(this.FindAttachmentBySlotName("TruckBattery"));

		if (battery)
		{
			if (GetGame().GetPlayer().IsCameraInsideVehicle())
				sound =	SEffectManager.PlaySoundOnObject(m_HornInterior_Sound, battery);
			else
				sound =	SEffectManager.PlaySoundOnObject(m_HornExterior_Sound, battery);
		}

		if (sound)
			sound.SetSoundAutodestroy(true);
  }

  void SoundSynchRemoteReset()
  {
    m_RemoteSoundSynch = false;
    SetSynchDirty();
  }

  void SoundSynchRemote()
  {
    m_RemoteSoundSynch = true;
    SetSynchDirty();
  }

  bool IsSoundSynchRemote()
  {
    return m_RemoteSoundSynch;
  }
};
