#include "stdafx.h"
#include "CppUnitTest.h"
#include <thread>
#include <iostream>
#include <functional>
#include <future>
#include "output.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace NativeCppTest
{
    TEST_CLASS(Async)
    {
    public:
        static void PrintThreadId()
        {
            output(std::this_thread::get_id());
        }
        TEST_METHOD(Thread)
        {
            PrintThreadId();
            
            std::function<void()> f(NativeCppTest::Async::PrintThreadId);
            std::thread t(f);
            t.join();
        }

        TEST_METHOD(AsyncTest)
        {
            int i = 0;
            std::future<int> asyncresult = std::async(std::launch::async, [&i]()->int{return i; });
            std::this_thread::sleep_for(std::chrono::seconds(1));
            i = 2;
            t << asyncresult.get(); // result is 0. Why? std::async is finished before i=2.

            auto deferredresult = std::async(std::launch::deferred, [&i]()->int{return i; });
            std::this_thread::sleep_for(std::chrono::seconds(1));
            i = 3;
            t << deferredresult.get(); // result is 3. Why? std::async just started when get().
        }
    };
}