["InitializePlayer", [player, true]] call BIS_fnc_dynamicGroups;
0 = execVM "spawn\addInteractions.sqf";

[{!isNil "TRACKING_PERSON"}, {

	if (!TRACKING_PERSON) then {
		
	} else {
		0 = execVM "grad_waverespawn\init.sqf";
	};

}, []] call CBA_fnc_waitUntilAndExecute;

["hideHud", [true, true, true, true, true, true, true, true]] call ace_common_fnc_showHud; // fix for action menu crosshair info