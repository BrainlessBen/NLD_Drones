/*
	File: fn_pickup.sqf
	Author: Brainless_Ben

	Description:
	Inspired by "Multiple_drone_in_inventory" mod
	Function to attach drone to player with check.

	Parameters:
	0: Unit <Object>
	2: Source <Object>
*/

if !(isServer) exitWith {};

private ["_vehType","_conDir","_conAngle","_conPitch"];
params[
	["_unit",objNull,[objNull]],
	["_drone",objNull,[objNull]]
];

if ({typeOf _x == 'Item_BEN_Parrot_ANAFI_Folded'} count (attachedObjects _unit) == 1) exitWith 
{
	hintSilent "Drone already attached";
	false;
};

_anim = if (stance _unit == "STAND") then 
{
	"AinvPercMstpSrasWrflDnon_Putdown_AmovPercMstpSrasWrflDnon"
} else 
{
	"AinvPknlMstpSrasWrflDnon_Putdown_AmovPknlMstpSrasWrflDnon"
};
[_unit, _anim] remoteExec ["switchMove",0];

_drone attachTo [_unit,[-0.175,-0.075,-0.025],"pelvis",true];

_conDir = 180;
_conAngle = -90;
_conPitch = -45;
_drone setVectorDirAndUp [
	[
		(sin(_conDir)*cos(_conAngle)),
		(cos(_conDir)*cos(_conAngle)),
		(sin(_conAngle))
	],
	[
		(cos(_conDir)*cos(_conAngle)*sin(_conPitch)),
		(sin(_conDir)*cos(_conAngle)*sin(_conPitch)),
		(cos(_conAngle)*cos(_conPitch))
	]
];

true;