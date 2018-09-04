*潜复制*:两个指针指向的是同一内存地址
``` c++
ArrayOfPoint pointsArray2 = pointsArray1;	// 创建对象数组副本
```
>弊病:在程序结束之前pointsAr()ray1和pointsArray2的析构函数会被自动调用，动态分配的内存空间会被释放。由于两个对象共用了同一块内存空间，因此该空间被两次释放，导致错误。
>解决:编写复制构造函数，实现"深复制"
``` c++
// 6-22
#include<iostream>
#include<cassert>
using namespace std;
class Point{...};
class ArrayOfPoints{
public:
	ArrayOfPoints(const ArrayOfPoints &v);
	...
};
ArrayOfPoints::ArrayOfPoints(const ArrayOfPoints &v){
	size = v.size;
	points = new Points[size];
	for(int i=0; i<size; i++)
		points[i] = v.points[i];
}
int main(){...}
```

