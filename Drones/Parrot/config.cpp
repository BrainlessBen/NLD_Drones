/*
    Parrot Specs:
    - 32x zoom
    - Compact: 228x101x76 mm
    - Lightweight: 496 grams
    - 32 minutes flying time
    - Speed: 14,7 m/s
    - Service ceiling: 6 000 m
    - Hand-launch
    - Hand landing
    - Follows the user from up to 30 m away.
*/
#include "..\..\Defines.hpp"

class cfgPatches 
{
    class NLD_Drones_Parrot
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
			"BEN_Parrot_ANAFI",
			"Item_BEN_Parrot_ANAFI_Folded"
        };
		weapons[]=
        {
            "BEN_Parrot_ANAFI_Folded"
        };
    };
};

class cfgVehicles
{
//Parrot Base
	class Helicopter_Base_F;
	class BEN_Quadcopter_base_F: Helicopter_Base_F
	{
		class RotorLibHelicopterProperties;
	};
    class BEN_Parrot_Base_F: BEN_Quadcopter_base_F
    {
        author=AUTHOR;
        icon="\NLD_Drones\Drones\Parrot\data\ui\map_uav_01_parrot_ca.paa";
        picture="\NLD_Drones\Drones\Parrot\data\ui\uav_01_parrot_ca.paa";
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			//RTDconfig="A3\Air_F\Heli_Light_01\RTD_Heli_Light_01.xml";
			RTDconfig="\NLD_Drones\Drones\Parrot\rtd_uav_01_parrot.xml";
			autoHoverCorrection[]={6.5,0,0};			//{6.5,0,0}
			defaultCollective=0.2; 						//0.60500002
			retreatBladeStallWarningSpeed=50;
			maxTorque=900;								//4032
			stressDamagePerSec=0.0;
			maxHorizontalStabilizerLeftStress=10000;
			maxHorizontalStabilizerRightStress=10000;
			maxVerticalStabilizerStress=10000;
			horizontalWingsAngleCollMin=0;
			horizontalWingsAngleCollMax=0;
			maxMainRotorStress=350000;
			maxTailRotorStress=350000;
		};
		simulation="helicopterrtd"; //helicopterrtd quadcopter
		dampingRateFullThrottle=0.08;
		dampingRateZeroThrottleClutchEngaged=2.0;
		dampingRateZeroThrottleClutchDisengaged=2.0;
		fuelCapacity=Drone1_FuelCap;
		liftForceCoef=Drone1_LiftForce;
		bodyFrictionCoef=Drone1_BodyFriction;
		altFullForce=Drone1_AltFullForce;
		altNoForce=Drone1_AltNoForce;
		steerAheadSimul=Drone1_SteerAheadSimul;
		steerAheadPlan=Drone1_SteerAheadPlan;
		predictTurnPlan=Drone1_PreductTurnPlan;
		predictTurnSimul=Drone1_PredictTurnSimul;
		cyclicAsideForceCoef=Drone1_CyclicAsideForce;
		cyclicForwardForceCoef=Drone1_CyclicForwardForce;
		backRotorForceCoef=Drone1_BackRotorForce;
        mainRotorSpeed=Drone1_MainRotorSpeed;
		backRotorSpeed=Drone1_BackRotorSpeed;
		tailBladeRadius=Drone1_TailBladeRadius;
		tailBladeVertical=Drone1_TailBladeVertical;
		radarTargetSize=0.025;
		visualTargetSize=0.025;
		formationX=4;
		formationZ=4;
		enableManualFire=0;
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
		class Sounds
		{
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F\air\Uav_01\quad_engine_full_01",
					0.25118864,
					1,
					200
				};
				frequency="rotorSpeed";
				volume="camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\Uav_01\blade",
					0.25118864,
					1,
					200
				};
				frequency="rotorSpeed";
				volume="camPos*(0 max (rotorSpeed-0.1))";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class RotorHighOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\Uav_01\blade_high",
					0.25118864,
					1,
					250
				};
				frequency="rotorSpeed";
				volume="camPos*10*(0 max (rotorThrust-0.9))";
				cone[]={1.6,3.1400001,1.6,0.94999999};
			};
			class EngineIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Uav_01\quad_engine_full_int",
					0.25118864,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Uav_01\blade_int",
					0.25118864,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*(0 max (rotorSpeed-0.1))";
			};
			class RotorHighIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Uav_01\blade_high_int",
					0.25118864,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
    };

//Parrot Drones
    class BEN_B_Parrot_ANAFI: BEN_Parrot_Base_F
    {
        author=AUTHOR;
        accuracy=0.5;
        displayName="Parrot ANAFI (NLD)";
        editorPreview="\NLD_Drones\Drones\Parrot\data\ui\uav_01_parrot.jpg";
        model="\NLD_Drones\Drones\Parrot\UAV_01_parrot.p3d";
        _generalMacro="B_UAV_01_F";
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
        side=1;
        faction="BLU_F";
        crew="B_UAV_AI";
        typicalCargo[]=
        {
            "B_UAV_AI"
        };
        hiddenSelectionsTextures[]=
        {
            "\NLD_Drones\Drones\Parrot\data\uav_01_parrot_co.paa"
        };
        textureList[]=
        {
            "Blufor",
            1
        };
        class assembleInfo
        {
            base="";
            primary=1;
            assembleTo="";
            displayName="";
            dissasembleTo[]={};
        };
        class UserActions
        {
            class Drone_Dissassemble
            {
                displayName="Dissassemble Parrot ANAFI (NLD)";
                displayNameDefault="<t align='center'><img image='a3\missions_f_oldman\data\img\holdactions\holdaction_box_ca.paa' size='1.8' /><br/></t><t align='center'>Dissassemble Parrot ANAFI (NLD)</t>";
                condition="alive this && vehicle player == player && ((UAVControl this) select 1 isEqualto '')";
                statement="[player, this, 'Item_BEN_Parrot_ANAFI_Folded'] call BEN_fnc_dissassemble";
                position="";
                priority=5;
                radius=1.8;
                animPeriod=2;
                onlyForplayer=1;
                showWindow=1;
            };
        };
    };
    class BEN_O_Parrot_ANAFI:BEN_B_Parrot_ANAFI
    {
        author=AUTHOR;
        side=0;
        faction="OPF_F";
		crew="O_UAV_AI";
		typicalCargo[]=
		{
			"O_UAV_AI"
		};
        textureList[]=
		{
			"Opfor",
			1
		};
    };
    class BEN_I_Parrot_ANAFI:BEN_B_Parrot_ANAFI
    {
        author=AUTHOR;
        side=2;
		faction="IND_F";
		crew="I_UAV_AI";
		typicalCargo[]=
		{
			"I_Soldier_lite_F"
		};
        textureList[]=
		{
			"Indep",
			1
		};
    };

//Parrot Items
    class Item_Base_F;
    class Item_BEN_Parrot_ANAFI_Folded: Item_Base_F
    {
        author=AUTHOR;
        scope=2;
        scopeCurator=2;
        displayName="Parrot ANAFI Folded (NLD)";
        editorCategory=BEN_Catergorie;
		editorSubcategory=BEN_SubCatParrot;
        model="\NLD_Drones\Drones\Parrot\UAV_01_parrot_folded.p3d";
        icon="\NLD_Drones\Drones\Parrot\data\ui\map_uav_01_parrot_ca.paa";
        picture="\NLD_Drones\Drones\Parrot\data\ui\uav_01_parrot_ca.paa";
        class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0;
			verticalOffsetWorld=0;
			init="''";
		};
        maximumload=0;
        transportMaxBackpacks=0;
        transportMaxMagazines=0;
        transportMaxWeapons=0;
        transportMaxItems=1;
        class TransportItems
        {
            class BEN_Parrot_ANAFI_Folded
            {
                name="BEN_Parrot_ANAFI_Folded";
                count=1;
            };
        };
    };
};

class cfgWeapons
{
    class ItemCore;
    class InventoryItem_Base_F;
    class BEN_Parrot_ANAFI_Folded: ItemCore
    {
        author=AUTHOR;
        displayName="Parrot ANAFI Folded (NLD)";
        model="\NLD_Drones\Drones\Parrot\UAV_01_parrot_folded.p3d";
        scope=2;
		scopeCurator=2;
        scopeArsenal=2;
        picture="\NLD_Drones\Drones\Parrot\data\ui\map_uav_01_parrot_ca.paa";
        descriptionShort = "Inventory item<br/>Douple click on the item to access menu";
        class ItemInfo: InventoryItem_Base_F
        {
            mass=20;
            scope=0;
            type=620;
        };
    };
};
