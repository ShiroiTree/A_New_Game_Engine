
#include "include/Application.h"
#include "include/Log.h"
#include <stdio.h>


#include "spdlog/sinks/stdout_color_sinks.h"


namespace Juice{
    //----- Class Applicaion defination
    Application::Application()
    {

    }

    Application::~Application()
    {

    }

    //----- Log Initialize
    std::shared_ptr<spdlog::logger> log::sPtr_coreLogger;
    std::shared_ptr<spdlog::logger> log::sPtr_clinicLogger;

    void log::Init()
    {
        spdlog::set_pattern("%^[%T] %n: %v%$");
        sPtr_coreLogger = spdlog::stdout_color_mt("Core"); // for the engine
        sPtr_coreLogger->set_level(spdlog::level::trace);
        sPtr_clinicLogger = spdlog::stdout_color_mt("Application"); // for the clinic
        sPtr_clinicLogger->set_level(spdlog::level::trace);
    }


}