// 3_11(����).cpp : �������̨Ӧ�ó������ڵ㡣
//�������������������������ֵ���ݣ�

#include "stdafx.h"
#include <iostream>
using namespace std;

/*����ʾ��
void swap(int a, int b)
{
	int t = a;
	a = b;
	b = t;
}
*/

void swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}

int main()
{
	int x = 5, y = 10;
	cout << "x = " << x << " y = " << y << endl;
	swap(x, y);
	cout << "x = " << x << " y = " << y << endl;
    return 0;
}

