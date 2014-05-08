#include "stdafx.h"
#include "CppUnitTest.h"
#include "output.h"
#include <array>
#include <vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace NativeCppTest
{		
    TEST_CLASS(LambdaTest)
	{
	public:
		
		TEST_METHOD(SimpleLambda)
        {
            std::array<int,2> a = { 1, 2 };
            std::for_each(std::begin(a), std::end(a), [](int i){ output(i); });
		}

        TEST_METHOD(TypeOfLembda)
        {
            auto l{ [](int i){ output(i); } };
            output(typeid(decltype(l)).raw_name());
        }
	};
}