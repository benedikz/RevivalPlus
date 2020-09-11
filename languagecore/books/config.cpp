class CfgPatches
{
	class languagecore_books
	{
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Gear",
			"DZ_Gear_Books"
		};
	};
};

class CfgVehicles
{
  class ItemBook;
  class BookBible: ItemBook
	{
		scope = 2;
		displayName = "$STR_RPL_BookBible";
		descriptionShort = "$STR_RPL_BookBible_D";
	};
};
