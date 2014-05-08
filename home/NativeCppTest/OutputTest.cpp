#include "stdafx.h"
#include "CppUnitTest.h"
#include "output.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace NativeCppTest
{
    TEST_CLASS(OutputTest)
    {
    public:
        TEST_METHOD(output)
        {
            NativeCppTest::output(1);
        }

    };
}