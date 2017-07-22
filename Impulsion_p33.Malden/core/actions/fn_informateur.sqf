#include "..\..\script_macros.hpp"
/*
	@fichier : fn_information.sqf
	@credits : par Snake.
	@serveur : Malden (Impulsion)
*/
private ["_vendor", "_type", "_base"];

_vendor = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_type = [_this,3,"",[""]] call BIS_fnc_param;

if (_vendor in [informateurRessource_PNJ]) then
{
	switch (_type) do
	{
		case "cocaine":
		{
			life_cocaine = true;
			if (life_cash < 20000) exitWith
			{
				hint parseText "Vous n'avez pas <t color='#8cff9b'>20.000 $</t> sur vous.";
				life_cocaine = false;
			};
			life_cash = life_cash - 20000;
			_m = createMarkerLocal ["cocaine_12", [3787.18,8914.2]];
			_m setMarkerColorLocal "ColorYellow";
			_m setMarkerTextLocal "Champs Cocaïne";
			_m setMarkerTypeLocal "Mil_dot";
			_m2 = createMarkerLocal ["zone_cocaine", [3787.18,8914.2]];
			_m2 setMarkerColorLocal "ColorWhite";
			_m2 setMarkerShapeLocal "ellipse";
			_m2 setMarkerBrushLocal "Solid";
			_m2 setMarkerSizeLocal [30,30];
			hint parseText "Information <t color='#1b8ebf'>Champs Cocaïne</t> <t color='#8cff9b'>acheté</t>.";
		};

		case "heroin":
		{
			life_heroin = true;
			if (life_cash < 15000) exitWith
			{
				hint parseText "Vous n'avez pas <t color='#8cff9b'>15.000 $</t> sur vous.";
				life_heroin = false;
			};
			life_cash = life_cash - 15000;
			_m = createMarkerLocal ["heroin_12", [6268.17,7319.13]];
			_m setMarkerColorLocal "ColorYellow";
			_m setMarkerTextLocal "Champs Héroine";
			_m setMarkerTypeLocal "Mil_dot";
			_m2 = createMarkerLocal ["zone_heroin", [6268.17,7319.13]];
			_m2 setMarkerColorLocal "ColorWhite";
			_m2 setMarkerShapeLocal "ellipse";
			_m2 setMarkerBrushLocal "Solid";
			_m2 setMarkerSizeLocal [30,30];
			hint parseText "Information <t color='#1b8ebf'>Champs Héroïne</t> <t color='#8cff9b'>acheté</t>.";
		};

		case "cannabis":
		{
			life_cannabis = true;
			if (life_cash < 10000) exitWith
			{
				hint parseText "Vous n'avez pas <t color='#8cff9b'>10.000 $</t> sur vous.";
				life_cannabis = false;
			};
			life_cash = life_cash - 10000;
			_m = createMarkerLocal ["cannabis_12", [5673.5, 3200.38]];
			_m setMarkerColorLocal "ColorYellow";
			_m setMarkerTextLocal "Champs Cannabis";
			_m setMarkerTypeLocal "Mil_dot";
			_m2 = createMarkerLocal ["zone_cannabis", [5673.5, 3200.38]];
			_m2 setMarkerColorLocal "ColorWhite";
			_m2 setMarkerShapeLocal "ellipse";
			_m2 setMarkerBrushLocal "Solid";
			_m2 setMarkerSizeLocal [30,30];
			hint parseText "Information <t color='#1b8ebf'>Champs Cannabis</t> <t color='#8cff9b'>acheté</t>.";
		};
	};
}
else
{
	switch (_type) do
	{
		case "cocaineProcess":
		{
			life_cocaineProcess = true;
			if (life_cash < 10000) exitWith
			{
				hint parseText "Vous n'avez pas <t color='#8cff9b'>10.000 $</t> sur vous.";
				life_cocaineProcess = false;
			};
			life_cash = life_cash - 10000;
			_m = createMarkerLocal ["cocaine_process", [6093,10751]];
			_m setMarkerColorLocal "ColorPink";
			_m setMarkerTextLocal "Traitement Cocaïne";
			_m setMarkerTypeLocal "Mil_dot";
			hint parseText "Information <t color='#1b8ebf'>Traitement Cocaïne</t> <t color='#8cff9b'>acheté</t>.";
		};

		case "heroinProcess":
		{
			life_heroinProcess = true;
			if (life_cash < 10000) exitWith
			{
				hint parseText "Vous n'avez pas <t color='#8cff9b'>10.000 $</t> sur vous.";
				life_heroinProcess = false;
			};
			life_cash = life_cash - 10000;
			_m = createMarkerLocal ["heroin_process", [6365.45,5378.8]];
			_m setMarkerColorLocal "ColorPink";
			_m setMarkerTextLocal "Traitement Héroine";
			_m setMarkerTypeLocal "Mil_dot";
			hint parseText "Information <t color='#1b8ebf'>Traitement Héroïne</t> <t color='#8cff9b'>acheté</t>.";
		};

		case "cannabisProcess":
		{
			life_cannabisProcess = true;
			if (life_cash < 10000) exitWith
			{
				hint parseText "Vous n'avez pas <t color='#8cff9b'>10.000 $</t> sur vous.";
				life_cannabisProcess = false;
			};
			life_cash = life_cash - 10000;
			_m = createMarkerLocal ["weed_process", [1583.1,4662.74]];
			_m setMarkerColorLocal "ColorPink";
			_m setMarkerTextLocal "Traitement Cannabis/Marijuana";
			_m setMarkerTypeLocal "Mil_dot";
			hint parseText "Information <t color='#1b8ebf'>Traitement Cannabis</t> <t color='#8cff9b'>acheté</t>.";
		};

		case "antiquityProcess":
		{
			life_antiquityProcess = true;
			if (life_cash < 10000) exitWith
			{
				hint parseText "Vous n'avez pas <t color='#8cff9b'>10.000 $</t> sur vous.";
				life_antiquityProcess = false;
			};
			_m = createMarkerLocal ["antiquity_process", [3768.7,7478.11]];
			_m setMarkerColorLocal "ColorPink";
			_m setMarkerTextLocal "Traitement Antiquité";
			_m setMarkerTypeLocal "Mil_dot";
			_m2 = createMarkerLocal ["antiquity_process_2", [6799.09,11436.8]];
			_m2 setMarkerColorLocal "ColorPink";
			_m2 setMarkerTextLocal "Traitement Antiquité";
			_m2 setMarkerTypeLocal "Mil_dot";
			_m3 = createMarkerLocal ["antiquity_process_3", [10517.1,4025.77]];
			_m3 setMarkerColorLocal "ColorPink";
			_m3 setMarkerTextLocal "Traitement Antiquité";
			_m3 setMarkerTypeLocal "Mil_dot";
			hint parseText "Information <t color='#1b8ebf'>Traitement Antiquité (3)</t> <t color='#8cff9b'>achetés</t>.";
		};
	};
};