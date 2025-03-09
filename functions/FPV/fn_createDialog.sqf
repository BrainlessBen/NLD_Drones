private _layer = ("BEN_FPV_Layer" call BIS_fnc_rscLayer);
_layer cutRsc ["ArmaFPV_Dialog", "PLAIN"];

call BEN_fnc_handleSettings;
call BEN_fnc_handleBattery;
call BEN_fnc_handleSignal;
call BEN_fnc_handleTime;
