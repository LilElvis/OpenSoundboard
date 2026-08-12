#pragma once
#include "SoundData.hpp"
#include <nlohmann/json.hpp>
#include <vector>

namespace osb
{
	class SoundboardData
	{
	public:
		SoundboardData();
		~SoundboardData();

		bool FromJSON(nlohmann::json data);
		nlohmann::json ToJSON();

		int GetId();
		std::string GetLabel();

		void SetLabel(std::string label);

		void AddSound(SoundData soundData);
		void RemoveSound(SoundData soundData);

	private:
		static int s_instanceCount;
		int _id = 0;
		std::string _label = "New Soundboard";
		std::vector<SoundData> _soundData;
	};
}