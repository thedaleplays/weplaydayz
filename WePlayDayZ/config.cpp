class CfgPatches
{
	class WePlayDayZ
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"DZ_Characters_Tops"
		};
	};
};
class CfgMods
{
	class WePlayDayZ
	{
		dir="WePlayDayZ";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="WePlayDayZ";
		credits="TheDalePlays";
		author="TheDalePlays";
		authorID="0";
		version="1.1";
		extra=0;
		type="mod";
		inputs="";
		dependencies[]=
		{
			"Game",
			"World"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"WePlayDayZ/scripts/3_Game"
				};
			};
		};
	};
};
class cfgVehicles
{
	class TShirt_ColorBase;
	class tshirt_white_tdp: TShirt_ColorBase
	{
		displayName="TheDalePlays t-shirt";
		descriptionShort="T-shirt by TheDalePlays";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"WePlayDayZ\Data\WePlayDayZ\tshirt_white_tdp.paa",
			"WePlayDayZ\Data\WePlayDayZ\tshirt_white_tdp.paa",
			"WePlayDayZ\Data\WePlayDayZ\tshirt_white_tdp.paa"
		};
	};
};		
