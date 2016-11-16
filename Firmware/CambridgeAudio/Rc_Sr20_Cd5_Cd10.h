#pragma once

#include "Arduino.h"
#include "../IRemoteControl.h"

namespace Firmware
{
	namespace CambridgeAudio
	{
		class Rc_Sr20_Cd5_Cd10 : IRemoteControl
		{
		private:
			enum ButtonsCode
			{
				// all codes are in extended NEC format
				ADDRESS = 0xC03F,

				// buttons used by Topaz CD5 and CD10 players
				BUTTON_OPEN_CLOSE = 0x02FD,
				BUTTON_1 = 0x0AF5,
				BUTTON_2 = 0x09F6,
				BUTTON_3 = 0x08F7,
				BUTTON_4 = 0x0EF1,
				BUTTON_5 = 0x0DF2,
				BUTTON_6 = 0x0CF3,
				BUTTON_7 = 0x12ED,
				BUTTON_8 = 0x11EE,
				BUTTON_9 = 0x10EF,
				BUTTON_0 = 0x16E9,
				BUTTON_PROGRAM = 0x15EA,
				BUTTON_PROGRAM_CLEAR = 0x14EB,
				BUTTON_PAUSE = 0x07F8,
				BUTTON_STOP = 0x44BB,
				BUTTON_PLAY = 0x45BA,
				BUTTON_SKIP_BACK = 0x48B7,
				BUTTON_SKIP_FWD = 0x49B6,
				BUTTON_REWIND = 0x4CB3,
				BUTTON_FORWARD = 0x4DB2,

				// buttons used by Topaz SR10 and SR20 amplifiers
				BUTTON_MENU = 0x5AA5,
				BUTTON_MUTE = 0x00FF,
				BUTTON_VOL_UP = 0x1DE2,
				BUTTON_VOL_DOWN = 0x5EA1,
				BUTTON_SPKRS = 0x1AE5,
				BUTTON_STEREO_MONO = 0x19E6,
				BUTTON_TUNNER_MODE = 0x18E7,
				BUTTON_TUNNER_SCAN_DWN = 0x1EE1,
				BUTTON_TUNNER_SCAN_UP = 0x1CE3,
				BUTTON_PRESET_1_5 = 0x03FC,
				BUTTON_PRESET_2_6 = 0x40BF,
				BUTTON_PRESET_3_7 = 0x42BD,
				BUTTON_PRESET_4_8 = 0x41BE,
				BUTTON_SRC_CD = 0x1BE4,
				BUTTON_SRC_FM = 0x58A7,
				BUTTON_SRC_AM = 0x59A6,
				BUTTON_SRC_DVD = 0x1FE0,
				BUTTON_SRC_AUX = 0x5CA3,
				BUTTON_SRC_PHONO = 0x5DA2,
				BUTTON_SEL_SOURCE = 0x52AD
			};

			inline uint16_t getAdress(const unsigned long & receivedCode) const;
			inline uint16_t getCommand(const unsigned long & receivedCode) const;

		public:
			Rc_Sr20_Cd5_Cd10();
			virtual ~Rc_Sr20_Cd5_Cd10();

			EUnifiedActions getInterpretedCode(const unsigned long & receivedCode);
		};

		inline uint16_t Rc_Sr20_Cd5_Cd10::getAdress(const unsigned long & receivedCode) const
		{
			#ifdef DEBUG
			Serial.print("\t2 Byte Address = ");
			Serial.println(((receivedCode >> 16) & 0x0000FFFF), HEX);
			#endif

			// get read of the first 2 bytes (0 and 1) then return next two bytes (bytes 2 and 3)
			return ((receivedCode >> 16) & 0x0000FFFF);
		}

		inline uint16_t Rc_Sr20_Cd5_Cd10::getCommand(const unsigned long & receivedCode) const
		{
			#ifdef DEBUG
			Serial.print("\t2 Byte Command = ");
			Serial.println((receivedCode & 0x0000FFFF), HEX);
			#endif

			// return bytes 0 and 1
			return (receivedCode & 0x0000FFFF);
		}
	}
}