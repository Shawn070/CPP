// 实验三_下(系统函数).cpp : 定义控制台应用程序的入口点。
//例二

/*
	在main()函数中提示输入两个整数x, y,
	使用cin语句得到x, y的值，
	调用pow(x, y)函数计算x的y次幂的结果，在显示出来。
	注意：包含cmath库
*/

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, y;
	cout << "Enter int x:";
	cin >> x;
	cout << "Enter int y:";
	cin >> y;
	cout << "\n";

	cout << "x = " << x << "\t";
	cout << "y = " << y << "\n";
	cout << "pow(x, y) = " << pow(x, y);

    return 0;
}

