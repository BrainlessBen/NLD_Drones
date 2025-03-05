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
			"BEN_Item_Parrot_ANAFI_Folded"
        };
		weapons[]=
        {
            "BEN_Parrot_ANAFI_Folded"
        };
    };
};

class cfgVehicles
{
    class UAV_01_base_F;
    class BEN_UAV_01_base_F;
//Parrot Base
    class BEN_Parrot_Base_F: UAV_01_base_F
    {
        author=AUTHOR;
        displayName="Parrot ANAFI";
        model="\NLD_Drones\Drones\Parrot\UAV_01_parrot.p3d";
        icon="\NLD_Drones\Drones\Parrot\data\ui\map_uav_01_parrot_ca.paa";
        picture="\NLD_Drones\Drones\Parrot\data\ui\uav_01_parrot_ca.paa";
    };
//Parrot Drones
    class BEN_Parrot_ANAFI: BEN_Parrot_Base_F
    {
        author=AUTHOR;
        displayName="Parrot ANAFI (NLD)";
        editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_UAV_01_F.jpg";// "\NLD_Drones\Drones\Parrot\data\ui\uav_01_parrot.jpg";
        _generalMacro="B_UAV_01_F";
        scope=2;
        scopeCurator=2;
        side=1;
        accuracy=0.5;
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
            primary=1;
            base="";
            assembleTo="";
            displayName="";
            dissasembleTo[]=
            {
                "BEN_Parrot_ANAFI_Folded"
            };
        };
    };
    class Item_Base_f;
    class BEN_Item_Parrot_ANAFI_Folded: Item_Base_f
    {
        author=AUTHOR;
        scope=2;
        scopeCurator=2;
        displayName="Parrot ANAFI Folded";
        editorCategory=BEN_Catergorie;
		editorSubcategory=BEN_SubCatParrot;
        editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_UAV_01_F.jpg";// "\NLD_Drones\Drones\Parrot\data\ui\uav_01_parrot.jpg";
        class TransportItems
        {
            class BEN_Parrot_ANAFI_Folded
            {
                name="BEN_Parrot_ANAFI_Folded";
                count=1;
            };
        };
        class assembleInfo
        {
            primary=1;
            base="";
            assembleTo="";
            displayName="";
            dissasembleTo[]=
            {
                "BEN_Parrot_ANAFI"
            };
        };
    };
};

class cfgWeapons
{
    class ItemCore;
    class BEN_Parrot_ANAFI_Folded:ItemCore
    {
        author=AUTHOR;
        scope=2;
        scopeCurator=2;
        accuracy=0.5;
        displayName="Parrot ANAFI Folded";
        model="\NLD_Drones\Drones\Parrot\UAV_01_parrot_folded.p3d";
        picture="\NLD_Drones\Drones\Parrot\data\ui\uav_01_parrot_ca.paa";
        class ItemInfo
        {
            scope=2;
            mass=3;
            inertia=0.2;
        };
    };
};
