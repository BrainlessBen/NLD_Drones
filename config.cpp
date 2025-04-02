#include "Defines.hpp"

class cfgPatches 
{
    class NLD_Drones
    {
        name=NAME;
        author=AUTHOR;
        url="https://github.com/BrainlessBen/NLD_Drones";
        requiredVersion=REQVER;
        requiredAddons[]=
        {
			"A3_Drones_F",
			"ArmaFPV_Data"
        };
        units[]={};
		weapons[]={};
    };
};

class CfgFunctions
{
	class BEN
	{
		class Drone
		{
			file="\NLD_Drones\functions\Drones";
			class dissassemble{};
			class pickup{};
			class deploy{};
			class droneInit
			{
				postInit=1;
			};
		};
		class FPV
		{
			file="\NLD_Drones\functions\FPV";
			class createDialog{};
			class getSignal{};
			class handleBattery{};
			class handleSignal{};
			class handleSettings{};
			class handleTime{};
			class onDestroy{};
			class onSignalLost{};
			class destroyUI{};
			class droneInit{};
			class handleConnect
			{
				postInit=1;
			};
		};
		class MissionParams
		{
			file="\NLD_Drones\functions\Mission";
			class setWeather {};
			class setTime {};
			class setFog {};
		};
	};
};

class CfgEditorCategories
{
	class BEN_Drones
	{
		displayName="Drones";
	};
};
class CfgEditorSubcategories
{
	class BEN_D_Parrot
	{
		displayName="Parrot";
	};
	class BEN_D_Crocus
	{
		displayName="Crocus";
	};
	class BEN_D_Raven
	{
		displayName="Raven";
	};
};

class Extended_PreInit_EventHandlers
{
	class BEN_preInit
	{
		init="call compile preProcessFileLineNumbers '\NLD_Drones\XEH_preInit.sqf'";
	};
};
