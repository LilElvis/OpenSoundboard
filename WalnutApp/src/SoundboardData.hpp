#pragma once
#include <nlohmann/json.hpp>

namespace osb
{
	class SoundboardData
	{
	public:
		SoundboardData();
		~SoundboardData();

		bool FromJSON();
		nlohmann::json ToJSON();

		int GetId();
		std::string GetLabel();

		void SetLabel(std::string label);

	private:
		static int s_instanceCount;
		int _id = 0;
		std::string _label = "New Soundboard";
		//TODO:
	};
}