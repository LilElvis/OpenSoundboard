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

	void Modal::Open()
	{
		_open = true;
	}

	void Modal::Render()
	{
		if (_open)
		{
			ImGui::OpenPopup(_label.c_str());
			_open = false;
		}


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

	void Modal::SetLabel(std::string label)
	{
		_label = label;
	}

	void Modal::SetMessage(std::string message)
	{
		_message = message;
	}

	void Modal::SetCloseButtonLabel(std::string label)
	{
		_closeButtonLabel = label;
	}

	void Modal::SetActionButtonLabel(std::string label)
	{
		_actionButtonLabel = label;
	}

	void Modal::SetOnActionButtonClicked(std::function<void()> function)
	{
		_onActionButtonClicked = function;
	}

	void Modal::_renderBody()
	{
		ImGui::Text(_message.c_str());
	}
}
