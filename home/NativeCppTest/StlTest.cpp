#include "stdafx.h"
#include "CppUnitTest.h"
#include <list>
#include <vector>
#include <array>
//#include <hash_map>
#include <unordered_map>
//#include <hash_set>
#include <unordered_set>
#include <queue>
#include <string>
#include <algorithm>
#include "output.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace NativeCppTest
{
    TEST_CLASS(StlTest)
    {
    public:
        
        TEST_METHOD(ListTest)
        {

        }
        TEST_METHOD(ForwardList)
        {

        }
        TEST_METHOD(VectorTest)
        {
            std::vector<int> v{ 1, 2, 3, 4, 5};
            v.erase(v.begin()+1);
            Microsoft::VisualStudio::CppUnitTestFramework::Assert::AreEqual(3, v.at(1));
            std::for_each(begin(v), end(v), [](int &a)->void{t << a; });
            auto f = v.begin();
            auto r = v.end();
            t << *f;
            t << *(--r);
            for (; f < r; ++f, --r)
            {
            }
            t << *f;
            t << *r;

            // Delete during iterating
            for (auto i = begin(v); i < end(v); ++i)
            {
                if (*(i + 1) == 4)
                {
                    v.erase(i + 1); // i+1 is 4
                    t << *(i + 1); // i+1 is 5 now
                    v.insert(i + 1, 88);
                    t << *(i + 1); // i+1 is 88 now
                    break;
                }
            }

        }
        TEST_METHOD(ArrayTest)
        {
            std::array<int, 2> fixed{ { 1, 2 } };
            for (auto i = begin(fixed); i < end(fixed); ++i)
            {
                t << *i;
            }
        }
        TEST_METHOD(QueueTest)
        {
            std::queue<int> q{ { 1, 2 } };
            while (!q.empty())
            {
                auto i = q.front();
                t << i;
                q.pop();
            }
        }
        TEST_METHOD(HashTest)
        {
            // hash_map is obsoleted. use unordered_map
            // std::hash_map<int, const std::string> m{ { 1, "aaa" }, { 2, "bbb" } };
            std::unordered_map<int, const std::string>  m{ { 1, "aaa" }, { 2, "bbb" } };
            // std::hash_set<int, const std::string> s{ { 1, "aaa" }, { 2, "bbb" } };
            std::unordered_set<int> s{ 1, 2 };

            std::unordered_multimap<int, const std::string> mm{ { 1, "aaa" }, { 1, "bbb" } }; // Duplicated keys
            std::unordered_multiset<int> ms{ 1, 1 }; // Duplicated keys.
        }

    };
}