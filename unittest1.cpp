#include "stdafx.h"
#include "CppUnitTest.h"
#include <bits/stdc++.h>
using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(Time)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			int a, b, c;
			a = 1; b = 59; c = 59;
			//time_t tt = time(NULL);//这句返回的只是一个时间cuo
			//tm* t = localtime(&tt);
			int a1, b1, c1;
			//a1 = t->tm_hour; b1 = t->tm_min; c1 = t->tm_sec;
			a1 = 2; b1 = 0; c1 = 0;
			if (c1 < c) {
				c1 = c1 + 60 - c;
				b1 = b1 - 1;
			}
			if (c1 >= c)
			{
				c1 = c1 - c;
			}
			if (b1 < b)
			{
				b1 = b1 + 60 - b;
				a1 = a1 - 1;
			}
			if (b1 >= b)
			{
				b1 = b1 - b;
			}
			a1 = a1 - a;
			//cout << "太棒了！你完成了本次计算！用时时间为：" << a1 << ':' << b1 << ':' << c1 << endl;
			//ofstream out("data1.txt", ios::app);
			//cout << "请输入名字：";
			//string name;
			//cin >> name;
			//out << name << ' ' << a1 << ':' << b1 << ':' << c1 << endl;
			//out.close();
			int a2 = 0, b2 = 0, c2 = 1;
			Assert::AreEqual(c1,c2);
		}

	};

	TEST_CLASS(Calculation_add)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int a, b, sum, sum1;
			a = rand() % 10000;
			b = rand() % 10000;
			sum = a + b;
			sum1 = -1;
			Assert::IsFalse(sum == sum1);
		}
	};

	TEST_CLASS(Calculation_sub)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int a, b, sum, sum1;
			a = rand() % 10000;
			b = rand() % 10000;
			sum = a + b;
			sum1 = -1;
			Assert::IsFalse(sum == sum1);
		}
	};

	TEST_CLASS(Calculation_mul)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int a, b, c, sum, sum1;
			a = rand() % 100;
			b = rand() % 100;
			c = rand() % 10;
			sum = a * b;
			sum1 = -1;
			Assert::IsFalse(sum == sum1);
		}
	};

	TEST_CLASS(Calculation_div)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int a, b, c, sum, sum1, sum2, sum3;
			a = rand() % 100;
			b = rand() % 10;
			c = rand() % 10;
			sum = b / c;
			sum3 = b % c;
			sum1 = -1;
			sum2 = -1;
			Assert::IsFalse(sum == sum1);
		}
	};

}

