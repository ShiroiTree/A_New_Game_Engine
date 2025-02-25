
#include "Juice.h"


class Sandbox : public Juice::Application
{
public:
    Sandbox()
    {
    }
    ~Sandbox()
    {
    }
    void Run()
    {
        Juice::log::GetCoreLogger()->warn("Initialized Juice!");
        Juice::log::GetClinicLogger()->info("The sandbox is running!");
        while (true) {}
    }
};

Juice::Application* Juice::CreatApplication()
{
    return new Sandbox;
}
