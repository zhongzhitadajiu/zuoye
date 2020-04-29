#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:		
		TEST_METHOD(TestMethod1)
		{
			int num = 10;
			int parameternum = 2;
			int range = 10;
			int openr = 1;
		}
		TEST_METHOD(TestMethod2)
		{
			int num = 10;
			int parameternum = 2;
			int range = 10;
			int openr = 2;
			int brackets = 1;
			int point = 1;
		}
		TEST_METHOD(TestMethod3)
		{
			int num = 10;
			int parameternum = 2;
			int range = 10;
			int openr = 2;
			int brackets = 0;
			int point = 1;
		}
	};
}
