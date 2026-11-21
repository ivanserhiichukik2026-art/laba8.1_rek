#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\qq\source\repos\laba8.1_rek\laba8.1_rek\laba8.1_rek.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81Rec
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestCount)
        {
            char str[] = "I like BASIC and BASIC-80";

            int result = Count(str, 'I');

            Assert::AreEqual(3, result);
        }

        TEST_METHOD(TestChange)
        {
            char str[] = "I like BASIC and BASIC-80";

            char dest[151];
            dest[0] = '\0';

            char* result = Change(dest, str, dest);

            Assert::AreEqual("I like Delphi and Delphi-80", result);
        }
    };
}
