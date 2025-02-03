class cfgPatches 
{
    class NLD_Drones
    {
        name="NLD Drones";
        author="Brainless_Ben";
        url="https://github.com/BrainlessBen/NLD_Drones";
        requiredVersion=2.14;
        requiredAddons[]=
        {
            "A3_Drones_F_Air_F_Gamma_UAV_01"
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

//class cfgFunctions{};

class cfgVehicles 
{
	class UAV_01_base_F;
    class BEN_UAV_01_base_f: UAV_01_base_F
    {
        author="Brainless_Ben";
        displayName="AR-2 Darter (NLD)"
        accuracy=1.5;
		camouflage=0.5;
		audible=0.1;
		armor=0.5;
		cost=20000;
		altFullForce=1000;
		altNoForce=2000;
        startDuration=1;
		maxSpeed=150;
		precision=15;
		steerAheadSimul=0.3;
		steerAheadPlan=0.49999999;
		predictTurnPlan=2;
		predictTurnSimul=1.5;
		liftForceCoef=5;
		cyclicAsideForceCoef=3;
		cyclicForwardForceCoef=2;
		bodyFrictionCoef=0;
		backRotorForceCoef=5;
		fuelCapacity=50;
        mainRotorSpeed=-12;
		backRotorSpeed=12;
    };
    class BEN_B_UAV_01_F: BEN_UAV_01_base_f
    {
        author="Brainless_Ben";
        displayName="AR-2 Darter (NLD)";
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
		hiddenSelectionsTextures[]=
		{
			"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_CO.paa"
		};
		textureList[]=
		{
			"Blufor",
			1
		};
    };
    class BEN_O_UAV_01_F: BEN_UAV_01_base_f
    {
        author="Brainless_Ben";
        displayName="AR-2 Darter (NLD)";
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
		hiddenSelectionsTextures[]=
		{
			"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_OPFOR_CO.paa"
		};
		textureList[]=
		{
			"Opfor",
			1
		};
    };
    class BEN_I_UAV_01_F: BEN_UAV_01_base_F
    {
        author="Brainless_Ben";
        displayName="AR-2 Darter (NLD)";
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
		hiddenSelectionsTextures[]=
		{
			"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_INDP_CO.paa"
		};
		textureList[]=
		{
			"Indep",
			1
		};
    };

	class Weapon_Bag_Base;
    class B_UAV_01_backpack_F
    {
        class assembleInfo;
    };
    class O_UAV_01_backpack_F
    {
        class assembleInfo;
    };
    class I_UAV_01_backpack_F
    {
        class assembleInfo;
    };
    class BEN_B_UAV_01_backpack_F: B_UAV_01_backpack_F
    {
        author="Brainless_Ben";
        displayName="UAV Bag (AR-2) [NLD]";
        class assembleInfo: assembleInfo
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
        class assembleInfo: assembleInfo
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
        class assembleInfo: assembleInfo
        {
            base="";
            displayName="AR-2 Darter (NLD)";
            assembleTo="BEN_I_UAV_01_F";
        };
    };
};
