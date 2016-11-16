#pragma once

namespace Firmware
{
	class AActuator
	{
	public:
		AActuator() {}
		virtual ~AActuator() {}

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

	bool Firmware::AActuator::doPause()
	{
		return false;
	}

	bool Firmware::AActuator::doStop()
	{
		return false;
	}

	bool Firmware::AActuator::doNext()
	{
		return false;
	}

	bool Firmware::AActuator::doPrevious()
	{
		return false;
	}

	bool Firmware::AActuator::doForward()
	{
		return false;
	}

	bool Firmware::AActuator::doRewind()
	{
		return false;
	}

	inline bool AActuator::doOne()
	{
		return false;
	}

	inline bool AActuator::doTwo()
	{
		return false;
	}

	inline bool AActuator::doThree()
	{
		return false;
	}

	inline bool AActuator::doFour()
	{
		return false;
	}

	inline bool AActuator::doFive()
	{
		return false;
	}

	inline bool AActuator::doSix()
	{
		return false;
	}

	inline bool AActuator::doSeven()
	{
		return false;
	}

	inline bool AActuator::doEight()
	{
		return false;
	}

	inline bool AActuator::doNine()
	{
		return false;
	}

	inline bool AActuator::doZero()
	{
		return false;
	}

	inline bool AActuator::doOpen()
	{
		return false;
	}

	inline bool AActuator::doClose()
	{
		return false;
	}

	inline bool AActuator::doMute()
	{
		return false;
	}

	inline bool AActuator::doSelSpkrs()
	{
		return false;
	}

	inline bool AActuator::doStereoMono()
	{
		return false;
	}

	inline bool AActuator::doTunerMode()
	{
		return false;
	}

	inline bool AActuator::doVolUp()
	{
		return false;
	}

	inline bool AActuator::doVolDown()
	{
		return false;
	}

	inline bool AActuator::doTunerScanUp()
	{
		return false;
	}

	inline bool AActuator::doTunerScanDown()
	{
		return false;
	}

	inline bool AActuator::doPresetOne()
	{
		return false;
	}

	inline bool AActuator::doPresetTwo()
	{
		return false;
	}

	inline bool AActuator::doPresetThree()
	{
		return false;
	}

	inline bool AActuator::doPresetFour()
	{
		return false;
	}

	inline bool AActuator::doPresetFive()
	{
		return false;
	}

	inline bool AActuator::doPresetSix()
	{
		return false;
	}

	inline bool AActuator::doPresetSeven()
	{
		return false;
	}

	inline bool AActuator::doPresetEight()
	{
		return false;
	}

	inline bool AActuator::doPresetNine()
	{
		return false;
	}

	inline bool AActuator::doPresetZero()
	{
		return false;
	}

	inline bool AActuator::doSrcSelect()
	{
		return false;
	}

	inline bool AActuator::doSrcFm()
	{
		return false;
	}

	inline bool AActuator::doSrcAm()
	{
		return false;
	}

	inline bool AActuator::doSrcDvd()
	{
		return false;
	}

	inline bool AActuator::doSrcCd()
	{
		return false;
	}

	inline bool AActuator::doSrcMp3()
	{
		return false;
	}

	inline bool AActuator::doSrcAux()
	{
		return false;
	}

	inline bool AActuator::doSrcPhono()
	{
		return false;
	}

	inline bool AActuator::doSrcTape()
	{
		return false;
	}

	inline bool AActuator::doAnalogOne()
	{
		return false;
	}

	inline bool AActuator::doAnalogTwo()
	{
		return false;
	}

	inline bool AActuator::doAnalogThree()
	{
		return false;
	}

	inline bool AActuator::doAnalogFour()
	{
		return false;
	}

	inline bool AActuator::doAnalogFive()
	{
		return false;
	}

	inline bool AActuator::doAnalogSix()
	{
		return false;
	}

	inline bool AActuator::doAnalogSeven()
	{
		return false;
	}

	inline bool AActuator::doAnalogEight()
	{
		return false;
	}

	inline bool AActuator::doAnalogNine()
	{
		return false;
	}

	inline bool AActuator::doAnalogZero()
	{
		return false;
	}

	inline bool AActuator::doDigitalOne()
	{
		return false;
	}

	inline bool AActuator::doDigitalTwo()
	{
		return false;
	}

	inline bool AActuator::doDigitalThree()
	{
		return false;
	}

	inline bool AActuator::doDigitalFour()
	{
		return false;
	}

	inline bool AActuator::doDigitalFive()
	{
		return false;
	}

	inline bool AActuator::doDigitalSix()
	{
		return false;
	}

	inline bool AActuator::doDigitalSeven()
	{
		return false;
	}

	inline bool AActuator::doDigitalEight()
	{
		return false;
	}

	inline bool AActuator::doDigitalNine()
	{
		return false;
	}

	inline bool AActuator::doDigitalZero()
	{
		return false;
	}
}
