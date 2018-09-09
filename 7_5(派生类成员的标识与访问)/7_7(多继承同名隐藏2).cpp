// 7_7.cpp
#include<iostream>
using namespace std;

class Base0{
public:
	int var0;
	void fun0(){cout<<"Member of Base0, var0="<<var0<<endl;}
};

class Base1: public Base0{
public:
	int var1;
};

class Base2: public Base0{
public:
	int var2;
};

class Derived: public Base1, public Base2{
public:
	int var;
	void fun(){cout<<"Member of Derived, var="<<var<<endl;}
};

int main(){
	Derived d;
	d.Base1::var0 = 2;
	d.Base1::fun0();
	d.Base2::var0 = 3;
	d.Base2::fun0();
	return 0;

}

/* output:
Member of Base0, var0=2
Member of Base0, var0=3
*/

// 派生类对象在内存中同时拥有成员var0的两个副本，
// 解决方法: 虚基类



