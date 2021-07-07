// extends ManBase
modded class PlayerBase
{
    static bool ZAddedCustomIK;

    override void Init()
    {
        if ( !ZAddedCustomIK ) {
            DayzPlayerItemBehaviorCfg toolsOneHanded = new DayzPlayerItemBehaviorCfg;
            toolsOneHanded.SetToolsOneHanded();

            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_BaseballCap2_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/BandanaFH_ground.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_SodaCanUsed_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/soda_can.anm");

            // AlcoholBottles
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_Vodka_Novigradskaya", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/disinfectant_alcohol.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_Zelena_Soborovska", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/disinfectant_alcohol.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_EmptyBottleAlcohol", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/disinfectant_alcohol.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_ImprovisedBottleAlcohol", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/disinfectant_alcohol.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_ImprovisedAlcohol_Spirit", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/disinfectant_alcohol.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_ImprovisedAlcohol_Vodka", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/disinfectant_alcohol.anm");

            // Snowballs
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_Snowball", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/stone.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_SmallSnowball", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/orange.anm");

            // Documents
            //GetDayZPlayerType().AddItemInHandsProfileIK("RPL_SmallDocument_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/Seeds_Tomato.anm");

            // Books / Notebooks
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_Skillbook_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/book.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_Notebook_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/book.anm");

            // ItemStacks
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_AppleStack", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/apple.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_PearStack", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/pear.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_ZucchiniStack", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/zucchini_fresh.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_TomatoStack", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/tomato_fresh.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_PotatoStack", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/potato_fresh.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_PepperStack", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/pepper_green_fresh.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_MeatStack", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/meat_steak.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_MushroomStack", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/agaricus_mushroom.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_HumanMeatStack", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/human_meat.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_LardStack", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/lard.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_SardineStack", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/sardines_live.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_CarpFilletStack", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/carp_fillet_raw.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_PumpkinStack", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/pumpkin_sliced.anm");
            GetDayZPlayerType().AddItemInHandsProfileIK("RPL_PlumStack", "dz/anims/workspaces/player/player_main/player_main_1h.asi", toolsOneHanded, "dz/anims/anm/player/ik/gear/plum.anm");

            ZAddedCustomIK = true;
        }
        super.Init();
    }

    override void SetActions()
    {
      super.SetActions();
      AddAction(ActionVehicleHorn);
    }
};
