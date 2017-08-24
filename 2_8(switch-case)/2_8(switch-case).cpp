// 2_8(switch-case).cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const float PI = 3.1416;

int main()
{
	int iType;
	float radius, a, b, area;

	cout << "图形的类型为？（1-圆形 2-长方形 3-正方形）：";
	cin >> iType;

	switch (iType)
	{
	case 1:
		cout << "圆的半径为：" << endl;
		cin >> a;
		area = PI*a*a;
		cout << "圆的面积为：" << area << endl;
		break;
	case 2:
		cout << "矩形的长为：";
		cin >> a;
		cout << "矩形的宽为：";
		cin >> b;
		area = a*b;
		cout << "矩形的面积为：" << area << endl;
		break;
	case 3:
		cout << "正方形的边长为：";
		cin >> a;
		cout << "正方形的面积为：" << a*a << endl;
		break;
	default:
		cout << "不是合法的输入值！" << endl;
	}

    return 0;
}

