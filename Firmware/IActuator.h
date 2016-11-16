#pragma once
#include "../EUnifiedActions.h"

namespace Firmware
{
	class IActuator
	{
	public:
		IActuator() {}
		virtual ~IActuator() {}

		inline virtual bool doPause();
		inline virtual bool doStop();
		inline virtual bool doNext();
		inline virtual bool doPrevious();
		inline virtual bool doForward();
		inline virtual bool doRewind();
		inline virtual bool doOne();
		inline virtual bool doTwo();
		inline virtual bool doThree();
		inline virtual bool doFour();
		inline virtual bool doFive();
		inline virtual bool doSix();
		inline virtual bool doSeven();
		inline virtual bool doEight();
		inline virtual bool doNine();
		inline virtual bool doZero();
		inline virtual bool doOpen();
		inline virtual bool doClose();
		inline virtual bool doMute();
		inline virtual bool doSelSpkrs();
		inline virtual bool doStereoMono();
		inline virtual bool doTunerMode();
		inline virtual bool doVolUp();
		inline virtual bool doVolDown();
		inline virtual bool doTunerScanUp();
		inline virtual bool doTunerScanDown();
		inline virtual bool doPresetOne();
		inline virtual bool doPresetTwo();
		inline virtual bool doPresetThree();
		inline virtual bool doPresetFour();
		inline virtual bool doPresetFive();
		inline virtual bool doPresetSix();
		inline virtual bool doPresetSeven();
		inline virtual bool doPresetEight();
		inline virtual bool doPresetNine();
		inline virtual bool doPresetZero();
		inline virtual bool doSrcSelect();
		inline virtual bool doSrcFm();
		inline virtual bool doSrcAm();
		inline virtual bool doSrcDvd();
		inline virtual bool doSrcCd();
		inline virtual bool doSrcMp3();
		inline virtual bool doSrcAux();
		inline virtual bool doSrcPhono();
		inline virtual bool doSrcTape();
		inline virtual bool doAnalogOne();
		inline virtual bool doAnalogTwo();
		inline virtual bool doAnalogThree();
		inline virtual bool doAnalogFour();
		inline virtual bool doAnalogFive();
		inline virtual bool doAnalogSix();
		inline virtual bool doAnalogSeven();
		inline virtual bool doAnalogEight();
		inline virtual bool doAnalogNine();
		inline virtual bool doAnalogZero();
		inline virtual bool doDigitalOne();
		inline virtual bool doDigitalTwo();
		inline virtual bool doDigitalThree();
		inline virtual bool doDigitalFour();
		inline virtual bool doDigitalFive();
		inline virtual bool doDigitalSix();
		inline virtual bool doDigitalSeven();
		inline virtual bool doDigitalEight();
		inline virtual bool doDigitalNine();
		inline virtual bool doDigitalZero();
	};

	bool Firmware::IActuator::doPause()
	{
		return false;
	}

	bool Firmware::IActuator::doStop()
	{
		return false;
	}

	bool Firmware::IActuator::doNext()
	{
		return false;
	}

	bool Firmware::IActuator::doPrevious()
	{
		return false;
	}

	bool Firmware::IActuator::doForward()
	{
		return false;
	}

	bool Firmware::IActuator::doRewind()
	{
		return false;
	}

	inline bool IActuator::doOne()
	{
		return false;
	}

	inline bool IActuator::doTwo()
	{
		return false;
	}

	inline bool IActuator::doThree()
	{
		return false;
	}

	inline bool IActuator::doFour()
	{
		return false;
	}

	inline bool IActuator::doFive()
	{
		return false;
	}

	inline bool IActuator::doSix()
	{
		return false;
	}

	inline bool IActuator::doSeven()
	{
		return false;
	}

	inline bool IActuator::doEight()
	{
		return false;
	}

	inline bool IActuator::doNine()
	{
		return false;
	}

	inline bool IActuator::doZero()
	{
		return false;
	}

	inline bool IActuator::doOpen()
	{
		return false;
	}

	inline bool IActuator::doClose()
	{
		return false;
	}

	inline bool IActuator::doMute()
	{
		return false;
	}

	inline bool IActuator::doSelSpkrs()
	{
		return false;
	}

	inline bool IActuator::doStereoMono()
	{
		return false;
	}

	inline bool IActuator::doTunerMode()
	{
		return false;
	}

	inline bool IActuator::doVolUp()
	{
		return false;
	}

	inline bool IActuator::doVolDown()
	{
		return false;
	}

	inline bool IActuator::doTunerScanUp()
	{
		return false;
	}

	inline bool IActuator::doTunerScanDown()
	{
		return false;
	}

	inline bool IActuator::doPresetOne()
	{
		return false;
	}

	inline bool IActuator::doPresetTwo()
	{
		return false;
	}

	inline bool IActuator::doPresetThree()
	{
		return false;
	}

	inline bool IActuator::doPresetFour()
	{
		return false;
	}

	inline bool IActuator::doPresetFive()
	{
		return false;
	}

	inline bool IActuator::doPresetSix()
	{
		return false;
	}

	inline bool IActuator::doPresetSeven()
	{
		return false;
	}

	inline bool IActuator::doPresetEight()
	{
		return false;
	}

	inline bool IActuator::doPresetNine()
	{
		return false;
	}

	inline bool IActuator::doPresetZero()
	{
		return false;
	}

	inline bool IActuator::doSrcSelect()
	{
		return false;
	}

	inline bool IActuator::doSrcFm()
	{
		return false;
	}

	inline bool IActuator::doSrcAm()
	{
		return false;
	}

	inline bool IActuator::doSrcDvd()
	{
		return false;
	}

	inline bool IActuator::doSrcCd()
	{
		return false;
	}

	inline bool IActuator::doSrcMp3()
	{
		return false;
	}

	inline bool IActuator::doSrcAux()
	{
		return false;
	}

	inline bool IActuator::doSrcPhono()
	{
		return false;
	}

	inline bool IActuator::doSrcTape()
	{
		return false;
	}

	inline bool IActuator::doAnalogOne()
	{
		return false;
	}

	inline bool IActuator::doAnalogTwo()
	{
		return false;
	}

	inline bool IActuator::doAnalogThree()
	{
		return false;
	}

	inline bool IActuator::doAnalogFour()
	{
		return false;
	}

	inline bool IActuator::doAnalogFive()
	{
		return false;
	}

	inline bool IActuator::doAnalogSix()
	{
		return false;
	}

	inline bool IActuator::doAnalogSeven()
	{
		return false;
	}

	inline bool IActuator::doAnalogEight()
	{
		return false;
	}

	inline bool IActuator::doAnalogNine()
	{
		return false;
	}

	inline bool IActuator::doAnalogZero()
	{
		return false;
	}

	inline bool IActuator::doDigitalOne()
	{
		return false;
	}

	inline bool IActuator::doDigitalTwo()
	{
		return false;
	}

	inline bool IActuator::doDigitalThree()
	{
		return false;
	}

	inline bool IActuator::doDigitalFour()
	{
		return false;
	}

	inline bool IActuator::doDigitalFive()
	{
		return false;
	}

	inline bool IActuator::doDigitalSix()
	{
		return false;
	}

	inline bool IActuator::doDigitalSeven()
	{
		return false;
	}

	inline bool IActuator::doDigitalEight()
	{
		return false;
	}

	inline bool IActuator::doDigitalNine()
	{
		return false;
	}

	inline bool IActuator::doDigitalZero()
	{
		return false;
	}
}
