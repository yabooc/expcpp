#pragma once
#include <functional>

namespace CppTest
{
    template<typename T>
    void output(T t)
    {
        Microsoft::VisualStudio::TestTools::UnitTesting::TestContext::WriteLine(t)
    }

}