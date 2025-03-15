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

if !(isServer) exitWith {};

private ["_checkItem","_vehType","_uav","_anim"];
params[
	["_unit",objNull,[objNull]],
	["_drone",objNull,[objNull]],
	["_item","",[""]]
];

_checkItem = if (_item == "") then {typeOf _drone} else {_item};
_vehType = switch (_checkItem) do 
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

_uav = createVehicle [_vehType, _unit getRelPos [1,0], [], 0, "CAN_COLLIDE"];
createVehicleCrew _uav;

if (isNull _drone) then 
{
	_unit removeItem _item;
	closeDialog 602;
}else
{
	detach _drone;
	deleteVehicle _drone;
};

_anim = if (stance _unit == "STAND") then 
{
	"AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon"
} else 
{
	"AinvPknlMstpSrasWrflDnon_Putdown_AmovPknlMstpSrasWrflDnon"
};
[_unit, _anim] remoteExec ["switchMove",0];

true;