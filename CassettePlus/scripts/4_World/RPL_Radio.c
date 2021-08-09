
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
        //DayzPlayerItemBehaviorCfg     twoHanded = new DayzPlayerItemBehaviorCfg;
        //twoHanded.SetTwoHanded();

        DayzPlayerItemBehaviorCfg     toolsOneHanded = new DayzPlayerItemBehaviorCfg;
        toolsOneHanded.SetToolsOneHanded();

            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_Radio_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/first_aid_kit.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_CassetteCase_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/first_aid_kit.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_Cassette_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/zucchini_seeds_pack.anm");

        }
        super.Init();
    }
}

class RPL_Radio extends ItemBase
{
    // Sound Effects
    const string SOUND_TURN_ON = "RPL_SoundSet_TurnOn";
  	//const string SOUND_TURN_OFF = "RPL_SoundSet_TurnOff";
    // Musical Tracks (Fair Use)
    const string TRACK_AYYAYYAY = "RPL_SoundSet_AyYayYay";
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
    const string TRACK_MARCHEFUNEBRE = "RPL_SoundSet_MarcheFunebre";
    const string TRACK_NASNEDOGONIAT = "RPL_SoundSet_NasNeDogoniat";
    const string TRACK_NAZARE	= "RPL_SoundSet_NaZare";
    const string TRACK_SOVIETANTHEM	= "RPL_SoundSet_SovietAnthem";
    const string TRACK_STUK	= "RPL_SoundSet_Stuk";
    const string TRACK_THREELITTLEBIRDS	= "RPL_SoundSet_ThreeLittleBirds";
    const string TRACK_ZAKROIZAMNOIDVERI = "RPL_SoundSet_ZakroiZaMnoiDveri";
    const string TRACK_ZIVOTJEJENNAHODA = "RPL_SoundSet_ZivotJeJenNahoda";
    // 07.10.2020
    const string TRACK_99LUFTBALLONS = "RPL_SoundSet_99Luftballons";
    const string TRACK_BOHEMIANLIKEYOU = "RPL_SoundSet_BohemianLikeYou";
    const string TRACK_CRIMSONANDCLOVER = "RPL_SoundSet_CrimsonAndClover";
    const string TRACK_DADDYCOOL = "RPL_SoundSet_DaddyCool";
    const string TRACK_CHASETHEDEVIL = "RPL_SoundSet_ChaseTheDevil";
    const string TRACK_JOTRESNEZRALY = "RPL_SoundSet_JoTresneZraly";
    const string TRACK_KARAVAN = "RPL_SoundSet_Karavan";
    const string TRACK_NIKOGONEZHALKO = "RPL_SoundSet_NikogoNeZhalko";
    const string TRACK_NONJENEREGRETTERIEN = "RPL_SoundSet_NonJeNeRegretteRien";
    const string TRACK_NOWOMANNOCRY = "RPL_SoundSet_NoWomanNoCry";
    const string TRACK_POVOROT = "RPL_SoundSet_Povorot";
    const string TRACK_RUBY = "RPL_SoundSet_Ruby";
    const string TRACK_THEPASSENGER = "RPL_SoundSet_ThePassenger";
    const string TRACK_VENUS = "RPL_SoundSet_Venus";
    const string TRACK_LETO = "RPL_SoundSet_Leto";
    const string TRACK_KUKUSHKA = "RPL_SoundSet_Kukushka";
    const string TRACK_BELLACIAO = "RPL_SoundSet_BellaCiao";
    const string TRACK_BLUECHRISTMAS = "RPL_SoundSet_BlueChristmas";
    const string TRACK_KOROBELNIKI = "RPL_SoundSet_Korobelniki";
    const string TRACK_MOSTWONDERFULTIMEOFTHEYEAR = "RPL_SoundSet_MostWonderfulTimeOfTheYear";
    const string TRACK_PHANTOMLORD = "RPL_SoundSet_PhantomLord";
    const string TRACK_PUJDEMSPOLUDOBETLEMA = "RPL_SoundSet_PujdemSpoluDoBetlema";
    const string TRACK_SMELLSLIKETEENSPIRIT = "RPL_SoundSet_SmellsLikeTeenSpirit";
    const string TRACK_STEDREJVECERNASTAL = "RPL_SoundSet_StedrejVecerNastal";
    const string TRACK_TCHAIKOVSKY_MARCH = "RPL_SoundSet_Tchaikovsky_March";
    const string TRACK_TCHAIKOVSKY_OVERTURE = "RPL_SoundSet_Tchaikovsky_Overture";
    const string TRACK_TCHAIKOVSKY_THECHRISTMASTREE = "RPL_SoundSet_Tchaikovsky_TheChristmasTree";
    const string TRACK_TCHAIKOVSKY_WESINGTODAY = "RPL_SoundSet_Tchaikovsky_WeSingToday";
    const string TRACK_UTRO = "RPL_SoundSet_Utro";
    const string TRACK_VPUTI = "RPL_SoundSet_VPuti";
    const string TRACK_VANILLYCAR = "RPL_SoundSet_VanillyCar";
    const string TRACK_WHEREISMYMIND = "RPL_SoundSet_WhereIsMyMind";
    const string TRACK_GOGOYELLOW = "RPL_SoundSet_GoGoYellow";
    const string TRACK_VIZISI = "RPL_SoundSet_Vizisi";
    const string TRACK_DEVUSHKAMECHTY = "RPL_SoundSet_DevushkaMechty";

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
      //SetSynchDirty();
  	}

  	override void OnSwitchOff()
  	{
  		super.OnSwitchOff();
      Stop_Cassette();
      //TurnOff_Sound();
      //GetCompEM().SwitchOff();
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
            case "RPL_Cassette_AyYayYay":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_AYYAYYAY' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_AYYAYYAY, 0.5, 0.6);
  					}
  					break;
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
            case "RPL_Cassette_Leto":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_LETO' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_LETO, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_MarcheFunebre":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_MARCHEFUNEBRE' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_MARCHEFUNEBRE, 0.5, 0.6);
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
            // 07.10.2020
            case "RPL_Cassette_99Luftballons":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_99LUFTBALLONS' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_99LUFTBALLONS, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_BohemianLikeYou":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_BOHEMIANLIKEYOU' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_BOHEMIANLIKEYOU, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_CrimsonAndClover":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_CRIMSONANDCLOVER' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_CRIMSONANDCLOVER, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_DaddyCool":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_DADDYCOOL' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_DADDYCOOL, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_ChaseTheDevil":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_CHASETHEDEVIL' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_CHASETHEDEVIL, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_JoTresneZraly":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_JOTRESNEZRALY' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_JOTRESNEZRALY, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_Karavan":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_KARAVAN' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_KARAVAN, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_Kukushka":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_KUKUSHKA' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_KUKUSHKA, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_NikogoNeZhalko":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_NIKOGONEZHALKO' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_NIKOGONEZHALKO, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_NonJeNeRegretteRien":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_NONJENEREGRETTERIEN' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_NONJENEREGRETTERIEN, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_NoWomanNoCry":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_NOWOMANNOCRY' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_NOWOMANNOCRY, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_Povorot":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_POVOROT' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_POVOROT, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_Ruby":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_RUBY' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_RUBY, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_ThePassenger":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_THEPASSENGER' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_THEPASSENGER, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_Venus":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_VENUS' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_VENUS, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_BellaCiao":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_BELLACIAO' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_BELLACIAO, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_BlueChristmas":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_BLUECHRISTMAS' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_BLUECHRISTMAS, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_Korobelniki":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_KOROBELNIKI' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_KOROBELNIKI, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_MostWonderfulTimeOfTheYear":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_MOSTWONDERFULTIMEOFTHEYEAR' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_MOSTWONDERFULTIMEOFTHEYEAR, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_PhantomLord":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_PHANTOMLORD' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_PHANTOMLORD, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_PujdemSpoluDoBetlema":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_PUJDEMSPOLUDOBETLEMA' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_PUJDEMSPOLUDOBETLEMA, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_SmellsLikeTeenSpirit":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_SMELLSLIKETEENSPIRIT' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_SMELLSLIKETEENSPIRIT, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_StedrejVecerNastal":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_STEDREJVECERNASTAL' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_STEDREJVECERNASTAL, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_Tchaikovsky_March":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_TCHAIKOVSKY_MARCH' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_TCHAIKOVSKY_MARCH, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_Tchaikovsky_Overture":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_OVERTURE' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_TCHAIKOVSKY_OVERTURE, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_Tchaikovsky_TheChristmasTree":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_TCHAIKOVSKY_THECHRISTMASTREE' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_TCHAIKOVSKY_THECHRISTMASTREE, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_Tchaikovsky_WeSingToday":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_TCHAIKOVSKY_WESINGTODAY' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_TCHAIKOVSKY_WESINGTODAY, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_Utro":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_UTRO' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_UTRO, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_VanillyCar":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_VANILLYCAR' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_VANILLYCAR, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_VPuti":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_VPUTI' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_VPUTI, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_WhereIsMyMind":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_WHEREISMYMIND' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_WHEREISMYMIND, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_GoGoYellow":
            {
              Print("[DEBUG] ::: Playing 'TRACK_GOGOYELLOW' (1)");
              PlaySoundSet(RPLA_Track, TRACK_GOGOYELLOW, 0.5, 0.6);
            }
            break;
            case "RPL_Cassette_Vizisi":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_VIZISI' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_VIZISI, 0.5, 0.6);
  					}
  					break;
            case "RPL_Cassette_DevushkaMechty":
  					{
              Print("[DEBUG] ::: Playing 'TRACK_DEVUSHKAMECHTY' (1)");
  						PlaySoundSet(RPLA_Track, TRACK_DEVUSHKAMECHTY, 0.5, 0.6);
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
