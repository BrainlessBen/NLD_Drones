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

//Parrot Base
class BEN_Parrot_Base_F: BEN_UAV_01_base_F
{
    displayName="Parrot ANAFI";
};
//Parrot Drones
class BEN_Parrot_ANAFI: BEN_Parrot_Base_F
{
    author=AUTHOR;
    displayName="Parrot ANAFI (NLD)";
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
    /*
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
    */
};
