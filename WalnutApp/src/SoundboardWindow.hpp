#pragma once
#include "SoundboardData.hpp"

namespace osb
{
	class SoundboardWindow
	{
	public:
		SoundboardWindow();
		~SoundboardWindow();

		void Render();
	private:
		SoundboardData* _soundboardData;
		bool _dirty = false;
	};
}