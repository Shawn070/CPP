// ʵ����_�ϣ�������Ӧ��1��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

float Covert(float F)
{
	float C;
	C = (F - 32) * 5/9;
	return C;
}

int main()
{
	float F;
	
	cout << "please input the temperature in fahrenheit:\n";
	cin >> F;

	cout << "Cover the temperature in celsius:\n";
	cout << Covert(F);

    return 0;
}

