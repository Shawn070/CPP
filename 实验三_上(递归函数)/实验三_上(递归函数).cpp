// 实验三_上(递归函数).cpp : 定义控制台应用程序的入口点。

/*编写递归函数int fib (int n), 在主程序中输入n的值，调用fib函数计算Fibonacci级数。

公式为：
fib(n) = fib(n-1) + fib(n-2), n > 2;
fib(1) = fib(2) +1;

*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int fib(int n);

int main()
{
	int n, answer;
	cout << "Enter number:";
	cin >> n;
	cout << "\n\n";
	answer = fib(n);
	cout << answer << " is the " << n << " the Fibonacci number\n";
	return 0;
}

int fib(int n)
{
	cout << "Processing fib(" << n << ")...";
	if (n < 3)
	{
		cout << "Return 1!\n";
		return(1);
	}
	else
	{
		cout << "Call fib(" << n - 2 << ") and fib(" << n-1 <<").\n";
		return(fib(n-2) + fib(n-1));	//递归调用
	}
}

