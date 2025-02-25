
#pragma once


#include "Core.h"



namespace Juice
{
    class Juice_API Application
    {
    public:
        Application();
        virtual ~Application();
        virtual void Run();
    };

    Application *CreatApplication();

}




