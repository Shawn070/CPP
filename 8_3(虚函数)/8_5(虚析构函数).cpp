// 8_5.cpp

#include<iostream>
using namespace std;

class Base{
public:
	Base(){cout<<"Base constructor"<<endl;}
	virtual ~Base(){cout<<"Base destructor"<<endl;}
};

class Derived: public Base{
public:
	Derived();
	~Derived();
private:
	int *p;
};
Derived::Derived(){
	p=new int(0);
	cout<<"Derived constructor"<<endl;
}
Derived::~Derived(){
	cout<<"Derived destructor"<<endl;
}

void fun(Base *b){
	delete b;
}

int main(){
	Base *b=new Derived();
	fun(b);
	return 0;
}

/* output:
Base constructor
Derived constructor
Derived destructor
Base destructor
*/
