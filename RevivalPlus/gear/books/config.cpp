class CfgPatches
{
	class RPL_Gear_Books
	{
		units[] = {"RPL_SkillBook_Gunsmith","RPL_SkillBook_Doctor","RPL_SkillBook_Carpenter","RPL_SkillBook_Cook","RPL_SkillBook_Scientist","RPL_SkillBook_Blacksmith","RPL_SkillBook_Distiller","RPL_SkillBook_Unassigned"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Book_Base;
	class ItemBook;
	class RPL_SkillBook_Base: ItemBook
	{
		scope = 0;
		title = "Skill Book";
		author = "Unknown Author";
		lootTag[] = {"Religious"};
		displayName = "";
		descriptionShort = "...";
		rotationFlags = 1;
		hiddenSelectionsTextures[] = {""};
	};
	class RPL_SkillBook_Gunsmith: RPL_SkillBook_Base
	{
		scope = 2;
		displayName = "Modrotisky Černaruské zbrojovky";
		descriptionShort = "Modrotisky (plány chcete-li) Černaruské zbrojovky v knize. Odkud pocházejí se neptejte, určitě se nedostaly ven nijak legálně. Je tam spousta zajímavých návodů, výkresů a triků pro výrobu zbraní a munice.";
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\books\data\skillbook_empty_co.paa"};
	};
	class RPL_SkillBook_Doctor: RPL_SkillBook_Base
	{
		scope = 2;
		displayName = "Oborová lékařská kniha";
		descriptionShort = "Státem schválená normalizovaná kniha pro studenty medicíny a praktické lékaře. Uvádí i recepty na alternativní tvorbu některých léčiv.";
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\books\data\skillbook_empty_co.paa"};
	};
	class RPL_SkillBook_Carpenter: RPL_SkillBook_Base
	{
		scope = 2;
		displayName = "Truhlářova literatura";
		descriptionShort = "Když přichází řada na tvorbu nějakého toho nábytku, není nad to přečíst si knihu Vladimira Antonina Petišky z Kirovogradského konglomerátu Nabytkopu. Obsahuje návody na sestrojení několika kusů nábytku širokého spektra.";
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\books\data\skillbook_empty_co.paa"};
	};
	class RPL_SkillBook_Cook: RPL_SkillBook_Base
	{
		scope = 2;
		displayName = "Tradiční Černaruská kuchařka";
		descriptionShort = "Tato tradiční Černaruská kuchařka obohatí Vaše chuťové pohárky a vaši inspiraci o několik světoznámých receptů Černaruské kulinářské špičky. Najdete v ní recepty např. od promovaného Belozerského šéfkuchaře Mikoly Hrodského.";
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\books\data\skillbook_empty_co.paa"};
	};
	class RPL_SkillBook_Scientist: RPL_SkillBook_Base
	{
		scope = 2;
		displayName = "Zapečetěná příruční kniha";
		descriptionShort = "Odborná příručka korporátu VRANA Industries, oddělení pro nekonvenční boj. Dočtete se tam hodně věcí ohledně toxických plynů, radioaktivních prvků a používání těchto látek v boji.";
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\books\data\skillbook_scientist_co.paa"};
	};
	class RPL_SkillBook_Blacksmith: RPL_SkillBook_Base
	{
		scope = 2;
		displayName = "Oborová kovářská kniha";
		descriptionShort = "Odborná kovářská kniha ti poví vše o řemesle, jež má v Černarusi stále ještě žádané uplatnění. Ukáže ti, jaké nástroje a praktiky je potřeba zachovat při práci kováře a několik praktických cvičení, co se tvarování kovu týče.";
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\books\data\skillbook_empty_co.paa"};
	};
	class RPL_SkillBook_Distiller: RPL_SkillBook_Base
	{
		scope = 2;
		displayName = "Oborová kniha k destilaci alkoholu";
		descriptionShort = "Odborná oborová kniha se znalostmi, co se destilace alkoholu týče ...";
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\books\data\skillbook_empty_co.paa"};
	};
	class RPL_SkillBook_Unassigned: RPL_SkillBook_Base
	{
		scope = 2;
		displayName = "Neznámá oborová kniha";
		descriptionShort = "...";
		hiddenSelectionsTextures[] = {"RevivalPlus\gear\books\data\skillbook_empty_co.paa"};
	};
};
