params ["_uav"];

waitUntil {time > 1};

_uav disableAI "ALL";
_uav setVariable ["BEN_jammer_customUavBehavior", true, true];

