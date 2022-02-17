#pragma once
#include"Core.h"

namespace Drivia
{
class DRIVIA_API Application
{
public:
	Application();
	virtual ~Application();
	void Run();
};
//To be defined in CLIENT
Application* CreateApplication();

}

