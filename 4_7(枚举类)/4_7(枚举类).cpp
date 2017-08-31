// 4_7(枚举类).cpp : 定义控制台应用程序的入口点。
//http://zh.cppreference.com/w/cpp/language/enum

#include "stdafx.h"
#include <iostream>
using namespace std;

enum class Side {Right, Left};
enum class Thing {Wrong, Right};

int main()
{
	Side s = Side::Right;
	Thing w = Thing::Wrong;
	cout << (s == w) << endl;	//编译错误，无法直接比较不同枚举类
    return 0;
}

