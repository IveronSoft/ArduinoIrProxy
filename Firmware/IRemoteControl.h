#pragma once
#include "../EUnifiedActions.h"

namespace Firmware
{
	class IRemoteControl
	{
	public:
		IRemoteControl() {}
		virtual ~IRemoteControl() {}

		virtual EUnifiedActions getInterpretedCode(const unsigned long & receivedCode) = 0;
	};
}