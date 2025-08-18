#pragma once
#include "SoundboardWindow.hpp"
#include "Walnut/Layer.h"
#include <vector>

namespace osb
{
	class MainLayer : public Walnut::Layer
	{
	public:
		MainLayer();
		~MainLayer();

		virtual void OnAttach() override;
		virtual void OnDetach() override;

		virtual void OnUpdate(float ts) override;
		virtual void OnUIRender() override;

	private:
		std::vector<SoundboardWindow*> _soundboardWindows;

		void _createNewSoundboardWindow();
		void _renderSoundboardWindows();
		// Displays all the audio icons to ensure they're rendering correctly.
		void _showUnicodeFontDemo();
	};
}