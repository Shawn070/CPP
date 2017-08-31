// 4_6_1(结构体).cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>		//字符串
#include <iomanip>		//里面包含有控制格式输出的头文件
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

