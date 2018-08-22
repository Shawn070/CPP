// 5_2.cpp
#include<iostream>
using namespace std;
int i = 1;

void other(){
	//a, b微静态局部变量，旅游全局寿命，局部可见，只第一次进入函数时被初始化 
	static int a = 2;
	static int b;
	//c为局部变量，旅游动态生存期，每次进入函数时都初始化
	int c = 10;
	a += 2;
	i += 32;
	c += 5;
	cout << "----OTHER---" << endl;
	cout << "i:" << i << " a:" << a << " b:" << b << " c:" << c << endl;
	b = a;
}

int main(){
	//a为静态局部变量，旅游全局寿命，局部可见
	static int a;
	//b, c为局部变量，具有动态生存期
	int b = -10;
	int c = 0;
	
	cout << "---MAIN---" << endl;
	cout << "i:" << i << " a:" << a << " b:" << b << " c:" << c << endl;
	c += 8;
	other();
	cout << "---MAIN---" << endl;
	cout << "i:" << i << " a:" << a << " b:" << b << " c:" << c << endl;
	i += 10;
	other();
	return 0;
}

/* output:
---MAIN---
i:1 a:0 b:-10 c:0
----OTHER---
i:33 a:4 b:0 c:15
---MAIN---
i:33 a:0 b:-10 c:8
----OTHER---
i:75 a:6 b:4 c:15
*/
