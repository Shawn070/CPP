// 11_10.cpp
// 用seekg 函数设置位置指针
// 使用seekg 可以实现面向记录的数据管理系统，用固定长度的记录尺寸乘以记录号，
// 便得到相对于文件末尾的字节位置，然后使用get 读这个记录。
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int values[]={ 3, 7, 0, 5, 4 };     // 位置 0*sizeof(int), 1*sizeof(int), 2*sizeof(int), 3*sizeof(int)
    ofstream os("integers", ios_base::out | ios_base::binary);
    os.write(reinterpret_cast<char *>(&values), sizeof(values));
    os.close();

    ifstream is("integers", ios_base::in | ios_base::binary);
    if(is){
        is.seekg(3*sizeof(int));    // 找到位置
        int v;
        is.read(reinterpret_cast<char *>(&v), sizeof(int));     // 读取数据
        cout<<"The 4th integer in the file 'integers' is "<<v<<endl;
    }else{
        cout<<"ERROR: Cannot open file 'integers'."<<endl;
    }
    return 0;
}

