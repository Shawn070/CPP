// 3_16(���غ���).cpp : �������̨Ӧ�ó������ڵ㡣
//��д������ΪsumOFSquare�����غ������ֱ�����������ƽ���ͼ���ʵ����ƽ����
// ����ʱ��Ӧ��ʵ�ζ�Ӧ��Ӧ�����βεĺ���

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

