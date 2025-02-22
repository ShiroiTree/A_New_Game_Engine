
#include "../../Juice/src/Juice.h"


class Sandbox : public Juice::Application
{
public:
    Sandbox()
    {
    }
    ~Sandbox()
    {

    }
};

Juice::Application* Juice::CreatApplication()
{
    return new Sandbox;
}
