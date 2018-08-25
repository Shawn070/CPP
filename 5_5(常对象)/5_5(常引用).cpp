// 5_9.cpp 在5_6.cpp基础上修改
// 使用友元函数计算两点之间的距离

#include<iostream>
#include<cmath>
using namespace std;

class Point{
public:
	Point(int x=0, int y=0): x(x), y(y){}
	int getX(){return x;}
	int getY(){return y;}
	friend float dist(const Point &p1, const Point &p2);	// 友元函数声明，改1
private:
	int x, y;
};

float dist(const Point &p1, const Point &p2){	// 友元函数实现，改2
	double x=p1.x-p2.x;		// 通过对象访问私有数据成员
	double y=p1.y-p2.y;
	return static_cast<float>(sqrt(x*x + y*y));
}

int main(){
	const Point myp1(1, 1), myp2(4, 5);		// 改3
	cout << "The distance is : ";
	cout << dist(myp1, myp2) << endl;
	return 0;
}

/* output:
The distance is : 5
*/
