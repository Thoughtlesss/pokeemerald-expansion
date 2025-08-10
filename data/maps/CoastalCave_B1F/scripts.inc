CoastalCave_B1F_MapScripts::
	.byte 0

CoastalCave_EventScript_Trainer4::
	trainerbattle_single TRAINER_COASTALCAVE4, CoastalCave_Trainer4Intro, CoastalCave_Trainer4Defeat
	msgbox CoastalCave_Trainer4PostBattle, MSGBOX_AUTOCLOSE
	end

CoastalCave_EventScript_Trainer5::
	trainerbattle_single TRAINER_COASTALCAVE5, CoastalCave_Trainer5Intro, CoastalCave_Trainer5Defeat
	msgbox CoastalCave_Trainer5PostBattle, MSGBOX_AUTOCLOSE
	end


