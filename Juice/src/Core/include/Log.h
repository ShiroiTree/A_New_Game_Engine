
#pragma once

#include "core.h"

#include "spdlog/spdlog.h"
#include <memory>


namespace Juice
{
    class Juice_API log
    {
    public:
        static void Init();

        inline static std::shared_ptr<spdlog::logger> &GetCoreLogger() { return sPtr_coreLogger; }
        inline static std::shared_ptr<spdlog::logger> &GetClinicLogger() { return sPtr_clinicLogger; }

    private:

        static std::shared_ptr<spdlog::logger> sPtr_coreLogger;
        static std::shared_ptr<spdlog::logger> sPtr_clinicLogger;

    };

}

// Log
#define JLC_Core_Fatal(...)     ::Juice::log::GetCoreLogger()->fatal(__VA_ARGS__)
#define JLC_Core_Error(...)     ::Juice::log::GetCoreLogger()->error(__VA_ARGS__)
#define JLC_Core_Warn(...)      ::Juice::log::GetCoreLogger()->warn(__VA_ARGS__)
#define JLC_Core_Info(...)      ::Juice::log::GetCoreLogger()->info(__VA_ARGS__)
#define JLC_Core_Trace(...)     ::Juice::log::GetCoreLogger()->trace(__VA_ARGS__)

#define JLC_Fatal(...)          ::Juice::log::GetClinicLogger()->fatal(__VA_ARGS__)
#define JLC_Error(...)          ::Juice::log::GetClinicLogger()->error(__VA_ARGS__)
#define JLC_Warn(...)           ::Juice::log::GetClinicLogger()->warn(__VA_ARGS__)
#define JLC_Info(...)           ::Juice::log::GetClinicLogger()->info(__VA_ARGS__)
#define JLC_Trace(...)          ::Juice::log::GetClinicLogger()->trace(__VA_ARGS__)
