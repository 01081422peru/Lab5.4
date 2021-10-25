#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest22
{
	TEST_CLASS(UnitTest22)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c;
			const int N = 4;
			const int j = 2;
			c = S0(N, j);
			Assert::AreEqual(c, 1.);

		}
	};
}
