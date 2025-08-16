#include "SoundboardData.hpp"

namespace osb
{
	int SoundboardData::s_instanceCount = 0;

	SoundboardData::SoundboardData()
	{
		//Assign a unique id based on the number of instances of this class...
		_id = SoundboardData::s_instanceCount++;
	}

	SoundboardData::~SoundboardData()
	{

	}

	bool SoundboardData::FromJSON()
	{
		throw std::logic_error("Function not yet implemented!");
	}

	nlohmann::json SoundboardData::ToJSON()
	{
		throw std::logic_error("Function not yet implemented!");
	}

	int SoundboardData::GetId()
	{
		return _id;
	}

	std::string SoundboardData::GetLabel()
	{
		return _label;
	}

	void SoundboardData::SetLabel(std::string label)
	{
		_label = label;
	}
}