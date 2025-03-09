/*
	File: fn_dissassemble.sqf
	Author: Brainless_Ben

	Description:
	Inspired by "Multiple_drone_in_inventory" mod
	Function for useraction dissassemble drone to make it an item.

	Parameters:
	0: Unit <Object>
	1: Drone <Object>
	2: Type (className) <String> 
*/

if !(hasInterface) exitWith {};

private ["_pos","_anim","_new"];
params [
	["_unit",objNull,[objNull]],
	["_drone",objNull,[objNull]],
	["_type","Item_BEN_Parrot_ANAFI_Folded",["Item_BEN_Parrot_ANAFI_Folded"]]
];

if (isNull _drone OR _type isEqualTo "") exitWith {false};

_pos = getPosATL _drone;
deleteVehicle _drone;

_anim = if (stance player == "STAND") then 
{
	"AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon"
} else 
{
	"AinvPknlMstpSrasWrflDnon_Putdown_AmovPknlMstpSrasWrflDnon"
};
[player,_anim] remoteExec ["switchMove",0];

_new = createVehicle [_type, _pos, [], 0, "CAN_COLLIDE"];

[_unit,_new] call BEN_fnc_pickup;

true;