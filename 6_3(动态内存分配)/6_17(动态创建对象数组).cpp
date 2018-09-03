// 6-16:
// 6-17:

#include<iostream>
using namespace std;
class Point{
public:
	Point():x(0), y(0){
		cout << "Default Constructor called." << endl;
	}
	Point(int x, int y):x(x), y(y){
		cout << "Constructor called." << endl;
	}
	~Point(){cout << "Destructor called." << endl;}
	int getX() const {return x;}
	int getY() const {return y;}
	void move (int newX, int newY){
		x = newX;
		y = newY;
	}
private:
	int x,y;
};

/* 6-16
int main(){
	cout << "Step one: " << endl;
	Point *ptr1=new Point;
	delete ptr1;

	cout << "Step two: " << endl;
	ptr1 = new Point(1, 2);
	delete ptr1;
	return 0;
}
*/

int main(){
	Point *ptr = new Point[2];
	ptr[0].move(5, 10);
	ptr[1].move(15, 20);
	cout << "Deleting..." << endl;
	delete[] ptr;
	return 0;
}

/* output:
Default Constructor called.
Default Constructor called.
Deleting...
Destructor called.
Destructor called.
*/
