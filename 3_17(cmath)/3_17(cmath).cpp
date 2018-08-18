// 3_17(cmath).cpp : 定义控制台应用程序的入口点。
//
// 求sinx，cosx， tanx

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979;

int main()
{
	double angle;
	cout << "please enter an angle:";
	cin >> angle;

	double radian = angle * PI / 180;
	cout << "sin (" << angle << ")=" << sin(radian) << endl;
	cout << "cos(" << angle << ")=" << cos(radian) << endl;
	cout << "tan(" << angle << ")=" << tan(radian) <<endl;
    return 0;
}

