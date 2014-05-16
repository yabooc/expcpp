#include "stdafx.h"
#include "CppUnitTest.h"
#include <list>
#include <vector>
#include <array>
//#include <hash_map>
#include <unordered_map>
//#include <hash_set>
#include <unordered_set>

#include <string>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace NativeCppTest
{
    TEST_CLASS(StlTest)
    {
    public:
        
        TEST_METHOD(ListTest)
        {
            // TODO: Your test code here
        }
        TEST_METHOD(VectorTest)
        {

        }
        TEST_METHOD(ArrayTest)
        {

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