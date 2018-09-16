// 8_6.cpp

#include<iostream>
using namespace std;

class Base1{
public:
	virtual void display() const=0;		// 纯虚函数
};

class Base2: public Base1{
public:
	void display() const;				
};
void Base2::display() const{ 	// 不加const，输出两个Base2 
	cout<<"Base2::display()"<<endl;
}

class Derived: public Base2{
public:
	void display() const;
};
void Derived::display() const{
	cout<<"Derived::display()"<<endl;
}
i
void fun(Base1 *ptr){
	ptr->display();
}

int main(){
	Base2 base2;
	Derived derived;
	fun(&base2);
	fun(&derived);
	return 0;
}

// 在派生类的display()函数原型声明中使用virtual也是没有错的

/* output:
Base2::display()
Derived::display()
*/
