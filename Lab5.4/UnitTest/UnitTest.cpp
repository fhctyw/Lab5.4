#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab5.4\Main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double tmp = P1(0, 1);
			Assert::AreEqual(1., tmp);
		}
	};
}
