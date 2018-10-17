// 11_1.cpp
// 使用width 函数控制输出宽度。
// 在一列中以至少10个字符宽度按右对齐方式输出数值。
#include<iostream>
using namespace std;

int main(){
    double values[]={1.23, 35.36, 653.7, 4358.24};
    for(int i=0; i<4; i++){
        cout.fill('*');
        cout.width(10);
        cout<<values[i]<<endl;
    }
}

/* output:
******1.23
*****35.36
*****653.7
***4358.24
*/