#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c = h(1, 1);
			Assert::AreNotEqual(c, 6.43);
		}
	};
}
