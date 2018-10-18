// 11_5.cpp
// 建立一个文件输出流并将Date结构的二进制值写入文件。
#include<fstream>
using namespace std;
struct Date{
    int mondy, day, year;
};
int main(){
    Date dt={6, 10, 92};
    ofstream file("date.dat", ios_base::binary);
    file.write(reinterpret_cast<char*>(&dt), sizeof(dt));
    file.close();
    return 0;
}


// write 函数遇到控字符时并不会停止，因此能写入完整的类结构，该函数带两个参数：一个char 指针（指向内存数据的起始地址）和一个所写的字节数。注意需要用reinterpret_cast将该对象的地址显式转换为char* 类型。

