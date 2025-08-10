NorthFallarbor_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, NorthFallarbor_OnLoad
	.byte 0

NorthFallarbor_OnLoad::
	call_if_unset FLAG_REGI_DOORS_OPENED, NorthFallarbor_EventScript_CloseRegiCave
	end

NorthFallarbor_EventScript_CloseRegiCave::
	setmetatile 15, 15, METATILE_Fallarbor_BrownRockWall, TRUE
	setmetatile 15, 16, METATILE_Fallarbor_BrownRockWall, TRUE

