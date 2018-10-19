// 11_7.cpp
// get 函数应用举例
#include<iostream>
using namespace std;
int main(){
    char ch;
    while((ch=cin.get())!=EOF)
        cout.put(ch);
    return 0;
}

/* intput:
abc xyz 123
output:
abc xyz 123

当按下Ctrl+Z及回车键键时，读入EOF，程序结束。
*/