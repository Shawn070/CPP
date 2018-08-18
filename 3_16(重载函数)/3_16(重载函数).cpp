// 3_16(重载函数).cpp : 定义控制台应用程序的入口点。
//编写两个名为sumOFSquare的重载函数，分别求两整数的平方和及两实数的平方和
// 调用时相应的实参对应相应类型形参的函数

#include "stdafx.h"
#include <iostream>
using namespace std;

int sumOFSquare(int a, int b)
{
	return a * a + b * b;
}

double sumOFSquare(double a, double b)
{
	return a * a + b * b;
}

int main()
{
	int m, n;
	cout << "Enter two integer:";
	cin >> m >> n;
	cout << "Their sum of square:" << sumOFSquare(m, n) << endl;
	double x, y;
	cout << "Enter two real number:";
	cin >> x >> y;
	cout << "Their sum of square:" << sumOFSquare(x, y) << endl;
    return 0;
}

