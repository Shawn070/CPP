// ʵ����_��(ϵͳ����).cpp : �������̨Ӧ�ó������ڵ㡣
//����

/*
	��main()��������ʾ������������x, y,
	ʹ��cin���õ�x, y��ֵ��
	����pow(x, y)��������x��y���ݵĽ��������ʾ������
	ע�⣺����cmath��
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

