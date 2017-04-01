_thisUnit = _this select 0;
_group = group _thisUnit;

if (vehicle _thisUnit != _thisUnit && random 2 > 0.5) then {
	dostop _thisUnit; 
	sleep 1;	
	_group leaveVehicle (vehicle _thisUnit);
};

diag_log format ["civ %1 is faking a human", _thisUnit];

_pos = [position _thisUnit] call GRAD_civs_fnc_findPositionOfInterest;

_pos = [_thisUnit,[50,1000],random 360] call SHK_pos;
_thisUnit doMove _pos;
_thisUnit setSpeedMode "FULL";
_thisUnit forceSpeed 20;
_thisUnit playMove "SprintCivilBaseDf";				
_thisUnit setVariable ["GRAD_fleeing", true];

diag_log format ["civ %1 is fake fleeing to %2", _thisUnit, _pos];

sleep 60;

[group _thisUnit, _pos, 400 - (random 300), [3,6], [0,2,10]] call GRAD_civs_fnc_taskPatrol;
_thisUnit setVariable ["GRAD_fleeing", false];
_thisUnit enableDynamicSimulation true;
