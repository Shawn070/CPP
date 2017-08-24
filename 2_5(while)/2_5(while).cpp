// 2_5(while).cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int i = 1, sum = 0;
	while (i <= 10)
	{
		sum += i;
		i++;
	}
	cout << "sum =" << sum << endl;
	return 0;
}
