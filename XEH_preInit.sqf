[ 
    "FPV_DroneText_NLD",
    "EDITBOX",
    ["Default Text", "Enter the text"],
    "FPV Settings (NLD)",
    "",
    0
] call cba_settings_fnc_init;

[
    "FPV_isUavCaptive_NLD",
    "CHECKBOX",
    ["AI Cannot See FPV Drones", ""],
    "FPV Settings (NLD)",
    true,
    1,
    { publicVariable "FPV_isUavCaptive_NLD" }
] call cba_settings_fnc_init;

[
    "FPV_MaxFlightDistance_NLD", 
    "SLIDER",   
    ["Max Flight Distance", ""], 
    "FPV Settings (NLD)", 
    [4000, 12000, 1500, 0],
    1,
    { publicVariable "FPV_MaxFlightDistance_NLD" }
] call cba_settings_fnc_init;
