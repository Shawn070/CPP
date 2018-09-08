// 7_4.cpp & 7_5.cpp
#include<iostream>
using namespace std;

class Base1{
public:
	Base1(int i){cout<<"Constructing Base1 "<<i<<endl;}
	~Base1(){cout<<"Destructing Base1"<<endl;}			// 7_5
};
class Base2{
public:
	Base2(int j){cout<<"Constructing Base2 "<<j<<endl;}
	~Base2(){cout<<"Destructing Base2"<<endl;}
};
class Base3{
public:
	Base3(){cout<<"Constructing Base3 *"<<endl;}
	~Base3(){cout<<"Destructing Base3"<<endl;}
};
class Derived: public Base2, public Base1, public Base3{
public:
// 注意基类名的顺序
	Derived(int a, int b, int c, int d): Base1(a), member2(d), member1(c), Base2(b){}
	// 注意基类名的个数与顺序，成员对象名的个数与顺序
private:
	Base1 member1;
	Base2 member2;
	Base3 member3;
};

int main(){
	Derived obj(1, 2, 3, 4);
	return 0;
}

/* 7_4 output:
Constructing Base2 2
Constructing Base1 1
Constructing Base3 *
Constructing Base1 3
Constructing Base2 4
Constructing Base3 *
*/

// 考虑Derived类构造函数的执行情况，先调用基类的构造函数，然后调用内嵌函数对象的构造函数。基类构造函数的调用顺序是按照派生类定义时的顺序，因此应该是先Base2，再Base1，最后Base3；而内嵌对象的构造函数调用顺序应该是按照成员在类中声明的顺序，应该是先Base1，再Base2，最后Base3。

/* 7_5 output:
Constructing Base2 2
Constructing Base1 1
Constructing Base3 *
Constructing Base1 3
Constructing Base2 4
Constructing Base3 *
Destructing Base3
Destructing Base2
Destructing Base1
Destructing Base3
Destructing Base1
Destructing Base2
*/
