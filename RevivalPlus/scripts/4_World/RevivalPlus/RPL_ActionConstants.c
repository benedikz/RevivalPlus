
/*
 *    Addon: Revival Plus
 *    Script: RPL_ActionConstants.c
 *    Author: Tomáš Benedikt
 *
 *    © 2020 Tomáš Benedikt
 *
 *    This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
 *    To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 *
 *    <summary>Overrides Action Time Constants.</summary>
 *
 */

modded class UAQuantityConsumed
{
  /***************************************************
              @FILL_LIQUID CONSTANTS
  ***************************************************/
  //const float DEFAULT = 1;
	//const float DISINFECT = 10;
	//const float EAT_SMALL = 15;
	//const float EAT_NORMAL = 25;
	const float FILL_LIQUID = 800;
	const float POUR_LIQUID = 800;
	const float DRAIN_LIQUID = 800;
	const float DRINK = 50;
	//const float BLOOD = 50;
	//const float SALINE = 100;
	const float FUEL = 500;
	//const float FIREPLACE_EXTINGUISHER = 200;
	//const float FIREPLACE_LIQUID = 100;
	//const float GARDEN_FERTILIZE = 10;
	//const float GARDEN_WATER = 150;
	//const float GARDEN_DISINFECT_PLANT = 0.06;
};

modded class UATimeSpent
{
  /***************************************************
              @BASEBUILDING CONSTANTS
  ***************************************************/
  const float BASEBUILDING_CONSTRUCT_FAST = 5;
  const float BASEBUILDING_CONSTRUCT_MEDIUM = 7.5;
  const float BASEBUILDING_CONSTRUCT_SLOW = 10;
  const float BASEBUILDING_DECONSTRUCT_FAST = 10;
  const float BASEBUILDING_DECONSTRUCT_MEDIUM = 12;
  const float BASEBUILDING_DECONSTRUCT_SLOW = 15;
  const float BASEBUILDING_REPAIR_FAST = 3;
  const float BASEBUILDING_REPAIR_MEDIUM = 5;
  const float BASEBUILDING_REPAIR_SLOW = 10;

  /***************************************************
                  @SHAVE CONSTANT
  ***************************************************/
  const float SHAVE = 23;

  /***************************************************
              @START_ENGINE CONSTANT
  ***************************************************/
  const float START_ENGINE = 1;
};
