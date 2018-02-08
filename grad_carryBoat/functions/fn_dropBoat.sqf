#include "\z\ace\addons\main\script_component.hpp"
#include "\z\ace\addons\main\script_macros.hpp"

params ["_boat"];

detach _boat;
addCamShake [10, 1, 3];
_boat setVelocity [velocity player select 0, velocity player select 1, 1];
(findDisplay 46) displayRemoveEventHandler ["MouseButtonDown", _mouseClickEH];
(findDisplay 46) displayRemoveEventHandler ["MouseZChanged", _mouseWheelEH];

// play sound depending on fatigue
if (getFatigue player < 0.4) then {
  playSound "release_easy";
};
if (getFatigue player >= 0.4 && getFatigue player < 0.75) then {
  playSound "release_medium";
};
if (getFatigue player >= 0.75) then {
  playSound "release_hard";
};

[] call EFUNC(interaction,hideMouseHint);

inGameUISetEventHandler ["PrevAction", "false"];
inGameUISetEventHandler ["NextAction", "false"];
player setVariable ["GRAD_carryBoat_status",0];
player setVariable ["GRAD_carryBoat_boatObj", objNull];
_boat allowdamage true;
