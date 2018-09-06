1. public(公有继承): 基类的公有成员和保护成员的访问属性不变，基类的私有成员可以直接访问。
``` c++
//Point.h
#ifndef _POINT_H
#define _POINT_H
class Point{
public:
	void initPoint(float x=0, float y=0){this->x=x; this->y=y;}
	void move(float offX, float offY){x+=offX,; y+=offY;}
	float getX() const{return x;}
	float getY() const{return y;}
private:
	float x, y;
};
#endif

//Rectangle.h
#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "Point.h"
class Rectangle: public Point{
public:
	void initRectangle(float x, float y, float w, float h){
		iniPoint(x, y);
		this->w=w;
		this->h=h;
	}
	float getH() const{return h;}
	float getW() const{return w;}
private:
	float w, h;
};
#endif

// 7_1.cpp
#include<iostream>
#include<cmath>
#include "Rectangle.h"
using namespace std;
int main(){
	Rectangle rect;
	rect.initRectangle(2, 3, 20, 10);
	rect.move(3, 2);
	cout << "The data of rect(x, y, w, h): " << endl;
	cout << rect.getX() << ", " << rect.getY() << ", "
		<< rect.getW() << ", " << rect.getH() << endl;
	return 0;
}
```
2. private(私有继承): 基类中公有成员和保护成员都以私有成员身份出现在派生类中，基类的私有成员在派生类中不可直接访问。
``` c++
//Rectangle.h
#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include "Point.h"
class Rectangle: private Point{		// change
public:
	void initRectangle(float x, float y, float w, float h){
		iniPoint(x, y);
		this->w=w;
		this->h=h;
	}
	void moe(float offX, float offY){Point::move(offX, offY);}	// +
	float getX() const{return Point:: getX();}		// +
	float getY() const{return Point:: getY();}		// +
	float getH() const{return h;}
	float getW() const{return w;}
private:
	float w, h;
};
#endif

// 7_2.cpp(同7_1.cpp)
```
3. protected(保护继承): 基类的公有成员和保护成员都以保护成员的身份出现在派生类中，基类的私有成员不可直接访问。
``` c++
class A{
protected:
	int x;
};

int main(){
	A a;	// Wrong!
}

//Right:
class A{
protected:
	int x;
};
class B; public A{
public:
	void fuction();
};
void B::function(){
	x=5;
}
```

