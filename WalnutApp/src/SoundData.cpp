#include "SoundData.hpp"

namespace osb
{
	int SoundData::s_instanceCount = 0;

	SoundData::SoundData()
	{
		_id = SoundData::s_instanceCount++;
	}

	SoundData::~SoundData()
	{

	}

	bool SoundData::FromJSON(nlohmann::json data)
	{
		throw std::logic_error("Function not yet implemented!");
		return false;
	}

	nlohmann::json SoundData::ToJSON()
	{
		throw std::logic_error("Function not yet implemented!");
	}

	int SoundData::GetId()
	{
		return _id;
	}

	std::string SoundData::GetLabel()
	{
		return _label;
	}

	float SoundData::GetVolumeA()
	{
		return _volumeA;
	}

	float SoundData::GetVolumeB()
	{
		return _volumeB;
	}

	void SoundData::SetLabel(std::string label)
	{
		_label = label;
	}

	void SoundData::SetVolumeA(float volume)
	{
		_volumeA = volume;
	}

	void SoundData::SetVolumeB(float volume)
	{
		_volumeB = volume;
	}
}