class CfgPatches
{
	class RPL_Animals_UrsusArctos
	{
		units[] = {"RPL_Animal_UrsusArctos_Black","RPL_Animal_UrsusArctos_Taigan","RPL_BearPelt_Black","RPL_BearPelt_Taigan"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Animals","DZ_Data_Bliss","DZ_AI_Bliss","DZ_Weapons_Melee","DZ_Gear_Consumables"};
	};
};
class CfgVehicles
{
	class BearPelt;
	class RPL_BearPelt_Black: BearPelt
	{
		scope = 2;
		displayName = "$STR_RPL_BearPelt_Black";
		descriptionShort = "$STR_RPL_BearPelt_Black_D";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"RevivalPlus\animals_bliss\ursus_arctos\data\bear_black_pelt_co.paa"};
	};
	class RPL_BearPelt_Taigan: BearPelt
	{
		scope = 2;
		displayName = "$STR_RPL_BearPelt_Taigan";
		descriptionShort = "$STR_RPL_BearPelt_Taigan_D";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"RevivalPlus\animals_bliss\ursus_arctos\data\bear_taigan_pelt_co.paa"};
	};
	class Animal_UrsusArctos;
	class RPL_Animal_UrsusArctos_Black: Animal_UrsusArctos
	{
		scope = 2;
		displayName = "$STR_RPL_Animal_UrsusArctos_Black";
		hiddenSelections[] = {"body_injury"};
		hiddenSelectionsTextures[] = {"RevivalPlus\animals_bliss\ursus_arctos\data\bear_black_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 800;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5000;
				};
				class Shock
				{
					hitpoints = 5000;
				};
			};
			class DamageZones
			{
				class Zone_Head
				{
					componentNames[] = {"Zone_Head"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.1;
					canBleed = 0;
					class Health
					{
						hitpoints = 250;
						transferToGlobalCoef = 1;
					};
					class Blood: Health
					{
						hitpoints = 5000;
					};
					class Shock: Health
					{
						hitpoints = 5000;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0.51;
							};
						};
						class Projectile: Melee
						{
							class Health: Health
							{
								damage = 0.56;
							};
						};
						class FragGrenade: Melee{};
					};
				};
				class Zone_Neck: Zone_Head
				{
					componentNames[] = {"Zone_Neck"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.1;
					class Health
					{
						hitpoints = 300;
						transferToGlobalCoef = 1;
					};
					class ArmorType: ArmorType
					{
						class Melee: Melee
						{
							class Health: Health
							{
								damage = 0.15;
							};
						};
						class Projectile: Projectile
						{
							class Health: Health
							{
								damage = 0.78;
							};
						};
					};
				};
				class Zone_Belly: Zone_Head
				{
					componentNames[] = {"Zone_Belly"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 400;
					};
					class ArmorType: ArmorType
					{
						class Melee: Melee
						{
							class Health: Health
							{
								damage = 0.3;
							};
						};
					};
				};
				class Zone_Pelvis: Zone_Head
				{
					componentNames[] = {"Zone_Pelvis"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 500;
					};
					class ArmorType: ArmorType
					{
						class Melee: Melee
						{
							class Health: Health
							{
								damage = 0.3;
							};
						};
					};
				};
				class Zone_Legs: Zone_Head
				{
					componentNames[] = {"Zone_Legs"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 200;
						transferToGlobalCoef = 0;
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item = "RPL_BearPelt_Black";
				count = 2;
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				item = "BearSteakMeat";
				count = 20;
				itemZones[] = {"Zone_Belly","Zone_Pelvis"};
				countByZone[] = {8,8};
				quantityMinMaxCoef[] = {0.7,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 2;
				quantityMinMaxCoef[] = {0.2,1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 4;
				quantityMinMaxCoef[] = {0.4,1};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 5;
				quantityMinMaxCoef[] = {0.3,1};
				transferToolDamageCoef = 1;
			};
		};
	};
	class RPL_Animal_UrsusArctos_Taigan: Animal_UrsusArctos
	{
		scope = 2;
		displayName = "$STR_RPL_Animal_UrsusArctos_Taigan";
		hiddenSelections[] = {"body_injury"};
		hiddenSelectionsTextures[] = {"RevivalPlus\animals_bliss\ursus_arctos\data\bear_taigan_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 800;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5000;
				};
				class Shock
				{
					hitpoints = 5000;
				};
			};
			class DamageZones
			{
				class Zone_Head
				{
					componentNames[] = {"Zone_Head"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.1;
					canBleed = 0;
					class Health
					{
						hitpoints = 250;
						transferToGlobalCoef = 1;
					};
					class Blood: Health
					{
						hitpoints = 5000;
					};
					class Shock: Health
					{
						hitpoints = 5000;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0.51;
							};
						};
						class Projectile: Melee
						{
							class Health: Health
							{
								damage = 0.56;
							};
						};
						class FragGrenade: Melee{};
					};
				};
				class Zone_Neck: Zone_Head
				{
					componentNames[] = {"Zone_Neck"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.1;
					class Health
					{
						hitpoints = 300;
						transferToGlobalCoef = 1;
					};
					class ArmorType: ArmorType
					{
						class Melee: Melee
						{
							class Health: Health
							{
								damage = 0.15;
							};
						};
						class Projectile: Projectile
						{
							class Health: Health
							{
								damage = 0.78;
							};
						};
					};
				};
				class Zone_Belly: Zone_Head
				{
					componentNames[] = {"Zone_Belly"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 400;
					};
					class ArmorType: ArmorType
					{
						class Melee: Melee
						{
							class Health: Health
							{
								damage = 0.3;
							};
						};
					};
				};
				class Zone_Pelvis: Zone_Head
				{
					componentNames[] = {"Zone_Pelvis"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 500;
					};
					class ArmorType: ArmorType
					{
						class Melee: Melee
						{
							class Health: Health
							{
								damage = 0.3;
							};
						};
					};
				};
				class Zone_Legs: Zone_Head
				{
					componentNames[] = {"Zone_Legs"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 200;
						transferToGlobalCoef = 0;
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedPelt
			{
				item = "RPL_BearPelt_Taigan";
				count = 2;
				transferToolDamageCoef = 1;
			};
			class ObtainedSteaks
			{
				item = "BearSteakMeat";
				count = 20;
				itemZones[] = {"Zone_Belly","Zone_Pelvis"};
				countByZone[] = {8,8};
				quantityMinMaxCoef[] = {0.7,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 2;
				quantityMinMaxCoef[] = {0.2,1};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 4;
				quantityMinMaxCoef[] = {0.4,1};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 5;
				quantityMinMaxCoef[] = {0.3,1};
				transferToolDamageCoef = 1;
			};
		};
	};
};
