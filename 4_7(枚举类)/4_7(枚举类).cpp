// 4_7(ö����).cpp : �������̨Ӧ�ó������ڵ㡣
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
	cout << (s == w) << endl;	//��������޷�ֱ�ӱȽϲ�ͬö����
    return 0;
}

