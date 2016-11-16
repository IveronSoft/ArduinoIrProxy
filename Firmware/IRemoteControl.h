#pragma once
#include "../EUnifiedActions.h"

namespace Firmware
{
	class IRemoteControl
	{
	public:
		virtual ~IRemoteControl() {};

		virtual EUnifiedActions getInterpretedCode(const unsigned long & receivedCode) = 0;
	};
}