
  /*
   *    Addon: Revival Plus
   *    Script: RPL_CassettePlayer.c
   *    Author: Tomáš "benedi.kz" Benedikt
   *
   *    © 2020 Tomáš "benedi.kz" Benedikt
   *
   *    This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
   *    To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
   *
   *    <summary>Adds RPL_CassettePlayer item functionality into the game</summary>
   *
   */

modded class PlayerBase
{
    override void Init()
    {
        if ( !GetGame().IsServer() || !GetGame().IsMultiplayer() )
        {
        //DayzPlayerItemBehaviorCfg     twoHanded = new DayzPlayerItemBehaviorCfg;
        //twoHanded.SetTwoHanded();

        DayzPlayerItemBehaviorCfg     toolsOneHanded = new DayzPlayerItemBehaviorCfg;
        toolsOneHanded.SetToolsOneHanded();

            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_CassettePlayer_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/first_aid_kit.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_CassetteCase_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/first_aid_kit.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_Cassette_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/zucchini_seeds_pack.anm");

        }
        super.Init();
    }
}

class RPL_CassettePlayer extends ItemBase
{
    // Sound Effects
    const string SOUND_TURN_ON = "RPL_SoundSet_TurnOn";
  	//const string SOUND_TURN_OFF = "RPL_SoundSet_TurnOff";
    // Musical Tracks (Fair Use)
    const string TRACK_ATRAKSION = "RPL_SoundSet_Atraksion";
    const string TRACK_BIRCHES = "RPL_SoundSet_Birches";
    const string TRACK_BREPETRUNKO = "RPL_SoundSet_BrePetrunko";
    const string TRACK_CANTHELPFALLINGINLOVE = "RPL_SoundSet_CantHelpFallingInLove";
    const string TRACK_DAVIDAGOLIAS = "RPL_SoundSet_DavidAGolias";
    const string TRACK_DEADCITIESMARCH = "RPL_SoundSet_DeadCitiesMarch";
    const string TRACK_GRUPPAKROVI = "RPL_SoundSet_GruppaKrovi";
    const string TRACK_JAILHOUSEROCK = "RPL_SoundSet_JailhouseRock";
    const string TRACK_JOZINZBAZIN = "RPL_SoundSet_JozinZBazin";
    const string TRACK_KALINKA = "RPL_SoundSet_Kalinka";
    const string TRACK_KATYUSHA	= "RPL_SoundSet_Katyusha";
    const string TRACK_NASNEDOGONIAT = "RPL_SoundSet_NasNeDogoniat";
    const string TRACK_NAZARE	= "RPL_SoundSet_NaZare";
    const string TRACK_SOVIETANTHEM	= "RPL_SoundSet_SovietAnthem";
    const string TRACK_STUK	= "RPL_SoundSet_Stuk";
    const string TRACK_THREELITTLEBIRDS	= "RPL_SoundSet_ThreeLittleBirds";
    const string TRACK_ZAKROIZAMNOIDVERI = "RPL_SoundSet_ZakroiZaMnoiDveri";
    const string TRACK_ZIVOTJEJENNAHODA = "RPL_SoundSet_ZivotJeJenNahoda";

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
      SetSynchDirty();
  	}

  	override void OnSwitchOff()
  	{
  		super.OnSwitchOff();
      Stop_Cassette();
      //TurnOff_Sound();
      GetCompEM().SwitchOff();
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
            case "RPL_Cassette_Atraksion":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_ATRAKSION' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_ATRAKSION, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_Birches":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_BIRCHES' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_BIRCHES, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_BrePetrunko":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_BREPETRUNKO' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_BREPETRUNKO, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_CantHelpFallingInLove":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_CANTHELPFALLINGINLOVE' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_CANTHELPFALLINGINLOVE, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_DavidAGolias":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_DAVIDAGOLIAS' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_DAVIDAGOLIAS, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_DeadCitiesMarch":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_DEADCITIESMARCH' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_DEADCITIESMARCH, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_GruppaKrovi":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_GRUPPAKROVI' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_GRUPPAKROVI, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_JailhouseRock":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_JAILHOUSEROCK' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_JAILHOUSEROCK, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_JozinZBazin":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_JOZINZBAZIN' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_JOZINZBAZIN, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_Kalinka":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_KALINKA' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_KALINKA, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_Katyusha":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_KATYUSHA' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_KATYUSHA, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_NasNeDogoniat":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_NASNEDOGONIAT' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_NASNEDOGONIAT, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_NaZare":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_NAZARE' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_NAZARE, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_SovietAnthem":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_SOVIETANTHEM' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_SOVIETANTHEM, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_Stuk":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_STUK' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_STUK, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_ThreeLittleBirds":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_THREELITTLEBIRDS' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_THREELITTLEBIRDS, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_ZakroiZaMnoiDveri":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_ZAKROIZAMNOIDVERI' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_ZAKROIZAMNOIDVERI, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_ZivotJeJenNahoda":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_ZIVOTJEJENNAHODA' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_ZIVOTJEJENNAHODA, 0.5, 0.6);
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

    /*
    protected void TurnOff_Sound()
    {
      PlaySoundSet(RPLA_SoundTurnOff, SOUND_TURN_OFF, 0.0, 0.0);
    }
    */

}
