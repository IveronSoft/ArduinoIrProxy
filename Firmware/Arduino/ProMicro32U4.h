#pragma once
#include "../IActuator.h"


namespace Firmware
{
	namespace Arduino
	{
		class ProMicro32U4 : IActuator
		{
		public:
			ProMicro32U4();
			virtual ~ProMicro32U4();
		};
	}
}