/*
	File: droneCamRot.sqf
	Author: Brainless_Ben

	Description:
	Rotate camera up or down.

	Parameters:
	0: Drone <Object>
	2: Up/Down <Boolean>
*/

params [
    ["_drone",(getConnectedUAV player),[(getConnectedUAV player)]],
    ["_upDown", true,[true]]
];

if (isNull _drone) exitWith 
{
    Diag_log "[Drone] (Camera) Object is NIL";
    systemChat "[Drone] (Camera) Object is NIL";
};

_droneControl = UAVControl _drone;
if ((_droneControl select 1) != "DRIVER") exitWith 
{
    Diag_log "[Drone] (Camera) Player is not Pilot";
    systemChat "[Drone] (Camera) Player is not Pilot";
};

_curAngle = deg(_drone animationPhase 'pilotCamRot');

_newAngle = if (_upDown) then
{
    _curAngle + 5;
}else
{
    _curAngle - 5;
};
_newAngle = round _newAngle;

if ((_newAngle >= 60) OR (_newAngle <= -15)) exitWith 
{
    Diag_log "[Drone] (Camera) Rotation is outside scope";
    systemChat "[Drone] (Camera) Rotation is outside scope";
};

_drone animate ['pilotCamRot', (rad _newAngle), true];
