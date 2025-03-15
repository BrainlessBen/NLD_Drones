#include "..\..\Defines.hpp"

class cfgPatches 
{
    class NLD_Drones_Darter
    {
        name=NAME;
        author=AUTHOR;
        url="https://github.com/BrainlessBen/NLD_Drones";
        requiredVersion=REQVER;
        requiredAddons[]=
        {
			"A3_Drones_F",
			"ArmaFPV_Data",
			"NLD_Drones"
        };
        units[]=
        {
			"BEN_B_UAV_01_F",
			"BEN_I_UAV_01_F",
			"BEN_O_UAV_01_F",
            "BEN_B_UAV_01_backpack_F",
			"BEN_I_UAV_01_backpack_F",
			"BEN_O_UAV_01_backpack_F"
        };
		weapons[]={};
    };
};

class cfgVehicles 
{
//Darter Base
	class UAV_01_base_F;
    class BEN_UAV_01_base_F: UAV_01_base_F
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
			base="";
			primary=0;
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
			base="";
			primary=0;
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
			base="";
			primary=0;
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
        author=AUTHOR;
        displayName="UAV Bag (AR-2) [NLD]";
        class assembleInfo
        {
            base="";
			primary=1;
            displayName="AR-2 Darter (NLD)";
            assembleTo="BEN_B_UAV_01_F";
        };
    };
    class BEN_O_UAV_01_backpack_F: O_UAV_01_backpack_F
    {
        author=AUTHOR;
        displayName="UAV Bag (AR-2) [NLD]";
        class assembleInfo
        {
            base="";
			primary=1;
            displayName="AR-2 Darter (NLD)";
            assembleTo="BEN_O_UAV_01_F";
        };
    };
    class BEN_I_UAV_01_backpack_F: I_UAV_01_backpack_F
    {
        author=AUTHOR;
        displayName="UAV Bag (AR-2) [NLD]";
        class assembleInfo
        {
            base="";
			primary=1;
            displayName="AR-2 Darter (NLD)";
            assembleTo="BEN_I_UAV_01_F";
        };
    };
};
