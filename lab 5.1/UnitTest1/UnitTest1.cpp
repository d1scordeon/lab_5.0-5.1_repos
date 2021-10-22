#include "pch.h"
#include "CppUnitTest.h"
#include "../pr5.1/lab05_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			auto tmp = k(0, 1);
			Assert::AreEqual(1., tmp);
		}
	};
}
