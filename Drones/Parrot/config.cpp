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

Move Erect/Kneel/Prone
    AwopPercMstpSoptWbinDnon_AmovPercMstpSnonWnonDnon
    AwopPercMstpSoptWbinDnon_AmovPercMstpSnonWnonDnon_end

    AwopPknlMstpSoptWbinDnon_AmovPknlMstpSnonWnonDnon
    AwopPknlMstpSoptWbinDnon_AmovPknlMstpSnonWnonDnon_end

    AwopPpneMstpSoptWbinDnon_AmovPpneMstpSnonWnonDnon
    AwopPpneMstpSoptWbinDnon_AmovPpneMstpSnonWnonDnon_end
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
			"NLD_Drones"
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
    class UAV_01_base_F;
    class BEN_UAV_01_base_F;
    class BEN_Parrot_Base_F: UAV_01_base_F
    {
        author=AUTHOR;
        icon="\NLD_Drones\Drones\Parrot\data\ui\map_uav_01_parrot_ca.paa";
        picture="\NLD_Drones\Drones\Parrot\data\ui\uav_01_parrot_ca.paa";
        accuracy=Drone1_Accuracy;
		camouflage=Drone1_Camoflage;
		audible=Drone1_Audible;
		armor=Drone1_Armor;
		cost=Drone1_Cost;
		altFullForce=Drone1_AltFullForce;
		altNoForce=Drone1_AltNoForce;
        startDuration=Drone1_StartDuration;
		maxSpeed=Drone1_MaxSpeed;
		precision=Drone1_Precision;
		steerAheadSimul=Drone1_SteerAheadSimul;
		steerAheadPlan=Drone1_SteerAheadPlan;
		predictTurnPlan=Drone1_PreductTurnPlan;
		predictTurnSimul=Drone1_PredictTurnSimul;
		liftForceCoef=Drone1_LiftForce;
		cyclicAsideForceCoef=Drone1_CyclicAsideForce;
		cyclicForwardForceCoef=Drone1_CyclicForwardForce;
		bodyFrictionCoef=Drone1_BodyFriction;
		backRotorForceCoef=Drone1_BackRotorForce;
		fuelCapacity=Drone1_FuelCap;
        mainRotorSpeed=Drone1_MainRotorSpeed;
		backRotorSpeed=Drone1_BackRotorSpeed;
		tailBladeVertical=Drone1_TailBladeVertical;
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

//Parrot Drones
    class BEN_B_Parrot_ANAFI: BEN_Parrot_Base_F
    {
        author=AUTHOR;
        displayName="Parrot ANAFI (NLD)";
        editorPreview="\NLD_Drones\Drones\Parrot\data\ui\uav_01_parrot.jpg";
        model="\NLD_Drones\Drones\Parrot\UAV_01_parrot.p3d";
        _generalMacro="B_UAV_01_F";
        scope=2;
        scopeCurator=2;
        scopeArsenal=2;
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
                userActionID=52;
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
		accuracy=0.5;
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
    class Item_ToolKit;
    class Item_BEN_Parrot_ANAFI_Folded: Item_ToolKit
    {
        author=AUTHOR;
        scope=2;
        scopeCurator=2;
        displayName="Parrot ANAFI Folded (NLD)";
        model="\NLD_Drones\Drones\Parrot\UAV_01_parrot_folded.p3d";
        icon="\NLD_Drones\Drones\Parrot\data\ui\map_uav_01_parrot_ca.paa";
        picture="\NLD_Drones\Drones\Parrot\data\ui\uav_01_parrot_ca.paa";
        editorCategory=BEN_Catergorie;
		editorSubcategory=BEN_SubCatParrot;
        editorPreview="\NLD_Drones\Drones\Parrot\data\ui\uav_01_parrot.jpg";
        class TransportItems
        {
            class BEN_Parrot_ANAFI_Folded
            {
                name="BEN_Parrot_ANAFI_Folded";
                count=1;
            };
        };
        class UserActions
        {
            class Drone_Pickup
            {
                userActionID=53;
                displayName="Pickup Parrot ANAFI (NLD)";
                displayNameDefault="<t align='center'><img image='a3\missions_f_oldman\data\img\holdactions\holdaction_box_ca.paa' size='1.8' /><br/></t><t align='center'>Assemble Parrot ANAFI (NLD)</t>";
                condition="alive this";
                statement="[player,this] call BEN_fnc_pickup";
                position="";
                priority=1;
                radius=1.8;
                animPeriod=2;
                onlyForplayer=1;
                showWindow=0;
            };
            class Drone_Deploy
            {
                userActionID=54;
                displayName="Deploy Parrot ANAFI (NLD)";
                displayNameDefault="<t align='center'><img image='a3\missions_f_oldman\data\img\holdactions\holdaction_box_ca.paa' size='1.8' /><br/></t><t align='center'>Assemble Parrot ANAFI (NLD)</t>";
                condition="this in attachedObject player";
                statement="[player,this] call BEN_fnc_deploy";
                position="";
                priority=1;
                radius=1.8;
                animPeriod=2;
                onlyForplayer=1;
                showWindow=0;
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
        scopeArsenal=2;
		scopeCurator=2;
        picture="\NLD_Drones\Drones\Parrot\data\ui\map_uav_01_parrot_ca.paa";
        descriptionShort="Inventory item for drone";
        class ItemInfo: InventoryItem_Base_F
        {
            mass=30;
            scope=0;
            type=620;
        };
    };
};
