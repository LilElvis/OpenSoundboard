#include "imgui.h"
#include "SoundboardWindow.hpp"

#define WINDOW_ID_PREFIX "##Soundboard"

namespace osb
{
	SoundboardWindow::SoundboardWindow()
	{
		_soundboardData = new SoundboardData();
		_dirty = true;
	}

	SoundboardWindow::~SoundboardWindow()
	{
		delete _soundboardData;
	}

	void SoundboardWindow::Render()
	{
		ImGuiWindowFlags imguiWindowFlags = ImGuiWindowFlags_NoCollapse;
		if (_dirty)
		{
			imguiWindowFlags |= ImGuiWindowFlags_UnsavedDocument;
		}

		std::string label = _soundboardData->GetLabel();

		std::string windowId = WINDOW_ID_PREFIX + std::to_string(_soundboardData->GetId());

		std::string labelAndWindowId = label + windowId;

		ImGui::Begin(labelAndWindowId.c_str(), NULL, imguiWindowFlags);

		ImGui::TextDisabled("There's no sounds here here yet. Click \"File>Create New Sound Widget\" to get started!\n");

		ImGui::End();
	}
}