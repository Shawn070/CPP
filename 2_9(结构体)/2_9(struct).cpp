// 2_9(结构体).cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

using uint = unsigned int;

struct MyTimeStruct
{
	uint year;
	uint month;
	uint day;

	uint hour;
	uint min;
	uint sec;
};

int main()
{
	MyTimeStruct myTime = {2017, 8, 16, 17, 38, 0};

	cout << "please input year:" << endl;
	cin >> myTime.year;

	cout << "please input month:" << endl;
	cin >> myTime.month;

	cout << "please input day:" << endl;
	cin >> myTime.day;

	cout << "please input hour:" << endl;
	cin >> myTime.hour;

	cout << "please input min:" << endl;
	cin >> myTime.min;

	cout << "please input sec:" << endl;
	cin >> myTime.sec;

	cout << "the time is set to:" 
		<< myTime.year << "/"
		<< myTime.month << "/"
		<< myTime.day << "/"
		<< myTime.hour << ":"
		<< myTime.min << ":"
		<< myTime.sec << endl;

    return 0;
}

