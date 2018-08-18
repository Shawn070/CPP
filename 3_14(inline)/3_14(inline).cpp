// 3_14(inline).cpp : 定义控制台应用程序的入口点。
//
// inline -- 编译时直接将代码段插入程序，适用于较短的插入代码

#include "stdafx.h"
#include <iostream>
using namespace std;

const double PI = 3.14159265358979;
inline double calArea(double radius)
{
	return PI * radius * radius;
}

int main()
{
	double r = 3.0;
	double area = calArea(r);
	cout << area << endl;
    return 0;
}

