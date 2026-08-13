#pragma once
#include <string>

namespace osb
{
	class Modal
	{
	public:
		Modal();
		~Modal();

		void Open();
		void Render();
	
	private:
		virtual void _renderBody();
		void (*_onActionButtonClicked)() = nullptr;

		std::string _label = "Modal Popup";
		std::string _message = "Default modal popup message!";
		std::string _closeButtonLabel = "Close";
		std::string _actionButtonLabel = "Apply";
		bool _open = false;
	};
}