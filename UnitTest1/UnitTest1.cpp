#include "pch.h"
#include "CppUnitTest.h"
#include "../Algorythmization Lab 09_2_1/Source.cpp"
#include "../Algorythmization Lab 09_2_1/myMacros.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(MAX(1, 4), 4);
		}
	};
}
