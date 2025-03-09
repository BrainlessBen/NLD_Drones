/*
	File: fn_assemble.sqf
	Author: Brainless_Ben

	Description:
	Inspired by "Multiple_drone_in_inventory" mod
	Function for useraction assemble the drone.

	Parameters:
	0: Unit <Object>
	2: Source <Object>
*/

if !(hasInterface) exitWith {};

private ["_vehType","_dir","_anim","_uav"];
params[
	["_unit",objNull,[objNull]],
	["_drone",objNull,[objNull]]
];

if (isNull _drone) exitWith {false};

_vehType = switch (typeOf _drone) do 
{
	case "Item_BEN_Parrot_ANAFI_Folded":
	{
		switch (side _unit) do 
		{
			case west: {"BEN_B_Parrot_ANAFI"};
			case opfor: {"BEN_O_Parrot_ANAFI"};
			case independent: {"BEN_I_Parrot_ANAFI"};
		};
	};
	default 
	{
		switch (side _unit) do 
		{
			case west: {"BEN_B_Parrot_ANAFI"};
			case opfor: {"BEN_O_Parrot_ANAFI"};
			case independent: {"BEN_I_Parrot_ANAFI"};
		};
	};
};

_anim = if (stance _unit == "STAND") then 
{
	"AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon"
} else 
{
	"AinvPknlMstpSrasWrflDnon_Putdown_AmovPknlMstpSrasWrflDnon"
};
[_unit, _anim] remoteExec ["switchMove",0];

_dir = _unit getDir _drone;
detach _drone;
deleteVehicle _drone;

_uav = createVehicle [_vehType, getPos _unit, [], 0, "CAN_COLLIDE"];
createVehicleCrew _uav;
_uav setDir _dir;

true;