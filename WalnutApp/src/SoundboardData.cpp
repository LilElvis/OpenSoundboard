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

	bool SoundboardData::FromJSON(nlohmann::json data)
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

	void SoundboardData::AddSound(SoundData soundData)
	{
		_soundData.push_back(soundData);
	}

	void SoundboardData::RemoveSound(SoundData soundData)
	{
		const int id = soundData.GetId();
		_soundData.erase(std::remove_if(std::begin(_soundData), std::end(_soundData), [id](SoundData& s) { return (s.GetId() == id); }));
	}
}