#pragma once

#ifdef SZ_PLATFORM_WINDOWS

extern Snapz::Application* Snapz::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Snapz::CreateApplication();
	app->Run();
	delete app;
}

#endif 