
    /*
     *    Addon: Revival Environment
     *    Script: ENV_Overgrowth.c
     *    Author: Tomáš Benedikt; submitted by benedi.kz
     *
     *    © 2020 Tomáš Benedikt
     *
     *    This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
     *    To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
     *
     *    <summary>Modifies the ChernarusPlus terrain.</summary>
     *
     */

modded class MissionGameplay
{
  override void OnInit()
  {
    super.OnInit();
    Print("[R_ENVIRONMENT] Loading <ENV_Overgrowth> ...");

    string z_WorldNameSTR = GetGame().GetWorldName();
    string z_WorldNameConverted = GetGame().GetWorldName();
    int Z_Z = z_WorldNameConverted.ToLower();

    if ( z_WorldNameConverted == "chernarusplus" || z_WorldNameConverted == "chernarusplusgloom" )
    {
    }
  }

  void SpawnObject(string objectName, vector position, vector orientation)
  {
      Object obj;
      obj = Object.Cast(GetGame().CreateObject(objectName, "0 0 0"));
      obj.SetPosition(position);
      obj.SetOrientation(orientation);

      // Force update collisions
      if (obj.CanAffectPathgraph())
      {
          obj.SetAffectPathgraph(true, false);
          GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(GetGame().UpdatePathgraphRegionByObject, 100, false, obj);
      }
  }

}
