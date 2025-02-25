private _layer = ("BEN_FPV_Layer" call BIS_fnc_rscLayer);
_layer cutRsc ["ArmaFPV_Dialog", "PLAIN"];

call BEN_fnc_fpv_handleSettings;
call BEN_fnc_fpv_handleBattery;
call BEN_fnc_fpv_handleSignal;
call BEN_fnc_fpv_handleTime;
