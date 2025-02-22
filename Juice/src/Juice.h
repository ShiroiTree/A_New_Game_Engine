

#ifndef JUICE // 防止头文件被重复引用
#define JUICE


#include "Core/Kerbol.h"

extern Juice::Application *Juice::CreatApplication();



int main(int argc, char** argv)
{
    auto app = Juice::CreatApplication();
    app->Run();
    delete app;
    return 0;
}






#endif

