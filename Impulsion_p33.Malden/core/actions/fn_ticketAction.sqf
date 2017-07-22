/*
	@fichier : fn_ticketAction.sqf
	@credits : par Snake.
	@serveur : Malden (Impulsion)
*/

params [
    ["_unit",objNull,[objNull]]
];

disableSerialization;

if (!(createDialog "life_ticket_give")) exitWith {hint localize "STR_Cop_TicketFail"};
if (isNull _unit || !isPlayer _unit) exitWith {};

ctrlSetText[2651,format[localize "STR_Cop_Ticket",_unit getVariable["realname",name _unit]]];

life_ticket_unit = _unit;
