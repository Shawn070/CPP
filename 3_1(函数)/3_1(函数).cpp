// 3_1(����).cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//����x��n�η�
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
	//����������Ϊһ�����ʽ��������������

    return 0;
}

