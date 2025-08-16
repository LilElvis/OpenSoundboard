#include "Walnut/Layer.h"

namespace osb
{
	class MainLayer : public Walnut::Layer
	{
	public:
		MainLayer();
		~MainLayer();

		virtual void OnAttach();
		virtual void OnDetach();

		virtual void OnUIRender() override;

		// Displays all the audio icons to ensure they're rendering correctly.
		void ShowUnicodeFontDemo();
	};
}