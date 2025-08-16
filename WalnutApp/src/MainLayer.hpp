#include "Walnut/Layer.h"

namespace osb {
	class MainLayer : public Walnut::Layer
	{
	public:
		MainLayer();
		~MainLayer();

		virtual void OnAttach();
		virtual void OnDetach();

		virtual void OnUIRender() override;

		void ShowUnicodeFontDemo();
	};
}