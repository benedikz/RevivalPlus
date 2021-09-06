
  /*
   *    Addon: RevivalPlus
   *    Script: RPL_CassetteCase.c
   *    Author: Tomáš "benedi.kz" Benedikt
   *
   *    © 2020 Tomáš "benedi.kz" Benedikt
   *
   *    This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
   *    To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
   *
   *    <summary>Provides functionality for the RPL_CassetteCase item.</summary>
   *
   */

class RPL_CassetteCase : Inventory_Base {

    ref array<string> m_AllowedCargo = {
			"RPL_Cassette_Untitled",
			"RPL_Cassette_Atraksion",
			"RPL_Cassette_AyYayYay",
			"RPL_Cassette_BrePetrunko",
			"RPL_Cassette_Birches",
			"RPL_Cassette_CantHelpFallingInLove",
			"RPL_Cassette_DavidAGolias",
			"RPL_Cassette_DeadCitiesMarch",
			"RPL_Cassette_GruppaKrovi",
			"RPL_Cassette_JailhouseRock",
			"RPL_Cassette_JozinZBazin",
			"RPL_Cassette_Kalinka",
			"RPL_Cassette_Katyusha",
			"RPL_Cassette_NasNeDogoniat",
			"RPL_Cassette_NaZare",
			"RPL_Cassette_SovietAnthem",
			"RPL_Cassette_Stuk",
			"RPL_Cassette_ThreeLittleBirds",
			"RPL_Cassette_ZakroiZaMnoiDveri",
			"RPL_Cassette_ZivotJeJenNahoda",
			"RPL_Cassette_99Luftballons",
			"RPL_Cassette_BohemianLikeYou",
			"RPL_Cassette_CrimsonAndClover",
			"RPL_Cassette_DaddyCool",
			"RPL_Cassette_ChaseTheDevil",
			"RPL_Cassette_Karavan",
			"RPL_Cassette_NikogoNeZhalko",
			"RPL_Cassette_NonJeNeRegretteRien",
			"RPL_Cassette_NoWomanNoCry",
			"RPL_Cassette_Povorot",
			"RPL_Cassette_Ruby",
			"RPL_Cassette_ThePassenger",
			"RPL_Cassette_Venus",
			"RPL_Cassette_MarcheFunebre",
			"RPL_Cassette_JoTresneZraly",
			"RPL_Cassette_Leto",
			"RPL_Cassette_Kukushka",
			"RPL_Cassette_BellaCiao",
			"RPL_Cassette_BlueChristmas",
			"RPL_Cassette_Korobelniki",
			"RPL_Cassette_MostWonderfulTimeOfTheYear",
			"RPL_Cassette_PhantomLord",
			"RPL_Cassette_PujdemSpoluDoBetlema",
			"RPL_Cassette_SmellsLikeTeenSpirit",
			"RPL_Cassette_StedrejVecerNastal",
			"RPL_Cassette_Tchaikovsky_March",
			"RPL_Cassette_Tchaikovsky_Overture",
			"RPL_Cassette_Tchaikovsky_TheChristmasTree",
			"RPL_Cassette_Tchaikovsky_WeSingToday",
			"RPL_Cassette_Utro",
			"RPL_Cassette_VanillyCar",
			"RPL_Cassette_VPuti",
			"RPL_Cassette_WhereIsMyMind",
			"RPL_Cassette_GoGoYellow",
			"RPL_Cassette_Vizisi",
			"RPL_Cassette_DevushkaMechty"
    };

    override bool CanReceiveItemIntoCargo (EntityAI item)
    {
        foreach( string allowedCargo : m_AllowedCargo )
        {
            if(item.GetType() == allowedCargo)
                return true;
        }

        return false;
    }

    override bool CanSwapItemInCargo (EntityAI child_entity, EntityAI new_entity)
    {
        foreach( string allowedCargo : m_AllowedCargo )
        {
            if(child_entity.GetType() == allowedCargo && new_entity.GetType() == allowedCargo)
                return true;
        }
        return false;
    }
};
