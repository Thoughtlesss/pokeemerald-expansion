CoastalCave_1F_MapScripts::
	.byte 0

CoastalCave_EventScript_Trainer1::
	trainerbattle_single TRAINER_COASTALCAVE1, CoastalCave_Trainer1Intro, CoastalCave_Trainer1Defeat
	msgbox CoastalCave_Trainer1PostBattle, MSGBOX_AUTOCLOSE
	end

CoastalCave_EventScript_Trainer2::
	trainerbattle_single TRAINER_COASTALCAVE2, CoastalCave_Trainer2Intro, CoastalCave_Trainer2Defeat
	msgbox CoastalCave_Trainer2PostBattle, MSGBOX_AUTOCLOSE
	end

CoastalCave_EventScript_Trainer3::
	trainerbattle_single TRAINER_COASTALCAVE3, CoastalCave_Trainer3Intro, CoastalCave_Trainer3Defeat
	msgbox CoastalCave_Trainer3PostBattle, MSGBOX_AUTOCLOSE
	end


