// 4_4(������).cpp : �������̨Ӧ�ó������ڵ㡣
// �߶�(Line)��

#include "stdafx.h"
#include <iostream>
using namespace std;

class Point							//Point��Ķ���
{
public:								//�ⲿ�ӿ�
	Point(int xx = 0, int yy = 0)	//���캯��
	{
		x = xx;
		y = yy;
	}
	Point(Point &p);				//���ƹ��캯��
	int getX() { return x; }
	int getY() { return y; }
private:							//˽������
	int x, y;
};

Point::Point(Point &p)				//���ƹ��캯��
{
	x = p.x;
	y = p.y;
	cout << "Calling the copy constructor of Point" << endl;
}

//������
class Line {						//Line��Ķ���
public:
	Line(Point xp1, Point xp2);
	Line(Line &l);
	double getLen() { return len; }
private:
	Point p1, p2;					//Point��Ķ���p1, p2
	double len;
};

//�����Ĺ��캯��
Line::Line(Point xp1, Point xp2) : p1(xp1), p2(xp2) {
	cout << "Calling constructor of Line" << endl;
	double x = static_cast<double>(p1.getX() - p2.getX());
	double y = static_cast<double>(p1.getY() - p2.getY());
	len = sqrt(x*x + y*y);
}

//�����ĸ��ƹ��캯��
Line::Line(Line &l) : p1(l.p1), p2(l.p2) {
	cout << "Calling the copy constructor of Line" << endl;
	len = l.len;
}

int main()
{
	Point myp1(1, 1), myp2(4, 5);					//���� Point ��Ķ���
	Line line(myp1, myp2);							//���� Line ��Ķ���
	Line line2(line);								//���ø��ƹ��캯������һ���¶���
	cout << "The length of the Line is: ";
	cout << line.getLen() << endl;
	cout << "The length of the line2 is: ";
	cout << line2.getLen() << endl;
    return 0;
}

/*
	���н����
	Calling the copy constructor of Point
	Calling the copy constructor of Point
	Calling the copy constructor of Point
	Calling the copy constructor of Point
	Calling constructor of Line
	Calling the copy constructor of Point
	Calling the copy constructor of Point
	Calling the copy constructor of Line
	The length of the Line is: 5
	The length of the line2 is: 5
*/