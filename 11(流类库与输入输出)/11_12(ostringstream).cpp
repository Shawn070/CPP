// 11_12.cpp
// 用ostringstream将字符串转换为数值。
// fromString 可以把各种支持 “>>”提取符的类型的字符串表示形式转换为该类型的数据。
#include<iostream>
#include<sstream>
#include<string>
using namespace std;

template<class T>
inline T fromString(const string &str){
    istringstream is(str);      // 创建字符串输入流
    T v;
    is >> v;                    // 从字符串输入流中读取变量
    return v;
}

int main(){
    int v1=fromString<int>("5");
    cout<<v1<<endl;
    double v2=fromString<double>("1.2");
    cout<<v2<<endl;
    return 0;
}

/*
5
1.2
*/