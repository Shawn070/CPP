// ʵ����_��(�ݹ麯��).cpp : �������̨Ӧ�ó������ڵ㡣

/*��д�ݹ麯��int fib (int n), ��������������n��ֵ������fib��������Fibonacci������

��ʽΪ��
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
		return(fib(n-2) + fib(n-1));	//�ݹ����
	}
}

