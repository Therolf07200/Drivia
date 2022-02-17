#pragma once

#ifdef DRV_PLATFORM_WINDOWS

extern Drivia::Application* Drivia::CreateApplication();

int main(int argc,char** argv)
{
	std::cout << "Drivia Engine" << std::endl;
	auto app = Drivia::CreateApplication();
	app->Run();
	delete app;
	std::cin.get();
	return 0;
}

#endif // DRV_PLATFORM_WINDOWS
