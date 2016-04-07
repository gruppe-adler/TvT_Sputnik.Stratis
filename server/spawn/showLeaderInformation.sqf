_teamleads= [
"B_Soldier_TL_F",
"B_G_Soldier_TL_F",
"B_recon_TL_F",
"O_G_Soldier_TL_F",
"O_soldierU_F",
"O_Soldier_TL_F",
"O_recon_TL_F",
"O_soldierU_TL_F",
"O_G_officer_F",
"O_Soldier_TL_F",
"O_recon_TL_F",
"O_soldierU_TL_F"
];
_squadleads= [
"B_Soldier_SL_F",
"B_G_Soldier_SL_F",
"O_Soldier_SL_F"
];
_commanders = [
"opfor_assistant",
"opfor_teamlead",
"blufor_assistant",
"blufor_teamlead"
];
_allofthem = _teamleads + _squadleads + _commanders;
_drawIconsStacked = [];

{
	diag_log format ["////////////////////////"];
	diag_log format ["debug attaching helper stuff _x : %1",_x];
	diag_log format ["////////////////////////"];
	_drawIconSymbol = "Sign_Pointer_Cyan_F";



	if ((typeOf _x) in _teamleads) exitWith {
		_drawIconSymbol = "UserTexture1m_F";
		_drawIconTemp = _drawIconSymbol createVehicle position _x;
		_drawIconTemp attachTo [_x,[0,0,2.5]];
		_drawIconTemp setObjectTextureGlobal [0,"\pic\leaderclasses\tl.paa"];
		_drawIconsStacked = _drawIconsStacked + [_drawIconTemp];
	};
	// must be before sqls
	if (str _x in _commanders) exitWith {
		_drawIconSymbol = "UserTexture1m_F";
		_drawIconTemp = _drawIconSymbol createVehicle position _x;
		_drawIconTemp attachTo [_x,[0,0,2.5]];
		_drawIconTemp setObjectTextureGlobal [0,"\pic\leaderclasses\com.paa"];
		_drawIconsStacked = _drawIconsStacked + [_drawIconTemp];
	};
	if ((typeOf _x) in _squadleads) exitWith {
		_drawIconSymbol = "UserTexture1m_F";
		_drawIconTemp = _drawIconSymbol createVehicle position _x;
		_drawIconTemp attachTo [_x,[0,0,2.5]];
		_drawIconTemp setObjectTextureGlobal [0,"\pic\leaderclasses\sql.paa"];
		_drawIconsStacked = _drawIconsStacked + [_drawIconTemp];
	};
	


} forEach allUnits;

waitUntil {time > 300};
{deleteVehicle _x} forEach _drawIconsStacked;

/*
bla = "Sign_Pointer_Yellow_F" createVehicle position player;
bla attachTo [player,[0,0,2.4]];
*/
