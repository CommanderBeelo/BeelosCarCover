class CfgPatches
{
	class Beelos_CarCovers
	{
		units[]={
			"DBO_Mustang_Cover",
			"DBO_Mustang_Cover_Winter",
			"DBO_Mustang_Cover_Desert",
			"DBO_Mustang_Cover_Civil"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
			"CarCover"
		};
	};
};
class CfgMods
{
	class Beelos_CarCovers
	{
		dir="BeelosCarCovers";
		author="Commander Beelo - Special thanks to Callatic, HunterZ, and cloudy for their mods!";
		version="1.0";
		extra=0;
		type="mod";
		class defs
		{
		};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Inventory_Base;
	class Container_Base;
	class WorldContainer_Base;
	class CarCoverBase;
	
	class DBO_Mustang_Cover: CarCoverBase
	{
		scope=2;
		displayName="Camo Net (DBO Mustang)";
		model="CarCover\data\ExpansionVodnik_Cover.p3d";
		attachments[]=
		{
			"mustangwheel",
			"mustangwheel",
			"mustangwheel",
			"mustangwheel",
			"mustangwheel",
			"mustangwheel",
			"Reflector_1_1",
			"Reflector_2_1",
			"EngineBelt",
			"mustangDoors_Driver",
			"mustangDoors_coDriver",
			"JerryCanRed",
			"GreenOilCan",
			"StorageBoxM",
			"toolboxm",
			"GunCaseM",
			"ShovelM",
			"CanisterGasoline",
			"CarBattery",
			"CarRadiator",
			"SparkPlug"
		};
	};
	class DBO_Mustang_Cover_Winter: DBO_Mustang_Cover
	{
		hiddenSelections[]=
		{
			"Carcover"
		};
		hiddenSelectionsTextures[]=
		{
			"CarCover\data\CarCoverWinter.paa"
		};
	};
	class DBO_Mustang_Cover_Desert: DBO_Mustang_Cover
	{
		hiddenSelections[]=
		{
			"Carcover"
		};
		hiddenSelectionsTextures[]=
		{
			"CarCover\data\CarCoverDesert.paa"
		};
	};
	class DBO_Mustang_Cover_Civil: DBO_Mustang_Cover
	{
		hiddenSelectionsTextures[]=
		{
			"CarCover\data\BlueTarp_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"CarCover\data\BlueTarp.rvmat"
		};
	};
};
