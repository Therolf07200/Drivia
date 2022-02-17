
#include"Drivia.h"

class Sandbox :public Drivia::Application
{
public:
	Sandbox()
	{
	}
	~Sandbox()
	{

	}
};

Drivia::Application* Drivia::CreateApplication()
{
	return new Sandbox;
}