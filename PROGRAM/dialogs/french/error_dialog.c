਍瘀漀椀搀 倀爀漀挀攀猀猀䐀椀愀氀漀最䔀瘀攀渀琀⠀⤀ഀഀ
{਍ऀ爀攀昀 一倀䌀栀愀爀㬀ഀഀ
	aref Link, NextDiag;਍ഀഀ
	DeleteAttribute(&Dialog,"Links");਍ഀഀ
	makeref(NPChar,CharacterRef);਍ऀ洀愀欀攀愀爀攀昀⠀䰀椀渀欀Ⰰ 䐀椀愀氀漀最⸀䰀椀渀欀猀⤀㬀ഀഀ
	makearef(NextDiag, NPChar.Dialog);਍ഀഀ
	switch(Dialog.CurrentNode)਍ऀ笀ഀഀ
		// -----------------------------------Диалог первый - первая встреча਍ऀऀ挀愀猀攀 ∀䘀椀爀猀琀 琀椀洀攀∀㨀ഀഀ
			਍ऀऀऀ搀椀愀氀漀最⸀琀攀砀琀 㴀 ∀䔀爀爀漀爀 漀瀀攀渀椀渀最 搀椀愀氀漀最 昀椀氀攀⸀∀㬀ഀഀ
			if(CheckAttribute(CharacterRef, "Dialog.Filename"))਍ऀऀऀ笀ഀഀ
				dialog.text = "Dialog file for that character " + CharacterRef.Dialog.Filename + ", could not be opened.";਍ऀऀऀ紀ഀഀ
			link.l1 = "ok";਍ऀऀऀ氀椀渀欀⸀氀㄀⸀最漀 㴀 ∀䔀砀椀琀∀㬀ഀഀ
			NextDiag.TempNode = "First time";਍ऀऀ戀爀攀愀欀㬀ഀഀ
਍ऀऀ挀愀猀攀 ∀䔀砀椀琀∀㨀ഀഀ
			NextDiag.CurrentNode = NextDiag.TempNode;਍ऀऀऀ䐀椀愀氀漀最䔀砀椀琀⠀⤀㬀ഀഀ
		break;਍ऀ紀ഀഀ
}਍�