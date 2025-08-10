LostleafBush_MapScripts::
	.byte 0

LostleafBush_EventScript_BugCatcher1::
	msgbox LostleafBush_Text_Rare_Bugs, MSGBOX_NPC
	end

LostleafBush_EventScript_BugCatcher2::
	msgbox LostleafBush_Text_Scyther, MSGBOX_NPC
	end

LostleafBush_Text_Rare_Bugs:
	.string "I'm looking for rare bug pokemon.\n"
	.string "here. I've found a couple so far…$"

LostleafBush_Text_Scyther:
	.string "I've heard there's items to evolve\n"
	.string "Scyther here, but I haven't been\n"
	.string "able to find them yet.$"

