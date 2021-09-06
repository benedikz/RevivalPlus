
  /*
   *    Addon: RevivalPlus
   *    Script: RPL_Radio.c
   *    Author: Tomáš "benedi.kz" Benedikt
   *
   *    © 2020 Tomáš "benedi.kz" Benedikt
   *
   *    This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
   *    To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
   *
   *    <summary>Adds RPL_Radio item functionality into the game</summary>
   *
   */

modded class PlayerBase
{
    override void Init()
    {
        if ( !GetGame().IsServer() || !GetGame().IsMultiplayer() )
        {
        DayzPlayerItemBehaviorCfg     toolsOneHanded = new DayzPlayerItemBehaviorCfg;
        toolsOneHanded.SetToolsOneHanded();

            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_PersonalRadio", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/walkie_talkie.anm");

        }
        super.Init();
    }
}

class RPL_PersonalRadio extends ItemBase
{
    // Sound Effects
    const string SOUND_TURN_ON = "RPL_SoundSet_WalkieTalkieOn";
  	const string SOUND_TURN_OFF = "RPL_SoundSet_WalkieTalkieOff";
    // Musical Tracks (Fair Use)
    const string CHATTER_RU = "RPL_SoundSet_RussianChatter";

    ref protected EffectSound RPLA_Track;
    ref protected EffectSound RPLA_TrackLoop;
    protected EffectSound RPLA_SoundTurnOn;
  	protected EffectSound RPLA_SoundTurnOff;

    override void SetActions()
    {
        super.SetActions();

        AddAction(ActionTurnOnWhileInHands);
    		AddAction(ActionTurnOffWhileInHands);
    }

    void OnSwitchOn()
  	{
      super.OnSwitchOn();
      TurnOn_Sound();
      Play_Cassette();
  	}

  	override void OnSwitchOff()
  	{
  		super.OnSwitchOff();
      Stop_Cassette();
      TurnOff_Sound();
  	}

    // Restricts attaching attachments if ruined.
    override bool CanReceiveAttachment(EntityAI attachment, int slotId)
    {
      ItemBase item = ItemBase.Cast(attachment);

      if (!item.IsRuined() && !this.GetCompEM().IsWorking())
      {
        return true;
      }

      return false;
    }

    // Locks the Attachment inside, when running.
    override bool CanReleaseAttachment(EntityAI attachment)
    {
      if (this.GetCompEM().IsWorking())
      {
        return false;
      }
      return true;
    }

    void Play_Cassette()
    {
        Entity Attached_Cassette = EntityAI.Cast(this.FindAttachmentBySlotName("Cassette"));
        if (Attached_Cassette == NULL)
  			{
  				Print("[DEBUG] ::: No Cassettes Attached (0)");
  			} else {
          string CassetteType = Attached_Cassette.GetType();

          switch (CassetteType)
					{
            case "RPL_Cassette_RussianChatter":
  					{
              Print("[DEBUG] ::: Playing 'CHATTER_RU' (1)");
  						PlaySoundSet(RPLA_Track, CHATTER_RU, 0.5, 0.6);
  					}
  					break;

            default:
            {
              Print("[DEBUG] ::: Unknown Error whilst playing Cassette (-1)");
            }
            break;
          }
        }
    }

    void Stop_Cassette()
    {
      if (GetGame().IsMultiplayer() && GetGame().IsServer())
      {
        Print("[DEBUG] ::: Transmission Device Turned Off (0)");
        StopSoundSet(RPLA_Track);
      }
      else if (GetGame().IsMultiplayer() && GetGame().IsClient())
      {
        Print("[DEBUG] ::: Transmission Device Turned Off (0)");
        StopSoundSet(RPLA_Track);
      }
    }

    protected void TurnOn_Sound()
    {
      PlaySoundSet(RPLA_SoundTurnOn, SOUND_TURN_ON, 0.0, 0.0);
    }


    protected void TurnOff_Sound()
    {
      PlaySoundSet(RPLA_SoundTurnOff, SOUND_TURN_OFF, 0.0, 0.0);
    }


}
