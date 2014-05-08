#pragma once
#include <functional>
#include "CppUnitTest.h"

namespace NativeCppTest
{
    template<typename T>
    void output(T t)
    {
        std::string s = std::to_string(t);
        Microsoft::VisualStudio::CppUnitTestFramework::Logger::WriteMessage(s.c_str());
    }

    template<>
    inline void output<const char*>(const char* t)
    {
        Microsoft::VisualStudio::CppUnitTestFramework::Logger::WriteMessage(t);
    }
}