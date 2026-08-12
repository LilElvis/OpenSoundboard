#pragma once
#include <nlohmann/json.hpp>

namespace osb
{
	class SoundData
	{
	public:
		SoundData();
		~SoundData();

		bool FromJSON(nlohmann::json data);
		nlohmann::json ToJSON();

		int GetId();
		std::string GetLabel();
		float GetVolumeA();
		float GetVolumeB();

		void SetLabel(std::string label);
		void SetVolumeA(float volume);
		void SetVolumeB(float volume);

	private:
		static int s_instanceCount;
		int _id = 0;
		std::string _label = "New Sound";
		std::string _filePath = "Undefined path...";
		float _volumeA = 0.5f;
		float _volumeB = 0.5f;
		//TODO: Member for preferred hotkey...
	};
}