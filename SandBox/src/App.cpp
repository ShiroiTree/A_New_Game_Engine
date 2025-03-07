
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
        JLC_Core_Warn("The logging is init!");
        JLC_Info("Running!");
        while (true) {}
    }
};

Juice::Application* Juice::CreatApplication()
{
    return new Sandbox;
}
