#pragma once

#include "Core.h"
#include "Events/Event.h"

namespace Engine
{
	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();	
		void Run();
	};

	//defined in client game
	Application* CreateApplication();
}

