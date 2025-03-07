
#pragma once



//输出模式下，在CMake文件中定义 OUTPUT_MODE 宏定义，以切换到输出模式下的宏定义。在开发环境下，默认使用非输出模式进行

#ifndef OUTPUT_MODE
    #ifdef JUICE_OUTPUT_DLL
        #define Juice_API __declspec(dllexport)
    #else
        #define Juice_API __declspec(dllimport)
    #endif
#else
    #ifdef PLATFORM_WINDOWS
        #ifdef JUICE_OUTPUT_DLL
            #define Juice_API __declspec(dllexport)
        #else
            #define Juice_API __declspec(dllimport)
        #endif
    #endif
#endif

#define BIT(x)    (1<<(x))





