/*
	File: fn_droneInit.sqf
	Author: Brainless_Ben

	Description:
	Inspired by "Multiple_drone_in_inventory" mod
	Function for useraction drone init.
*/

if !(isServer) exitWith {};

//Dubbleclick action to item in inventory
[
	"BEN_Parrot_ANAFI_Folded",["CONTAINER","CLOTHES"],["Deploy Parrot ANAFI (NLD)"],
	[],"",[{true},{player call CBA_fnc_canUseWeapon}],
	{
		params ["_unit", "_container", "_item", "_slot", "_params"];
		[player, objNull, _item] call BEN_fnc_deploy;
	},
	false,[]
] call CBA_fnc_addItemContextMenuOption;

{
	//Action to pickup and attach drone to player pelvis
	_x addAction 
	[
		"Pickup Parrot ANAFI (NLD)",
		{
			params ["_target", "_caller", "_actionId", "_arguments"];
			[_caller,cursorObject,""] call BEN_fnc_pickup;
		},nil,1.5,false,true,"",
		"typeOf cursorObject == 'Item_BEN_Parrot_ANAFI_Folded'",
		1.8
	];

	//Action to deploy drone that is attached to player
	_x addAction
	[
		"Deploy Parrot ANAFI (NLD)", 
		{ 
			params ["_target", "_caller", "_actionId", "_arguments"];
			{
				if (_x isKindOf "Item_BEN_Parrot_ANAFI_Folded") then 
				{
					[_caller,_x,""] call BEN_fnc_deploy;
				};
			}forEach (attachedObjects _caller);
		}, nil,1.5,false,true,"",
		"{typeOf _x == 'Item_BEN_Parrot_ANAFI_Folded'} count (attachedObjects _this) == 1",
		1.8
	];

	//EventHandler to convert GroundWeaponHolder to Item_BEN_Parrot_ANAFI_Folded
	_x addEventHandler
	[
		"InventoryClosed",
		{
			params ["_unit","_container"];
			if (typeOf _container == "GroundWeaponHolder") then
			{
				if ("BEN_Parrot_ANAFI_Folded" in ((getItemCargo _container)#0)) then
				{
					_pos = getPosATL _container;
					deleteVehicle _container;
					_new = createVehicle ["Item_BEN_Parrot_ANAFI_Folded", _pos, [], 0, "CAN_COLLIDE"];
				};
			};
		}
	];
}forEach allPlayers;
