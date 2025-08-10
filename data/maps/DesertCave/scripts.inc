.set LOCALID_ROCKRUFF, 5

DesertCave_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, DesertCave_OnResume
	map_script MAP_SCRIPT_ON_LOAD, DesertCave_OnLoad
	.byte 0

DesertCave_OnLoad::
	call_if_unset FLAG_ROCKRUFF_CAUGHT, EventScript_ShowRockruff
	call_if_set FLAG_ROCKRUFF_CAUGHT, EventScript_HideRockruff
	end
	
DesertCave_OnResume:
	call_if_set FLAG_ROCKRUFF_CAUGHT, EventScript_Rockruff_Caught
	end

EventScript_ShowRockruff::
	clearflag FLAG_HIDE_ROCKRUFF
	addobject LOCALID_ROCKRUFF
	return

EventScript_BattleRockruff::
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	waitse
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_ROCKRUFF, 25
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Rockruff_Caught
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, EventScript_HideRockruff
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, EventScript_HideRockruff
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, EventScript_HideRockruff
	release
	end

EventScript_Rockruff_Caught::
	setflag FLAG_ROCKRUFF_CAUGHT
	goto EventScript_HideRockruff
	end

EventScript_HideRockruff::
	setflag FLAG_HIDE_ROCKRUFF
	removeobject LOCALID_ROCKRUFF
	end

Desert_Ext_EventScript_Trainer6::
	trainerbattle_single TRAINER_DESERTEXT6, DesertExt_Text_Trainer6Intro, DesertExt_Text_Trainer6Defeat
	msgbox DesertExt_Text_Trainer6PostBattle, MSGBOX_AUTOCLOSE
	end

Desert_Ext_EventScript_Trainer7::
	trainerbattle_single TRAINER_DESERTEXT7, DesertExt_Text_Trainer7Intro, DesertExt_Text_Trainer7Defeat
	msgbox DesertExt_Text_Trainer7PostBattle, MSGBOX_AUTOCLOSE
	end


