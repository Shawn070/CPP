# 1.用字符数组存储和处理字符串
``` c++
const char * STRING1 = "This is a string.";
cout << STRING1;
```
>创建一个char数组，每个元素存放字符串的一个字符，在末尾放置一个'\0'
>对字符数组进行初始化赋值时，初值的形式可以是以逗号分隔的ASCII码或字符常量，也可以是整体的字符串常量。以下等价:
``` C++
#include<cstring>
char str[8] = {'p', 'r', 'o', 'g', 'r', 'a', 'm', '\0'};
char str[8] = "program";
char str[]  = "program";
```
>strcpy: 复制字符串(/br)
>strmap: 按辞典顺序比较大小(/br)
>strcat: 将两个字符串连接起来(/br)
>当字符串的。长度很不确定时，需要用new来动态创建字符数组，最后还要用delete释放

# 2.string类
1. 构造函数的原型
``` c++
string();	// 默认构造函数，建立一个长度为0的串
string(const string& rhs);	// 复制构造函数
string(const char *s);		// 用指针s所指向的字符串常量初始化string类的对象
string(const string &rhs, unsigned int pos, unsigned int n);
// 将对象rhs中的串从位置pos开始取n个字符串，用来初始化string类的对象
string(const char *s, unsigned int n);
// 用指针s所指向的字符串的前n个字符初始化string类的对象
string(unsigned int n, char c);
// 将参数c中的字符重复n次，用来初始化string类的对象

string str="Hello World!";
```

2. 常用成员函数功能介绍
``` c++
string append(const char *s);	// 将字符串s添加在本串尾
string assign(const char *s);	// 赋值，将s所指向的字符串赋值给本对象
int compare(const string &str) const;
// 比较本串与str中串的大小，<返回负数，>返回正数，=返回0
string & insert(unsigned int p0, const char *s);
// 将s所指向的字符串插入在本串中位置p0之前
string substr(unsigned int pos, unsigned int n) const;
// 取子串，取本串中位置pos开始的n个字符串，构成新的string类对象作为返回值
unsigned int find(const basic_string &str) const;
// 查找并返回str在本串中第一次出现的位置
unsigned int length() const;
// 返回串的长度(字符个数)
void swap(string &str);
// 将本串与str中的字符串进行交换
```

# getline
>cin的">>"，键盘输入时，空格会被输入为分隔符，如"
123 ABC"，123被读入，ABC将在下一次从键盘输入字符串时被读入。
如果希望从键盘读入字符串，直到行末为止，不以中间的空格作为输入的分隔符，可以使用头文件string中定义的getline 
``` c++
getline(cin, s2);
getline(cin, s2, ',');	// 以逗号作为分隔符
```

