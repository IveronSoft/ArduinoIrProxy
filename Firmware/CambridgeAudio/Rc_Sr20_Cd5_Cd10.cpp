#include "Rc_Sr20_Cd5_Cd10.h"

using namespace Firmware::CambridgeAudio;

Rc_Sr20_Cd5_Cd10::Rc_Sr20_Cd5_Cd10()
{}


Rc_Sr20_Cd5_Cd10::~Rc_Sr20_Cd5_Cd10()
{}

EUnifiedActions Rc_Sr20_Cd5_Cd10::getInterpretedCode(const unsigned long &receivedCode)
{
	// verify address
	if (ButtonsCode::ADDRESS != getAdress(receivedCode))
		return EUnifiedActions::ADDRESS_IGNORED;

	// return consistent action
	switch (getCommand(receivedCode))
	{
		case ButtonsCode::BUTTON_OPEN_CLOSE:
			#ifdef DEBUG
			Serial.println("\tACTION_BUTTON_OPEN");
			#endif
			return EUnifiedActions::BUTTON_OPEN;

		case ButtonsCode::BUTTON_1:
			#ifdef DEBUG
			Serial.println("\tACTION_BUTTON_1");
			#endif
			return EUnifiedActions::BUTTON_1;

		case ButtonsCode::BUTTON_2:
			#ifdef DEBUG
			Serial.println("\tACTION_BUTTON_2");
			#endif
			return EUnifiedActions::BUTTON_2;

		case ButtonsCode::BUTTON_3:
			#ifdef DEBUG
			Serial.println("\tACTION_BUTTON_3");
			#endif
			return EUnifiedActions::BUTTON_3;

		case ButtonsCode::BUTTON_4:
			#ifdef DEBUG
			Serial.println("\tACTION_BUTTON_4");
			#endif
			return EUnifiedActions::BUTTON_4;

		case ButtonsCode::BUTTON_5:
			#ifdef DEBUG
			Serial.println("\tACTION_BUTTON_5");
			#endif
			return EUnifiedActions::BUTTON_5;

		case ButtonsCode::BUTTON_6:
			#ifdef DEBUG
			Serial.println("\tACTION_BUTTON_6");
			#endif
			return EUnifiedActions::BUTTON_6;

		case ButtonsCode::BUTTON_7:
			#ifdef DEBUG
			Serial.println("\tACTION_BUTTON_7");
			#endif
			return EUnifiedActions::BUTTON_7;

		case ButtonsCode::BUTTON_8:
			#ifdef DEBUG
			Serial.println("\tACTION_BUTTON_8");
			#endif
			return EUnifiedActions::BUTTON_8;

		case ButtonsCode::BUTTON_9:
			#ifdef DEBUG
			Serial.println("\tACTION_BUTTON_9");
			#endif
			return EUnifiedActions::BUTTON_9;

		case ButtonsCode::BUTTON_0:
			#ifdef DEBUG
			Serial.println("\tACTION_BUTTON_0");
			#endif
			return EUnifiedActions::BUTTON_0;

		case ButtonsCode::BUTTON_PROGRAM:
			#ifdef DEBUG
			Serial.println("\tACTION_BUTTON_PROGRAM");
			#endif
			return EUnifiedActions::BUTTON_IGNORED;

		case ButtonsCode::BUTTON_PROGRAM_CLEAR:
			#ifdef DEBUG
			Serial.println("\tACTION_BUTTON_CLEAR");
			#endif
			return EUnifiedActions::BUTTON_IGNORED;

		case ButtonsCode::BUTTON_PAUSE:
			#ifdef DEBUG
			Serial.println("\tACTION_BUTTON_PAUSE");
			#endif
			return EUnifiedActions::BUTTON_PAUSE;

		case ButtonsCode::BUTTON_STOP:
			#ifdef DEBUG
			Serial.println("\tACTION_BUTTON_STOP");
			#endif
			return EUnifiedActions::BUTTON_STOP;

		case ButtonsCode::BUTTON_PLAY:
			#ifdef DEBUG
			Serial.println("\tACTION_BUTTON_PLAY");
			#endif
			return EUnifiedActions::BUTTON_PLAY;

		case ButtonsCode::BUTTON_SKIP_BACK:
			#ifdef DEBUG
			Serial.println("\tACTION_BUTTON_PREVIOUS");
			#endif
			return EUnifiedActions::BUTTON_PREVIOUS;

		case ButtonsCode::BUTTON_SKIP_FWD:
			#ifdef DEBUG
			Serial.println("\tACTION_BUTTON_NEXT");
			#endif
			return EUnifiedActions::BUTTON_NEXT;

		case ButtonsCode::BUTTON_REWIND:
			#ifdef DEBUG
			Serial.println("\tACTION_BUTTON_REWIND");
			#endif
			return EUnifiedActions::BUTTON_REWIND;

		case ButtonsCode::BUTTON_FORWARD:
			#ifdef DEBUG
			Serial.println("\tACTION_BUTTON_FORWARD");
			#endif
			return EUnifiedActions::BUTTON_FORWARD;

		default:
			#ifdef DEBUG
			Serial.println("\tUnknown code");
			#endif
			return EUnifiedActions::BUTTON_ERROR;
	}
}