>模板是C++支持参数化程序设计的工具，通过它可以实现参数化多态性。所谓参数化多态性概述就是将程序所处理的对象的类型参数化使得一段程序可以用于处理多种不同类型的对象。

# 1.函数模板
``` c++
template<模板参数表>
类型名 函数名(参数表)
{
	函数体的定义
}
```
模板参数表由用逗号分隔的模板参数构成，可以包括以下内容:
1. class(或yepename)标识符，指明可以接收一个类型参数。可以是类型，也可以是内部类型或自定义类型。
2. "类型说明符"标识符，指明可以接收一个由“类型说明符”所规定类型的常量作为参数。
3. template<参数表>class 标识符，指明可以接收一个类模板名作为参数。
例子:
``` c++
#include<iostream>
using namespace std;
template<typename T>
T abs(T x){
	return x<0?-x:x;
}
int main(){
	int n=-5;
	double d=-5.5;
	cout<<abs(n)<<endl;
	cout<<abs(d)<<endl;
	return 0;
}
```
>当类型参数的含义确定后，编译器将以函数模板为样板，生成一个函数，这一过程称为函数模板的实例化。例如:
``` c++
int abs(int x){
	return x<0?-x:x;
}
```





