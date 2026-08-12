#include "imgui.h"
#include "Modal.hpp"

namespace osb
{
	Modal::Modal()
	{

	}

	Modal::~Modal()
	{

	}

	void Modal::Render()
	{
		if (ImGui::BeginPopupModal(_label.c_str(), nullptr, ImGuiWindowFlags_AlwaysAutoResize))
		{
			_renderBody();

			if (ImGui::Button(_closeButtonLabel.c_str(), ImVec2(60, 0))) ImGui::CloseCurrentPopup();

			if (_onActionButtonClicked != nullptr)
			{
				if (ImGui::Button(_actionButtonLabel.c_str(), ImVec2(60, 0))) _onActionButtonClicked();
			}

			ImGui::EndPopup();
		}
	}

	void Modal::_renderBody()
	{

	}
}
