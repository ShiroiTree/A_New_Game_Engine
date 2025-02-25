

#pragma once


#include "Core/include/Application.h"
#include "Core/include/Log.h"


extern Juice::Application *Juice::CreatApplication();



int main(int argc, char** argv)
{
    Juice::log::Init();

    auto app = Juice::CreatApplication();
    app->Run();
    delete app;
    return 0;
}





