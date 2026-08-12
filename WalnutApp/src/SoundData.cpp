#include "SoundData.hpp"

namespace osb
{
	int SoundData::s_instanceCount = 0;

	SoundData::SoundData()
	{
		_id = s_instanceCount;
		s_instanceCount++;
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

	void SoundData::SetLabel(std::string label)
	{
		_label = label;
	}
}