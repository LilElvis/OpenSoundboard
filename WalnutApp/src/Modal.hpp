#pragma once
#include <string>

namespace osb
{
	class Modal
	{
	public:
		Modal();
		~Modal();

		void Render();
	
	private:
		virtual void _renderBody();
		void (*_onActionButtonClicked)();

		std::string _label = "Modal Popup";
		std::string _closeButtonLabel = "Close";
		std::string _actionButtonLabel = "Apply";
	};
}