#include "IRremote.h"
#include "Firmware/CambridgeAudio/Rc_Sr20_Cd5_Cd10.h"
#include "Firmware/Arduino/ProMicro32U4.h"

#define DEBUG

enum Settings
{
	RECV_PIN = 11
};

EUnifiedActions recievedCommand{EUnifiedActions::BUTTON_NOT_PRESSED};

decode_results decodedResults;
IRrecv irRecv(RECV_PIN);

Firmware::CambridgeAudio::Rc_Sr20_Cd5_Cd10 remoteControl;
Firmware::Arduino::ProMicro32U4 actuator;

void setup()
{
	#ifdef DEBUG
	Serial.begin(9600);
	Serial.println("Enabling Receiver");
	#endif
	irRecv.enableIRIn();
}

void loop()
{
	// is signal received
	if (irRecv.decode(&decodedResults))
	{

		#ifdef DEBUG
		// show the raw received code
		Serial.println("Current code");
		Serial.print("\tDecoded as: ");
		Serial.println(decodedResults.decode_type, HEX);
		Serial.print("\tReceived code: ");
		Serial.println(decodedResults.value, HEX);
		#endif

		recievedCommand = remoteControl.getInterpretedCode(decodedResults.value);

		switch (recievedCommand)
		{
			case ADDRESS_IGNORED:
				#ifdef DEBUG
				Serial.println("Loop::Address received ignored");
				#endif
				break;

			case BUTTON_NOT_PRESSED:
				#ifdef DEBUG
				Serial.println("Loop::Button not pressed");
				#endif
				break;

			case BUTTON_ERROR:
				#ifdef DEBUG
				Serial.println("Loop::Button not recognised");
				#endif
				break;

			case BUTTON_IGNORED:
				#ifdef DEBUG
				Serial.println("Loop::Button ignored");
				#endif
				break;

				//case BUTTON_1:
				//	break;
				//case BUTTON_2:
				//	break;
				//case BUTTON_3:
				//	break;
				//case BUTTON_4:
				//	break;
				//case BUTTON_5:
				//	break;
				//case BUTTON_6:
				//	break;
				//case BUTTON_7:
				//	break;
				//case BUTTON_8:
				//	break;
				//case BUTTON_9:
				//	break;
				//case BUTTON_0:
				//	break;
				//case BUTTON_OPEN:
				//	break;
				//case BUTTON_CLOSE:
				//	break;

			case BUTTON_PLAY:
				#ifdef DEBUG
				Serial.println("Loop::Button Play");
				#endif
				if (!actuator.doPlay())
				{
					#ifdef DEBUG
					Serial.println("Loop::doPlay Returned False! Maybe not implemented?");
					#endif
				}

				break;

			case BUTTON_PAUSE:
				#ifdef DEBUG
				Serial.println("Loop::Button Pause");
				#endif

				if (!actuator.doPause())
				{
					#ifdef DEBUG
					Serial.println("Loop::doPause Returned False! Maybe not implemented?");
					#endif
				}

				break;

			case BUTTON_STOP:
				#ifdef DEBUG
				Serial.println("Loop::Button Stop");
				#endif
				if (actuator.doStop())
				{
					#ifdef DEBUG
					Serial.println("Loop::doStop Returned False! Maybe not implemented?");
					#endif
				}


				break;

			case BUTTON_NEXT:
				#ifdef DEBUG
				Serial.println("Loop::Button Next");
				#endif
				if (actuator.doNext())
				{
					#ifdef DEBUG
					Serial.println("Loop::doNext Returned False! Maybe not implemented?");
					#endif
				}

				break;

			case BUTTON_PREVIOUS:
				#ifdef DEBUG
				Serial.println("Loop::Button Prev");
				#endif
				if (actuator.doPrevious())
				{
					#ifdef DEBUG
					Serial.println("Loop::doPrevious Returned False! Maybe not implemented?");
					#endif
				}


				break;

			case BUTTON_FORWARD:
				#ifdef DEBUG
				Serial.println("Loop::Button Fwd");
				#endif
				if (actuator.doForward())
				{
					#ifdef DEBUG
					Serial.println("Loop::doForward Returned False! Maybe not implemented?");
					#endif
				}

				break;

			case BUTTON_REWIND:
				#ifdef DEBUG
				Serial.println("Loop::Button Rew");
				#endif
				if (actuator.doRewind())
				{
					#ifdef DEBUG
					Serial.println("Loop::doRewind Returned False! Maybe not implemented?");
					#endif
				}


				break;

				//case BUTTON_MUTE:
				//	break;
				//case BUTTON_SEL_SPKRS:
				//	break;
				//case BUTTON_STEREO_MONO:
				//	break;
				//case BUTTON_TUNER_MODE:
				//	break;
				//case BUTTON_VOL_UP:
				//	break;
				//case BUTTON_VOL_DOWN:
				//	break;
				//case BUTTON_TUNER_SCAN_UP:
				//	break;
				//case BUTTON_TUNER_SCAN_DOWN:
				//	break;
				//case BUTTON_PRESET_1:
				//	break;
				//case BUTTON_PRESET_2:
				//	break;
				//case BUTTON_PRESET_3:
				//	break;
				//case BUTTON_PRESET_4:
				//	break;
				//case BUTTON_PRESET_5:
				//	break;
				//case BUTTON_PRESET_6:
				//	break;
				//case BUTTON_PRESET_7:
				//	break;
				//case BUTTON_PRESET_8:
				//	break;
				//case BUTTON_PRESET_9:
				//	break;
				//case BUTTON_PRESET_0:
				//	break;
				//case BUTTON_SRC_SELECT:
				//	break;
				//case BUTTON_SRC_CD:
				//	break;
				//case BUTTON_SRC_FM:
				//	break;
				//case BUTTON_SRC_AM:
				//	break;
				//case BUTTON_SRC_DVD:
				//	break;
				//case BUTTON_SRC_MP3:
				//	break;
				//case BUTTON_SRC_AUX:
				//	break;
				//case BUTTON_SRC_PHONO:
				//	break;

			default:
				#ifdef DEBUG
				Serial.println("Loop::Button ignored");
				#endif
				break;
		}

		// resume receiving codes
		irRecv.resume();
	}
}
