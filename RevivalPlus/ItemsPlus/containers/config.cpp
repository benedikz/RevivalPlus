
class CfgPatches {
   class RevivalPlus_Containers {
      units[] = {
        "RPL_WoodenCrate_Big"
      };
      weapons[] = {};
      requiredVersion = 0.1;
      requiredAddons[] = {
         "DZ_Gear_Containers",
         "DZ_Structures",
         "DZ_Data"
      };
   };
};

class cfgVehicles
{
  // Parent classes
  class Container_Base;
  class Inventory_Base;

  class WoodenCrate;
  class RPL_WoodenCrate: WoodenCrate
  {
      itemSize[]={10,6};
      class Cargo
      {
          itemsCargoSize[]={10,6};
          openable=0;
          allowOwnedCargoManipulation=1;
      };
  };
  class RPL_WoodenCrate_Big: WoodenCrate
  {
      scope = 1;
      model="dz\structures\military\improvised\roadblock_woodencrate.p3d";
      displayName="#STR_WoodenCrate";
      descriptionShort="#STR_WoodenCrate_Description";
      weight= 500;
      heavyItem = 1;
      simulation = "inventoryItem";
      itemBehaviour = 2;
      physLayer="item_large";
      itemSize[]={12,10};
      attachments[]=
      {
              //"Back",
              //"Shoulder",
              //"Knife",
              //"Melee",
              //"magazine",
              //"Book_slot",
              //"pistol",
              //"Map",
              //"Compass",
              //"Belt_Left",
              //"Lamp"
              //"Feet"
      };
      /*
      hiddenSelections[]=
      {
          "camoGround"
      };
      hiddenSelectionsMaterials[]=
      {
          "RevivalPlus\ItemsPlus\containers\data\woodencrate.rvmat"
      };
      */
      class Cargo
      {
          itemsCargoSize[]={12,10};
          openable=0;
          allowOwnedCargoManipulation=1;
      };
  };
  class RPL_WoodenCrate_Weapons: RPL_WoodenCrate_Big
  {
      attachments[]=
      {
              "Rifle",
              "Rifle",
              "Rifle",
              "Rifle",
              "Rifle",
      };
  };
};
