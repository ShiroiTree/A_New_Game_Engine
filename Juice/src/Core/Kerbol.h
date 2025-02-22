#include "Core.h"


#ifndef JUICE_KERBOL // 防止头文件被重复引用
#define JUICE_KERBOL


namespace Juice
{
    class Juice_API Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();
    };

    Application *CreatApplication();
}





#endif