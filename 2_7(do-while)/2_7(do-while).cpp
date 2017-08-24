// 2_7(do-while).cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int i = 1, sum = 0;
//do-while
	do 
	{
		sum += i;
		i++;
	} while (i <= 10);
	cout << "sum = " << sum << endl;

//for
	sum = 0;
	for (i = 1; i <= 10; i++)
	{
		sum += i;
	}
	cout << "sum = " << sum << endl;
    return 0;
}

