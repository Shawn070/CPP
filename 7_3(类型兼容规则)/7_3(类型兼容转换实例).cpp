// 7_3.cpp
#include<iostream>
using namespace std;

class Base1{
public:
	void display() const {cout<<"Base1::display()"<<endl;}
};

class Base2: public Base1{
public:
	void display() const {cout<<"Base2::display()"<<endl;}
};

class Derived: public Base2{
public:
	void display() const {cout<<"Derived::display()"<<endl;}
};

void fun(Base1 *ptr){
	ptr->display();
}

int main(){
	Base1 base1;
	Base2 base2;
	Derived derived;

	fun(&base1);
	fun(&base2);
	fun(&derived);

	return 0;
}

/* output:
Base1::display()
Base1::display()
Base1::display()
*/

// 通过“对象名.成员名”或者“对象指针->成员名”的方式，就应该可以访问到各派生类中继承自基类的成员。
//
// 尽管指针指向Derived的对象，fun函数运行时通过这个指针只能访问到Derived类从基类Base1继承过来的成员函数display，而不是Derived类自己的同名成员函数。
//
// 根据类型兼容规则，可以在基类对象出现的场合使用派生类对象进行替代，但替代后派生类仅仅发挥出基类的作用

