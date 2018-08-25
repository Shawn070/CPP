// 5_5.cpp

#include<iostream>
using namespace std;

class Point{
public:
	Point(int x = 0, int y = 0) : x(x), y(y){	// 构造函数
		count++;
	}
	Point(Point &p){	// 复制构造函数
		x = p.x;
		y = p.y;
		count++;
	}
	~Point(){count--;};
	int getX(){return x;}
	int getY(){return y;}

	static void showCount(){	// 静态函数成员
		cout << "Object count=" << count << endl;
	}
private:
	int x, y;
	static int count;	// 静态数据成员声明
};

int Point::count = 0;	// 静态数据成员定义和初始化，使用类名限定

int main(){
	Point a(4, 5);	// 定义对象a，其构造函数会使count增1
	cout << "Point A: " << a.getX() << ", " << a.getY();
	Point::showCount();

	Point b(a);
	cout << "Point B: " << b.getX() << ", " << b.getY();
	Point::showCount();

	return 0;
}

/* output:
Point A: 4, 5Object count=1
Point B: 4, 5Object count=2
*/
