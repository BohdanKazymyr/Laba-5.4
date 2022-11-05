#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 5.4/Laba 5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k = 2, n = 5;
			P0(k, n);
		}
	};
}
