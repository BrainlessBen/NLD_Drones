#include "..\..\Defines.hpp"

class cfgPatches 
{
    class NLD_Drones_Crocus
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
        units[]=
        {
			"BEN_B_Crocus_AT",
			"BEN_B_Crocus_AP",
			"BEN_O_Crocus_AT",
			"BEN_O_Crocus_AP",
			"BEN_I_Crocus_AT",
			"BEN_I_Crocus_AP",
			"BEN_B_Crocus_AT_Bag",
			"BEN_B_Crocus_AP_Bag",
			"BEN_O_Crocus_AT_Bag",
			"BEN_O_Crocus_AP_Bag",
			"BEN_I_Crocus_AT_Bag",
			"BEN_I_Crocus_AP_Bag"
        };
		weapons[]={};
    };
};

class cfgVehicles
{
//Crocus Base
	class drone_base_F;
	class BEN_CROCUS_base_F: drone_base_F
	{
		author=AUTHOR;
		altFullForce=Drone2_AltFullForce;
		altNoForce=Drone2_AltNoForce;
        startDuration=Drone2_StartDuration;
		maxSpeed=Drone2_MaxSpeed;
		steerAheadSimul=Drone2_SteerAheadSimul;
		steerAheadPlan=Drone2_SteerAheadPlan;
		predictTurnPlan=Drone2_PreductTurnPlan;
		predictTurnSimul=Drone2_PredictTurnSimul;
		liftForceCoef=Drone2_LiftForce;
		cyclicAsideForceCoef=Drone2_CyclicAsideForce;
		cyclicForwardForceCoef=Drone2_CyclicForwardForce;
		bodyFrictionCoef=Drone2_BodyFriction;
		backRotorForceCoef=Drone2_BackRotorForce;
		fuelCapacity=Drone2_FuelCap;
        mainRotorSpeed=Drone2_MainRotorSpeed;
		backRotorSpeed=Drone2_BackRotorSpeed;
		tailBladeRadius=Drone2_TailBladeRadius;
		tailBladeVertical=Drone2_TailBladeVertical;
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"rotorimpacthide",
					0
				},
				
				{
					"tailrotorimpacthide",
					0
				},
				
				{
					"propeller1_rotation",
					0
				},
				
				{
					"propeller1_blur_rotation",
					0
				},
				
				{
					"propeller2_rotation",
					0
				},
				
				{
					"propeller2_blur_rotation",
					0
				},
				
				{
					"propeller3_rotation",
					0
				},
				
				{
					"propeller3_blur_rotation",
					0
				},
				
				{
					"propeller4_rotation",
					0
				},
				
				{
					"propeller4_blur_rotation",
					0
				},
				
				{
					"propeller1_hide",
					0
				},
				
				{
					"propeller1_blur_hide",
					0
				},
				
				{
					"propeller2_hide",
					0
				},
				
				{
					"propeller2_blur_hide",
					0
				},
				
				{
					"propeller3_hide",
					0
				},
				
				{
					"propeller3_blur_hide",
					0
				},
				
				{
					"propeller4_hide",
					0
				},
				
				{
					"propeller4_blur_hide",
					0
				},
				
				{
					"mainturret",
					0
				},
				
				{
					"maingun",
					-0.050000001
				}
			};
			hide[]=
			{
				"zasleh",
				"tail rotor blur",
				"main rotor blur",
				"zadni svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0.15000001;
			verticalOffsetWorld=-0.001;
			init="''";
		};
	};

//Crocus Drones
	class BEN_B_Crocus_AT: BEN_CROCUS_base_F
	{
		author=AUTHOR;
		displayName="Crocus AT (NLD)";
		editorPreview="\ArmaFPV\data\krokus1.jpg";
		model="\ArmaFPV\drone.p3d";
        _generalMacro="B_UAV_01_F";
		scope=2;
        scopeCurator=2;
		side=1;
		accuracy=0.5;
		faction="BLU_F";
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		class assembleInfo
		{
			base="";
			primary=1;
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"BEN_B_Crocus_AT_Bag"
			};
		};
		class EventHandlers
		{
			class ArmaFPV
			{
				hit="_this call BEN_fnc_onDestroy";
				init="(_this # 0) spawn BEN_fnc_droneInit;";
			};
		};
	};
	class BEN_B_Crocus_AP: BEN_B_Crocus_AT
	{
		author=AUTHOR;
		displayName="Crocus AP (NLD)";
		editorPreview="\ArmaFPV\data\termo.jpg";
		model="\ArmaFPV\drone2\drone2.p3d";
		class assembleInfo: assembleInfo
		{
			dissasembleTo[]=
			{
				"BEN_B_Crocus_AP_Bag"
			};
		};
	};
	class BEN_O_Crocus_AT: BEN_CROCUS_base_F
	{
		author=AUTHOR;
		displayName="Crocus AT (NLD)";
		editorPreview="\ArmaFPV\data\krokus1.jpg";
		model="\ArmaFPV\drone.p3d";
		scope=2;
        scopeCurator=2;
		side=0;
		accuracy=0.5;
		faction="OPF_F";
		crew="O_UAV_AI";
		typicalCargo[]=
		{
			"O_UAV_AI"
		};
		class assembleInfo
		{
			base="";
			primary=1;
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"BEN_O_Crocus_AT_Bag"
			};
		};
		class EventHandlers
		{
			class ArmaFPV
			{
				hit="_this call BEN_fnc_onDestroy";
				init="(_this # 0) spawn BEN_fnc_droneInit;";
			};
		};
	};
	class BEN_O_Crocus_AP: BEN_O_Crocus_AT
	{
		author=AUTHOR;
		displayName="Crocus AP (NLD)";
		editorPreview="\ArmaFPV\data\termo.jpg";
		model="\ArmaFPV\drone2\drone2.p3d";
		class assembleInfo: assembleInfo
		{
			dissasembleTo[]=
			{
				"BEN_O_Crocus_AP_Bag"
			};
		};
	};
	class BEN_I_Crocus_AT: BEN_CROCUS_base_F
	{
		author=AUTHOR;
		displayName="Crocus AT (NLD)";
		editorPreview="\ArmaFPV\data\krokus1.jpg";
		model="\ArmaFPV\drone.p3d";
		scope=2;
        scopeCurator=2;
		side=2;
		accuracy=0.5;
		faction="IND_F";
		crew="I_UAV_AI";
		typicalCargo[]=
		{
			"I_Soldier_lite_F"
		};
		class assembleInfo
		{
			base="";
			primary=1;
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"BEN_I_Crocus_AT_Bag"
			};
		};
		class EventHandlers
		{
			class ArmaFPV
			{
				hit="_this call BEN_fnc_onDestroy";
				init="(_this # 0) spawn BEN_fnc_droneInit;";
			};
		};
	};
	class BEN_I_Crocus_AP: BEN_I_Crocus_AT
	{
		author=AUTHOR;
		displayName="Crocus AP (NLD)";
		editorPreview="\ArmaFPV\data\termo.jpg";
		model="\ArmaFPV\drone2\drone2.p3d";
		class assembleInfo: assembleInfo
		{
			dissasembleTo[]=
			{
				"BEN_I_Crocus_AP_Bag"
			};
		};
	};

//Crocus Bags
	class BEN_B_UAV_01_backpack_F;
	class BEN_O_UAV_01_backpack_F;
	class BEN_I_UAV_01_backpack_F;
	class BEN_B_Crocus_AT_Bag: BEN_B_UAV_01_backpack_F
	{
		author=AUTHOR;
		displayName="UAV Bag (Crocus AT) [NLD]";
        class assembleInfo
        {
            base="";
			primary=0;
            displayName="Crocus AT (NLD)";
            assembleTo="BEN_B_Crocus_AT";
        };
	};
	class BEN_B_Crocus_AP_Bag: BEN_B_UAV_01_backpack_F
	{
		author=AUTHOR;
		displayName="UAV Bag (Crocus AP) [NLD]";
        class assembleInfo
        {
            base="";
			primary=0;
            displayName="Crocus AP (NLD)";
            assembleTo="BEN_B_Crocus_AP";
        };
	};
	class BEN_O_Crocus_AT_Bag: BEN_O_UAV_01_backpack_F
	{
		author=AUTHOR;
		displayName="UAV Bag (Crocus AT) [NLD]";
		class assembleInfo
        {
            base="";
			primary=0;
            displayName="Crocus AT (NLD)";
            assembleTo="BEN_O_Crocus_AT";
        };
	};
	class BEN_O_Crocus_AP_Bag: BEN_O_UAV_01_backpack_F
	{
		author=AUTHOR;
		displayName="UAV Bag (Crocus AP) [NLD]";
		class assembleInfo
        {
            base="";
			primary=0;
            displayName="Crocus AP (NLD)";
            assembleTo="BEN_O_Crocus_AP";
        };
	};
	class BEN_I_Crocus_AT_Bag: BEN_I_UAV_01_backpack_F
	{
		author=AUTHOR;
		displayName="UAV Bag (Crocus AT) [NLD]";
		class assembleInfo
        {
            base="";
			primary=0;
            displayName="Crocus AT (NLD)";
            assembleTo="BEN_I_Crocus_AT";
        };
	};
	class BEN_I_Crocus_AP_Bag: BEN_I_UAV_01_backpack_F
	{
		author=AUTHOR;
		displayName="UAV Bag (Crocus AP) [NLD]";
		class assembleInfo
        {
            base="";
			primary=0;
            displayName="Crocus AP (NLD)";
            assembleTo="BEN_I_Crocus_AP";
        };
	};
};