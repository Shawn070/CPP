// 实验三_下(重载函数).cpp : 定义控制台应用程序的入口点。
// 例一
/*
	分别编写四个同名函数max1,实现函数重载：
	课分别求取两个整数，三个整数，两个双精度整数，
	三个双精度数的最大值。
	在main()函数中测试函数功能。
*/


#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int max1(int x, int y);//两个整数的最大值
int max1(int x, int y, int z);//三个整数的最大值
double max1(double x, double y);//两个双精度数的最大值
double max1(double x, double y, double z);//三个双精度数的最大值

int main()
{
	int a, b, c;
	double m, n, l;

	cout << "Enter int a:";
	cin >> a;
	cout << "Enter int b:";
	cin >> b;
	cout << "Enter int c:";
	cin >> c;

	cout << "max of " << a << " and " << b << " is " << max1(a, b) << endl;
	cout << "max of " << a << " , " << b << " and " << c << " is " << max1(a, b, c);
	cout << "\n\n";

	cout << "Enter double m:";
	cin >> m;
	cout << "Enter double n:";
	cin >> n;
	cout << "Enter double l:";
	cin >> l;

	cout << "max of " << m << " and " << n << " is " << max1(m, n) << endl;
	cout << "max of " << m << " , " << n << " and " << l << " is " << max1(m, n, l) << endl;


    return 0;
}

int max1(int x, int y)//两个整数的最大值
{
	if (x == y)return x;
	else if (x >= y)
		return x;
	else
		return y;
}

int max1(int x, int y, int z)//三个整数的最大值
{
	return max1(max1(x, y), z);
}

double max1(double x, double y)//两个双精度数的最大值
{
	if (abs(x - y) < 1e-10) return x;//判断两浮点数是否相等的常见处理方式
	else if (x >= y)
		return x;
	else
		return y;
}

double max1(double x, double y, double z)
{
	return max1(max1(x, y), z);
}
