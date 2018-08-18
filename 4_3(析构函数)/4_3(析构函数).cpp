// 4_3(析构函数).cpp : 定义控制台应用程序的入口点。

// 游泳池改造预算，Cirle类。
// 一圆形游泳池，现在需在其周围建一圆形过道，并在
// 其四周围上栅栏。栅栏价格为35元/米，过道造价20元/
// 平方米。过道宽度为3米，游泳池半径由键盘输入。
// 要求编程计算并输出过道和栅栏的造价。

#include "stdafx.h"
#include <iostream>
using namespace std;

const float PI = 3.141593;
const float FENCE_PRICE = 35;
const float CONCRETE_PRICE = 20;

class Circle
{
public:
	Circle(float r);			//构造函数
	float circumference();		//计算圆的周长
	float area();				//计算圆的面积
private:
	float radius;				//圆半径
};

//类的实现
//构造函数初试换数据成员 radius
Circle::Circle(float r) {
	radius = r;
}

//计算圆的周长
float Circle::circumference() {
	return 2 * PI*radius;
}

//计算圆的面积
float Circle::area() {
	return PI*radius*radius;
}

int main()
{
	float radius;
	cout << "Enter the radius of the pool:";
	cin >> radius;
	Circle pool(radius);			//游泳池边界对象
	Circle poolRim(radius + 3);		//栅栏对象

	//计算栅栏造价并输出
	float fenceCost = poolRim.circumference()*FENCE_PRICE;
	cout << "Fencing Cost is $ " << fenceCost << endl;

	//计算过道造价并输出
	float concereCost = (poolRim.area() - pool.area())*CONCRETE_PRICE;
	cout << "Concrete Cost is $ " << concereCost << endl;

    return 0;
}


/*
	运行结果：
	Enter the radius of the pool:10
	Fencing Cost is $ 2858.85
	Concrete Cost is $ 4335.4
*/
