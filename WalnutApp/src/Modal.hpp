#pragma once
#include <string>
#include <functional>

namespace osb
{
	class Modal
	{
	public:
		Modal();
		~Modal();

		void Open();
		void Render();

		void SetLabel(std::string label);
		void SetMessage(std::string message);
		void SetCloseButtonLabel(std::string label);
		void SetActionButtonLabel(std::string label);
		void SetOnActionButtonClicked(std::function<void(void)> function);

	private:
		virtual void _renderBody();

		std::string _label = "Modal Popup";
		std::string _message = "Default modal popup message!";
		std::string _closeButtonLabel = "Close";
		std::string _actionButtonLabel = "Apply";
		std::function<void(void)> _onActionButtonClicked = nullptr;
		bool _open = false;
	};
}