// ����������� ���������, ��Ͳ, в-11, ��, unit-���� �� �� 10.1 (C++), ������ 24
#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_Lab_10_1_CPP/AP_Lab_10_1_CPP.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace APLab101CPPUT
{
	TEST_CLASS(APLab101CPPUT)
	{
	public:
		
		TEST_METHOD(TestCountGroups)
		{
			string stringToCount = "aaabbcccc abc a b c";

			int count = CountGroups(stringToCount);

			Assert::AreEqual(1, count);
		}
	};
}
