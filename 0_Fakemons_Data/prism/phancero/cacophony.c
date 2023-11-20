// ----------
// include/constants/abilities.h
// ----------

#define ABILITY_CACOPHONY 299
#define ABILITIES_COUNT_FAKE 300

#define ABILITIES_COUNT ABILITIES_COUNT_FAKE


// ----------
// include/constants/easy_chat.h
// ----------

#define EC_WORD_CACOPHONY    ((EC_GROUP_STATUS << EC_MASK_BITS) | 109)


// ----------
// src/battle_ai_main.c
// ----------

case ABILITY_CACOPHONY:
    if (gBattleMoves[move].soundMove)
		RETURN_SCORE_MINUS(10);
}

if (CountUsablePartyMons(battlerAtk) == 0
  && aiData->abilities[battlerAtk] != ABILITY_SOUNDPROOF
  && aiData->abilities[BATTLE_PARTNER(battlerAtk)] != ABILITY_SOUNDPROOF
  && aiData->abilities[battlerAtk] != ABILITY_CACOPHONY
  && aiData->abilities[BATTLE_PARTNER(battlerAtk)] != ABILITY_CACOPHONY
  && CountUsablePartyMons(FOE(battlerAtk)) >= 1)
{
	score -= 10; //Don't wipe your team if you're going to lose
}
else if ((!IsBattlerAlive(FOE(battlerAtk)) || aiData->abilities[FOE(battlerAtk)] == ABILITY_SOUNDPROOF
  || aiData->abilities[FOE(battlerAtk)] == ABILITY_CACOPHONY
  || gStatuses3[FOE(battlerAtk)] & STATUS3_PERISH_SONG)
  && (!IsBattlerAlive(BATTLE_PARTNER(FOE(battlerAtk))) || aiData->abilities[BATTLE_PARTNER(FOE(battlerAtk))] == ABILITY_SOUNDPROOF
  || aiData->abilities[BATTLE_PARTNER(FOE(battlerAtk))] == ABILITY_CACOPHONY
  || gStatuses3[BATTLE_PARTNER(FOE(battlerAtk))] & STATUS3_PERISH_SONG))
{
	score -= 10; //Both enemies are perish songed
}

if (CountUsablePartyMons(battlerAtk) == 0 && aiData->abilities[battlerAtk] != ABILITY_SOUNDPROOF
  && aiData->abilities[battlerAtk] != ABILITY_CACOPHONY
  && CountUsablePartyMons(battlerDef) >= 1)
	score -= 10;
	
if (gStatuses3[FOE(battlerAtk)] & STATUS3_PERISH_SONG || aiData->abilities[FOE(battlerAtk)] == ABILITY_SOUNDPROOF 
|| aiData->abilities[FOE(battlerAtk)] == ABILITY_CACOPHONY)
	score -= 10;


// ----------
// src/battle_ai_switch_items.c
// ----------

if (gStatuses3[battler] & STATUS3_PERISH_SONG
        && gDisableStructs[battler].perishSongTimer == 0
        && monAbility != ABILITY_SOUNDPROOF && monAbility != ABILITY_CACOPHONY)
        switchMon = TRUE;


// ----------
// src/battle_ai_util.c
// ----------

[ABILITY_CACOPHONY] = 4,

bool32 AnyPartyMemberStatused(u8 battlerId, bool32 checkSoundproof)
{
	//...//
	if (checkSoundproof && (GetMonAbility(&party[i]) == ABILITY_SOUNDPROOF || GetMonAbility(&party[i]) == ABILITY_CACOPHONY))
            continue;
	//...//
}

bool32 ShouldUseWishAromatherapy(u8 battlerAtk, u8 battlerDef, u16 move)
{
	//...//
	if (GetMonData(&party[i], MON_DATA_STATUS, NULL) != STATUS1_NONE)
	{
		if (move != MOVE_HEAL_BELL || (GetMonAbility(&party[i]) != ABILITY_SOUNDPROOF && GetMonAbility(&party[i]) != ABILITY_CACOPHONY))
			hasStatus = TRUE;
	}
	//...//
}


// ----------
// src/battle_util.c
// ----------

static const u8 sAbilitiesAffectedByMoldBreaker[] =
{
	//...//
    [ABILITY_CACOPHONY] = 1,
};

case ENDTURN_UPROAR:  // uproar
	//...//
				if ((gBattleMons[gBattlerAttacker].status1 & STATUS1_SLEEP)
				 && GetBattlerAbility(gBattlerAttacker) != ABILITY_SOUNDPROOF
				 && GetBattlerAbility(gBattlerAttacker) != ABILITY_CACOPHONY)
				 {
	//...//
break;
 
case ABILITYEFFECT_MOVES_BLOCK: // 2
	{
	//...//

		if ((gLastUsedAbility == ABILITY_SOUNDPROOF && gBattleMoves[move].soundMove && !(moveTarget & MOVE_TARGET_USER))
			 || (gLastUsedAbility == ABILITY_CACOPHONY && gBattleMoves[move].soundMove && !(moveTarget & MOVE_TARGET_USER))
             || (gLastUsedAbility == ABILITY_BULLETPROOF && gBattleMoves[move].ballisticMove))
		{
	//...//
break;


// ----------
// src/data/easy_chat/easy_chat_group_status.h
// ----------

const u8 gEasyChatWord_Cacophony[] = _("CACOPHONY");

[EC_INDEX(EC_WORD_CACOPHONY)] =
    {
        .text = gEasyChatWord_Cacophony,
        .alphabeticalOrder = 109,
        .enabled = TRUE,
    },
};


// ----------
// src/data/text/abilities.h
// ----------

static const u8 sCacophonyDescription[] = _("Avoids sound-based moves.");

[ABILITY_CACOPHONY] = _("Cacophony"),

[ABILITY_CACOPHONY] = _("Cacophony"),

[ABILITY_CACOPHONY] = sCacophonyDescription,



