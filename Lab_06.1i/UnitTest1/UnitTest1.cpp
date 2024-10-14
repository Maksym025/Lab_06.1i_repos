#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06.1i/Lab_06.1i.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
         
            const int size = 21;
            int b[size] = { 49, 83, 55, 39, 20, 47, 33, 78, 44, 26, 16, 36, 88, 35, 76, 39, 25, 27, 79, 53, 19 };

       
            int count = 0;

       
            ReplaceElements(b, size, count);

           
            Assert::AreEqual(b[3], 0);   // 39 -> 0
            Assert::AreEqual(b[6], 0);   // 33 -> 0
            Assert::AreEqual(b[15], 0);  // 39 -> 0
            Assert::AreEqual(b[17], 0);  // 27 -> 0

           
            Assert::AreEqual(count, 4);  
        }
    };
}
