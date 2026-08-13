#pragma once
#include "Modal.hpp"
#include "SoundboardWindow.hpp"
#include "Walnut/Layer.h"
#include <vector>
#include <functional>

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
		Modal* _createNewSoundboardModal;
		std::vector<SoundboardWindow*> _soundboardWindows;

		void _openCreateNewSoundBoardModal();
		void _createSoundboardWindow();
		void _renderModalWindows();
		void _renderSoundboardWindows();
		// Displays all the audio icons to ensure they're rendering correctly.
		void _showUnicodeFontDemo();
	};
}