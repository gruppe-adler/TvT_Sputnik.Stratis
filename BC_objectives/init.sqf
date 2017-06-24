// init needs to be spawned on server only
params ["_position"];

localRadioPositionMarkers = [];
[_position, 5] call BC_objectives_fnc_createRadioPositionMarker;


if (isServer) then {

	if (PREPARATION_TIME > 0) then {[PREPARATION_TIME] call BC_objectives_fnc_startPreparationTime};

	_min = str ((["GRAD_TICKS_NEEDED", 2700] call BIS_fnc_getParamValue)/60);
	_interval = ["GRAD_INTERVALS_NEEDED", 1] call BIS_fnc_getParamValue;

	if (TRACKING_PERSON) then {
		_taskBlufor = [_min,_interval] call BC_objectives_fnc_afghanTasksBluforCreate;
		_tasksOpfor = [_min,_interval] call BC_objectives_fnc_afghanTasksOpforCreate;

		[_taskBlufor, _tasksOpfor] call BC_objectives_fnc_loopConditions;
	} else {
		_tasksBlufor = [_min] call BC_objectives_fnc_classicTasksBluforCreate;
		_tasksOpfor = [_min] call BC_objectives_fnc_classicTasksOpforCreate;

		[_tasksBlufor, _tasksOpfor] call BC_objectives_fnc_loopConditions;
	};
};

if (hasInterface) then {
	call BC_objectives_fnc_endConditionListener;
};
