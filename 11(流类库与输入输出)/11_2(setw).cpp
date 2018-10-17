// 11_2.cpp
// 使用setw操纵符指定宽度
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
    double values[]={1.23, 35.36, 653.7, 4358.24};
    string names[]={"Zoot", "Jummy", "Al", "Stan"};
    for(int i=0; i<4; i++)
        cout<<setw(6)<<names[i]<<setw(10)<<values[i]<<endl;
    return 0;
}

/* output：
  Zoot      1.23
 Jummy     35.36
    Al     653.7
  Stan   4358.24
*/