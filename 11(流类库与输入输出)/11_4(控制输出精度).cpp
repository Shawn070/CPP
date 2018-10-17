// 11_4.cpp
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
    double values[]={1.23, 35.36, 653.7, 4358.24};
    string names[]={"Zoot", "Jummy", "Al", "Stan"};
    
    // cout<<setiosflags(ios_base::fixed);     // 一个小数位输出
    cout<<setiosflags(ios_base::scientific);      // 
    for(int i=0; i<4; i++)
        cout<<setiosflags(ios_base::left)
            <<setw(6)<<names[i]
            <<resetiosflags(ios_base::left)
            <<setw(10)<<setprecision(1)<<values[i]<<endl;
    return 0;
}

/*
Zoot         1.2
Jummy       35.4
Al         653.7
Stan      4358.2
*/

/*
Zoot    1.2e+000
Jummy   3.5e+001
Al      6.5e+002
Stan    4.4e+003
*/