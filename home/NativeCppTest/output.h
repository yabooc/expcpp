#pragma once
#include <functional>
#include "CppUnitTest.h"

namespace NativeCppTest
{
    template<typename T>
    void output(T t)
    {
        std::stringstream ss;
        ss << t;
        std::istreambuf_iterator<char> eos;
        std::string s(std::istreambuf_iterator<char>(ss), eos);
        s += "\n";
        Microsoft::VisualStudio::CppUnitTestFramework::Logger::WriteMessage(s.c_str());
    }

    template<>
    inline void output<const char*>(const char* t)
    {
        Microsoft::VisualStudio::CppUnitTestFramework::Logger::WriteMessage(t);
    }
}