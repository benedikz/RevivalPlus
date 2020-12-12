class CfgPatches
{
	class RPL_Structures_Industrial
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
      "DZ_Data"
    };
	};
};

class CfgVehicles
{
  /*
    WINTER CHERNARUS 1.10 FIX - CRAZY MIKE YOU FUCKING SUCK
  */
	class HouseNoDestruct;
  class Land_Farm_CowshedA;
  class Land_Farm_CowshedB;
  class Land_Farm_CowshedC;
  class RPL_Land_Farm_CowshedA: Land_Farm_CowshedA {};
  class RPL_Land_Farm_CowshedB: Land_Farm_CowshedB {};
  class RPL_Land_Farm_CowshedC: Land_Farm_CowshedC {};
};
