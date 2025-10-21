#include "word.h"
#include "winmain.h"
#include "scenegamemain.h"


Word::Word()
{
	
}

Word::~Word() 
{

}

void Word::Move(int wordType, int chapter)
{
	//åæótÇÃà⁄ìÆ
	switch (wordType) {
	case 1://ñ\åæ		
		switch (chapter)
		{
		case 0:
			y += THOUGHTLESSWORDS_SPEED_CHAPT0;
			break;
		case 1:
			y += THOUGHTLESSWORDS_SPEED_CHAPT1;
			break;
		case 2:
			y += THOUGHTLESSWORDS_SPEED_CHAPT2;
			break;
		case 3:
			y += THOUGHTLESSWORDS_SPEED_CHAPT3;
			break;
		case 4:
			y += THOUGHTLESSWORDS_SPEED_CHAPT4;
			break;
		case 5:
			y += THOUGHTLESSWORDS_SPEED_CHAPT5;
			break;
		}
		_scale += THOUGHTLESSWORDS_SCALE;
		break;

	case 2:	//èÿåæ		
		switch (chapter)
		{
		case 0:
			y += TESTIMONY_SPEED_CHAPT0;
			break;
		case 1:
			y += TESTIMONY_SPEED_CHAPT1;
			break;
		case 2:
			y += TESTIMONY_SPEED_CHAPT2;
			break;
		case 3:
			y += TESTIMONY_SPEED_CHAPT3;
			break;
		case 4:
			y += TESTIMONY_SPEED_CHAPT4;
			break;
		case 5:
			y += TESTIMONY_SPEED_CHAPT5;
			break;
		}
		_scale += TESTIMONY_SCALE;
		break;
	}

}

void Word::EraseWord()
{
	use = 0;
}
