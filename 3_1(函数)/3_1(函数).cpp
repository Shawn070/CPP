// 3_1(函数).cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//计算x的n次方
double power(double x, int n)
{
	double val = 1.0;
	while (n--)
		val *= x;
	return val;
}

int main()
{
	double pow;
	pow = power(5, 2);
	cout << "5 to the power 2 is" << pow << endl;
	//函数调用作为一个表达式出现在输出语句中

    return 0;
}

