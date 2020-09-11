
  /*
   *    Addon: RevivalPlus
   *    Script: RPL_Whistle.c
   *    Author: Tomáš "benedi.kz" Benedikt
   *
   *    © 2020 Tomáš "benedi.kz" Benedikt
   *
   *    This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
   *    To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
   *
   *    <summary>Adds RPL_Whistle item functionality into the game</summary>
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

               GetDayZPlayerType().AddItemInHandsProfileIK("RPL_Whistle_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/thermometer.anm");

           }
           super.Init();
       }
   }

   /*
   modded class ActionConstructor
   {
      override void RegisterActions(TTypenameArray actions)
      {
          super.RegisterActions(actions);
          actions.Insert(RPL_ActionWhistle);
      }
   }


   class RPL_Whistle_Base extends ItemBase
   {

     const string SOUND_WHISTLE = "RPL_SoundSet_Whistle";

     ref protected EffectSound RPLA_Whistle;

     override void SetActions()
     {
         super.SetActions();
         AddAction(RPL_ActionWhistle);
     }

     void onWhistle()
     {
        super.RPL_ActionWhistle();
        Action_Whistle();
     }

     protected void Action_Whistle()
     {
       PlaySoundSet(RPLA_Whistle, SOUND_WHISTLE, 0.0, 0.0);
     }

   }
   */
