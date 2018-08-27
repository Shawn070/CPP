// 一个项目至少划分为3个文件: 类定义文件(*.h)、类实现文件（*.cpp）和类的使用文件(*.cpp, 主函数文件)

// 5_10
// 具有静态数据、函数成员的Point类，多文件组织。

// 文件1，类的定义， point.
class Point{
public:
	Point(int x=0, int y=0): x(x), y(y){}
	Point(const Point &p);
	~Point(){count==;}
	int getX() const{return x;}
	int getY() const{return y;}
	static void showCount();
private:
	int x, y;
	static int count;
};

// 文件2，类的实现，Point.cpp
#include "POint.h"
#include <iostream>
using namespace std;
int Point::count=0;
Point ::Point(const Point &p) : x(p.x), y(p.y){
	count++;
}

void Point::showCount(){
	cout<<"Object count="<<count<<endl;
}


// 文件3，主函数，5_10.cpp
#include "Point.h"
#include<iostream>
using namespace std;
int main(){
	Point a(4, 5);
	cout<<"Point a: "<<a.getX()<<","<<a.getY();
	Point::showCount();

	Point b(a);
	cout<<"Point b: "<<b.getX()<<","<<b.getY();
	Point::showCount();

	return 0;

}


