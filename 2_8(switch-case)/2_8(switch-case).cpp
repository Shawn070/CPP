// 2_8(switch-case).cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const float PI = 3.1416;

int main()
{
	int iType;
	float radius, a, b, area;

	cout << "ͼ�ε�����Ϊ����1-Բ�� 2-������ 3-�����Σ���";
	cin >> iType;

	switch (iType)
	{
	case 1:
		cout << "Բ�İ뾶Ϊ��" << endl;
		cin >> a;
		area = PI*a*a;
		cout << "Բ�����Ϊ��" << area << endl;
		break;
	case 2:
		cout << "���εĳ�Ϊ��";
		cin >> a;
		cout << "���εĿ�Ϊ��";
		cin >> b;
		area = a*b;
		cout << "���ε����Ϊ��" << area << endl;
		break;
	case 3:
		cout << "�����εı߳�Ϊ��";
		cin >> a;
		cout << "�����ε����Ϊ��" << a*a << endl;
		break;
	default:
		cout << "���ǺϷ�������ֵ��" << endl;
	}

    return 0;
}

