## 6.2.4 指针的赋值
1. 可以声明指向常量的指针，此时不能通过指针来改变所指对象的值，但指针本身可以改变，可以指向另外的对象。例如:
``` c++
int a;
const int * p1 = &a;
int b;
p1 = &b;
*p1 = 1;	// 错误
```
2. 可以声明指针类型的常量，此时指针本身的值不能被改变。例如:
``` c++
int * const p2 = &a;
p2=&b;		// 错误
```
3. 任何类型的指针都可以赋值给void类型的指针变量。经过使用类型显示转换，通过void类型的指针便可以访问任何类型的数据。

## 6.2.5 指针运算
``` c++
// 空指针: 一个不指向任何有效地址的指针。
int *p;
p = 0;
// 或者
int *p=NULL;

// 取内容
*(p1+n1);
p1[n1];

// 数组, 利用指针数组输出单位矩阵
int line1[]={1, 0, 0};
int line2[]={0, 1, 0};
int line3[]={0, 0, 1};
for (int i=0; i<3; i++){
	for (int j=0; j<3; j++){
		cout << pLine[i][j] << " ":		// 等价于*(pLine[i]+j)
	cout << endl;
	}
}

// 二维数组
int array2[3][3] = {{11, 12, 13}, {21, 22, 23}, {31, 32, 33}};
for (int i=0; i<3; i++){
	for (itn j = 0; j<3; j++)
		cout << *(*(array2+i)+j) << " ";	
	cout << endl;
}
```
## 6.2.8 用指针作为函数参数
1. 使实参与形参指针指向共同的内存空间，以达到参数双向传递的目的。
2. 减少函数调用时，数据传递的开销。
3. 通过指向函数的指针传递函数代码的首地址。
``` c++
void splitFloat(float x, int *intPart, float *fracPart)
splitFloat(x, &n, &f);
```
## 6.2.9 指针型函数
使用指针型函数的最主要目的就是要在函数结束时把大量的数据从被调函数返回到主函数中。而通常非指针型函数调用结束后，只能返回一个变量或者对象。
``` c++
数据类型 *函数名(参数表){
	函数体
}
```
## 6.2.10 指向函数的指针
函数名代表数函数代码起始地址的同时，也包括函数返回值类型和参数的个数、类型、排列次序等信息。
``` c++
数据类型 ( *函数指针名)(形参表)

typedef int( *DoubleIntFunction)(double);
DoubleIntFunction funcPtr;
```
## 6.2.11 对象指针
### 1.对象指针的一般概念
语法形式：
对象指针名->成员名	等价于*对象指针名	.成员名
``` c++
Point a(4, 5);
POint *p1=&a;
cout << p1->getX() << endl;
cout << a.getX() << endl;
```
前向引用声明：
``` c++
class Fred;		// 前向引用声明
class Barney{
	Fred x;		// 错误：类Fred的定义尚不完善
	fred *x;	// 正确
};
class Fred{
	Barney y;
};
```
### 2.this指针
一个隐含于每一个类的非静态成员函数中的特殊指针（）包括构造函数和析构函数，用于指向正在被成员函数操作的对象。
``` c++
return x;
等价于
return this->x;
```
### 3.指向类的非静态成员的指针
类型说明符 类名::*指针名；		// 声明指向数据成员的指针
类型说明符 (类名::*指针名)（参数表）；		// 声明指向函数成员的指针

指针名=&类名::数据成员名；		// 对数据成员指针赋值
>在指针中存放该数据成员在类中的相对位置（即相对于起始地址的地址偏移量）
``` c++
// 6-13
// 访问对象的公有成员的不同方式
int main(){
	Point a(4, 5);
	Point *p1=&a;
	int (Point::*funcPtr)() const=&Point::getX();

	cout << a.getX() << endl;		// 使用对象名访问成员函数
	cout p1->getx() << endl;		// 使用对象指针访问成员函数
	cout << (a.*funcPtr)() << endl;	// 成员函数和对象名
	cout << (p1->*funcPtr)() << endl;	// 成员函数指针和对象指针

	return 0;
}
```
### 4.指向类的静态成员的指针
``` c++
int *ptr = &Point::coutn;
cout << "object count=" << *ptr << endl;

void ( *funcPtr)() = Point::showCount;
funcPtr();
```






























