// 11_3.cpp
// 参数ios_base::left 是ios_base 的静态常量，因此引用时必须包括ios_base::前缀
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
    double values[]={1.23, 35.36, 653.7, 4358.24};
    string names[]={"Zoot", "Jummy", "Al", "Stan"};
    for(int i=0; i<4; i++)
        cout<<setiosflags(ios_base::left)       // 左对齐
            <<setw(6)<<names[i]
            <<resetiosflags(ios_base::left)     // 关闭左对齐
            <<setw(10)<<values[i]<<endl;
    return 0;
}

/* output:
Zoot        1.23
Jummy      35.36
Al         653.7
Stan     4358.24
*/