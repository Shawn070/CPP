// 8_3.cpp
// 将运算符“+”, “-”重载为非成员函数，并将其声明为Complex类的友元函数，使之实现复数加减法; 重载“<<”运算符，可以对cout使用“<<”操作符来输出一个Complex对象。

#include<iostream>
using namespace std;

class Complex{
public:
	Complex(double r=0.0, double i=0.0): real(r), imag(i){}
	friend Complex operator+(const Complex &c1, const Complex &c2);
	friend Complex operator-(const Complex &c1, const Complex &c2);
	friend ostream & operator<<(ostream &out, const Complex &c);	
private:
	double real;
	double imag;
};

Complex operator+(const Complex &c1, const Complex &c2){
	return Complex(c1.real+c2.real, c1.imag+c2.imag);
}

Complex operator-(const Complex &c1, const Complex &c2){
	return Complex(c1.real-c2.real, c1.imag-c2.imag);
}

ostream & operator<<(ostream &out, const Complex &c){
	out<<'('<<c.real<<','<<c.imag<<')';
	return out;
}

int main(){
	Complex c1(5, 4), c2(2, 10), c3;
	cout<<"c1="<<c1<<endl;
	cout<<"c1="<<c2<<endl;
	c3=c1-c2;
	cout<<"c3=c1-c2="<<c3<<endl;
	c3=c1+c2;
	cout<<"c3=c1+c2="<<c3<<endl;

	return 0;
}

/*
c1=(5,4)
c1=(2,10)
c3=c1-c2=(3,-6)
c3=c1+c2=(7,14)
*/
