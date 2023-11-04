#include "pch.h"
#include "CppUnitTest.h"

extern	"C"	int Add(int, int);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001
{
	TEST_CLASS(REQ001)
	{
	public:
		
		TEST_METHOD(AddFunctionality)
		{
			//This is testing the add function using 2+2=4
			int Result = 0;
			Result = Add(2, 2);
			Assert::AreEqual(4, Result);
		}

		TEST_METHOD(TestMethod2)
		{
		}

		TEST_METHOD(TestMethod3)
		{
		}
	};
}
