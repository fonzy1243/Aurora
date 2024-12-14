#pragma once

#include "Root.h"

namespace Aurora {
	class AR_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();
}
