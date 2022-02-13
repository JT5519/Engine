#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();

int main(int argc, char** argv)
{
	Engine::Log::Init();
	HZ_CORE_WARN("Initialize Log!");
	int a = 5;
	HZ_INFO("Hallo!	Var = {0}",a);
	auto app = Engine::CreateApplication();
	app->Run();
	delete app;
}
#endif