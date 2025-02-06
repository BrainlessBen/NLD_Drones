#define AUTHOR "Brainless Ben"
#define DRONE_Accuracy 1.5
#define DRONE_Camoflage 0.5
#define DRONE_Audible 0.1
#define DRONE_Armor 0.5
#define DRONE_Cost 20000
#define DRONE_AltFullForce 500
#define DRONE_AltNoForce 1000
#define DRONE_StartDuration 1
#define DRONE_MaxSpeed 100
#define DRONE_Precision 15
#define DRONE_SteerAheadSimul 0.2
#define DRONE_SteerAheadPlan 0.6
#define DRONE_PredictTurnSimul 2
#define DRONE_PreductTurnPlan 3
#define DRONE_LiftForce 7
#define DRONE_CyclicAsideForce 2
#define DRONE_CyclicForwardForce 1
#define DRONE_BodyFriction 0
#define DRONE_BackRotorForce 2
#define DRONE_FuelCap 5
#define DRONE_MainRotorSpeed -10
#define DRONE_BackRotorSpeed 10
#define DRONE_TailBladeVertical 0

class cfgPatches 
{
    class NLD_Drones
    {
        name="NLD Drones";
        author=AUTHOR;
        url="https://github.com/BrainlessBen/NLD_Drones";
        requiredVersion=2.14;
        requiredAddons[]=
        {
			"A3_Drones_F",
			"ArmaFPV_Data"
        };
        units[]=
        {
            "BEN_B_UAV_01_F",
			"BEN_I_UAV_01_F",
			"BEN_O_UAV_01_F",
            "BEN_B_UAV_01_backpack_F",
			"BEN_I_UAV_01_backpack_F",
			"BEN_O_UAV_01_backpack_F",

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

class CfgFunctions
{
	class BEN
	{
		class FPV
		{
			file="\NLD_Drones\functions";
			class fpv_createDialog
			{
			};
			class fpv_getSignal
			{
			};
			class fpv_handleBattery
			{
			};
			class fpv_handleConnect
			{
				postInit=1;
			};
			class fpv_handleSignal
			{
			};
			class fpv_handleSettings
			{
			};
			class fpv_handleTime
			{
			};
			class fpv_onDestroy
			{
			};
			class fpv_onSignalLost
			{
			};
			class fpv_destroyUI
			{
			};
			class fpv_droneInit
			{
			};
		};
	};
};

class cfgVehicles 
{
	class UAV_01_base_F;
    class BEN_UAV_01_base_F: UAV_01_base_F
    {
        author=AUTHOR;
        displayName="AR-2 Darter (NLD)";
        accuracy=DRONE_Accuracy;
		camouflage=DRONE_Camoflage;
		audible=DRONE_Audible;
		armor=DRONE_Armor;
		cost=DRONE_Cost;
		altFullForce=DRONE_AltFullForce;
		altNoForce=DRONE_AltNoForce;
        startDuration=DRONE_StartDuration;
		maxSpeed=DRONE_MaxSpeed;
		precision=DRONE_Precision;
		steerAheadSimul=DRONE_SteerAheadSimul;
		steerAheadPlan=DRONE_SteerAheadPlan;
		predictTurnPlan=DRONE_PreductTurnPlan;
		predictTurnSimul=DRONE_PredictTurnSimul;
		liftForceCoef=DRONE_LiftForce;
		cyclicAsideForceCoef=DRONE_CyclicAsideForce;
		cyclicForwardForceCoef=DRONE_CyclicForwardForce;
		bodyFrictionCoef=DRONE_BodyFriction;
		backRotorForceCoef=DRONE_BackRotorForce;
		fuelCapacity=DRONE_FuelCap;
        mainRotorSpeed=DRONE_MainRotorSpeed;
		backRotorSpeed=DRONE_BackRotorSpeed;
		tailBladeVertical=DRONE_TailBladeVertical;
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

//Darter Drones
    class BEN_B_UAV_01_F: BEN_UAV_01_base_F
    {
        author=AUTHOR;
        displayName="AR-2 Darter (NLD)";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_UAV_01_F.jpg";
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
		hiddenSelectionsTextures[]=
		{
			"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_CO.paa"
		};
		textureList[]=
		{
			"Blufor",
			1
		};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"BEN_B_UAV_01_backpack_F"
			};
		};
    };
    class BEN_O_UAV_01_F: BEN_UAV_01_base_F
    {
        author=AUTHOR;
        displayName="AR-2 Darter (NLD)";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_UAV_01_F.jpg";
		_generalMacro="O_UAV_01_F";
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
		hiddenSelectionsTextures[]=
		{
			"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_OPFOR_CO.paa"
		};
		textureList[]=
		{
			"Opfor",
			1
		};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"BEN_O_UAV_01_backpack_F"
			};
		};
    };
    class BEN_I_UAV_01_F: BEN_UAV_01_base_F
    {
        author=AUTHOR;
        displayName="AR-2 Darter (NLD)";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\I_UAV_01_F.jpg";
		_generalMacro="I_UAV_01_F";
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
		hiddenSelectionsTextures[]=
		{
			"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_INDP_CO.paa"
		};
		textureList[]=
		{
			"Indep",
			1
		};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"BEN_I_UAV_01_backpack_F"
			};
		};
    };

//Darter Bags
	class B_UAV_01_backpack_F;
    class O_UAV_01_backpack_F;
    class I_UAV_01_backpack_F;
    class BEN_B_UAV_01_backpack_F: B_UAV_01_backpack_F
    {
        author="Brainless_Ben";
        displayName="UAV Bag (AR-2) [NLD]";
        class assembleInfo
        {
            base="";
            displayName="AR-2 Darter (NLD)";
            assembleTo="BEN_B_UAV_01_F";
        };
    };
    class BEN_O_UAV_01_backpack_F: O_UAV_01_backpack_F
    {
        author="Brainless_Ben";
        displayName="UAV Bag (AR-2) [NLD]";
        class assembleInfo
        {
            base="";
            displayName="AR-2 Darter (NLD)";
            assembleTo="BEN_O_UAV_01_F";
        };
    };
    class BEN_I_UAV_01_backpack_F: I_UAV_01_backpack_F
    {
        author="Brainless_Ben";
        displayName="UAV Bag (AR-2) [NLD]";
        class assembleInfo
        {
            base="";
            displayName="AR-2 Darter (NLD)";
            assembleTo="BEN_I_UAV_01_F";
        };
    };

//Crocus Drone
	class drone_base_F;
	class BEN_CROCUS_base_F: drone_base_F
	{
		author=AUTHOR;
        displayName="Crocus (NLD)";
        accuracy=DRONE_Accuracy;
		camouflage=DRONE_Camoflage;
		audible=DRONE_Audible;
		armor=DRONE_Armor;
		cost=DRONE_Cost;
		altFullForce=DRONE_AltFullForce;
		altNoForce=DRONE_AltNoForce;
        startDuration=DRONE_StartDuration;
		maxSpeed=DRONE_MaxSpeed;
		precision=DRONE_Precision;
		steerAheadSimul=DRONE_SteerAheadSimul;
		steerAheadPlan=DRONE_SteerAheadPlan;
		predictTurnPlan=DRONE_PreductTurnPlan;
		predictTurnSimul=DRONE_PredictTurnSimul;
		liftForceCoef=DRONE_LiftForce;
		cyclicAsideForceCoef=DRONE_CyclicAsideForce;
		cyclicForwardForceCoef=DRONE_CyclicForwardForce;
		bodyFrictionCoef=DRONE_BodyFriction;
		backRotorForceCoef=DRONE_BackRotorForce;
		fuelCapacity=DRONE_FuelCap;
        mainRotorSpeed=DRONE_MainRotorSpeed;
		backRotorSpeed=DRONE_BackRotorSpeed;
		tailBladeVertical=DRONE_TailBladeVertical;
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
	class BEN_B_Crocus_AT: BEN_CROCUS_base_F
	{
		author=AUTHOR;
		displayName="Crocus AT (NLD)";
		editorPreview="\ArmaFPV\data\krokus1.jpg";
		model="\ArmaFPV\drone.p3d";
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
			primary=0;
			base="";
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
				hit="_this call BEN_fnc_fpv_onDestroy";
				init="(_this # 0) spawn BEN_fnc_fpv_droneInit;";
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
			primary=0;
			base="";
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
				hit="_this call BEN_fnc_fpv_onDestroy";
				init="(_this # 0) spawn BEN_fnc_fpv_droneInit;";
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
			primary=0;
			base="";
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
				hit="_this call BEN_fnc_fpv_onDestroy";
				init="(_this # 0) spawn BEN_fnc_fpv_droneInit;";
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
	class BEN_B_Crocus_AT_Bag: BEN_B_UAV_01_backpack_F
	{
		displayName="UAV Bag (Crocus AT) [NLD]";
        class assembleInfo: assembleInfo
        {
            base="";
			primary=1;
            displayName="Crocus AT (NLD)";
            assembleTo="BEN_B_Crocus_AT";
        };
	};
	class BEN_B_Crocus_AP_Bag: BEN_B_Crocus_AT_Bag
	{
		displayName="UAV Bag (Crocus AP) [NLD]";
        class assembleInfo: assembleInfo
        {
            base="";
			primary=1;
            displayName="Crocus AP (NLD)";
            assembleTo="BEN_B_Crocus_AP";
        };
	};
	class BEN_O_Crocus_AT_Bag: BEN_O_UAV_01_backpack_F
	{
		displayName="UAV Bag (Crocus AT) [NLD]";
		class assembleInfo: assembleInfo
        {
            base="";
			primary=1;
            displayName="Crocus AT (NLD)";
            assembleTo="BEN_O_Crocus_AT";
        };
	};
	class BEN_O_Crocus_AP_Bag: BEN_O_Crocus_AT_Bag
	{
		displayName="UAV Bag (Crocus AP) [NLD]";
		class assembleInfo: assembleInfo
        {
            base="";
			primary=1;
            displayName="Crocus AP (NLD)";
            assembleTo="BEN_O_Crocus_AP";
        };
	};
	class BEN_I_Crocus_AT_Bag: BEN_I_UAV_01_backpack_F
	{
		displayName="UAV Bag (Crocus AT) [NLD]";
		class assembleInfo: assembleInfo
        {
            base="";
			primary=1;
            displayName="Crocus AT (NLD)";
            assembleTo="BEN_I_Crocus_AT";
        };
	};
	class BEN_I_Crocus_AP_Bag: BEN_I_Crocus_AT_Bag
	{
		displayName="UAV Bag (Crocus AP) [NLD]";
		class assembleInfo: assembleInfo
        {
            base="";
			primary=1;
            displayName="Crocus AP (NLD)";
            assembleTo="BEN_I_Crocus_AP";
        };
	};
};
