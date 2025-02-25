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
#include "..\Defines.hpp"

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
			"BEN_Parrot_ANAFI_Folded"
        };
		weapons[]={};
    };
};

class cfgVehicles
{
    class BEN_UAV_01_base_F;
//Parrot Base
    class BEN_Parrot_Base_F: BEN_UAV_01_base_F
    {
        displayName="Parrot ANAFI";
        model="\A3\Drones_F\Air_F_Gamma\UAV_01\UAV_01_F.p3d";
        picture="\NLD_Drones\Drones\Parrot\data\ui\parrot.paa";
    };
//Parrot Drones
    class BEN_Parrot_ANAFI_Folded: BEN_Parrot_Base_F
    {
        displayName="Parrot ANAFI Folded";
        editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_UAV_01_F.jpg";
        _generalMacro="B_UAV_01_F";
        scope=2;
        scopeCurator=2;
        side=1;
        accuracy=0.5;
        faction="BLU_F";
        model="";
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
    class BEN_Parrot_ANAFI: BEN_Parrot_ANAFI_Folded
    {
        author=AUTHOR;
        displayName="Parrot ANAFI (NLD)";
        crew="B_UAV_AI";
        typicalCargo[]=
        {
            "B_UAV_AI"
        };
        hiddenSelectionsTextures[]=
        {
            "\NLD_Drones\Drones\Parrot\data\parrot_co.paa"
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
};
