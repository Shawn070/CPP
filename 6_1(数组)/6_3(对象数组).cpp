// 6_3.cpp
// 声明: 类名 数组名[常量表达式];
// 引用: 数组名[下标表达式].成员名

#include "Point.h"
#include <iostream>
using namespace std;

int main(){
	cout << "Entering main..." << endl;
	Point a[2];
	for(int i=0; i<2; i++)
		a[i].move(i+10, i+20);
	cout << "Exiting main..." << endl;
	return 0;
}

/* output:

Entering main...
Default Constructor called.
Default Constructor called.
Moving the point to (10,20)
Moving the point to (11,21)
Exiting main...
Destructor called.
Destructor called.

*/
