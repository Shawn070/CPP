// 4_6_1(�ṹ��).cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>		//�ַ���
#include <iomanip>		//��������п��Ƹ�ʽ�����ͷ�ļ�
using namespace std;

struct Student {
	int num;
	string name;
	char sex;
	int age;
};

int main()
{
	Student stu = { 97001, "Lin Lin", 'F', 19 };
	cout << "Num:	" << stu.num << endl;
	cout << "Name:	" << stu.name << endl;
	cout << "Sex:	" << stu.sex << endl;
	cout << "Age:	" << stu.age << endl;
    return 0;
}

