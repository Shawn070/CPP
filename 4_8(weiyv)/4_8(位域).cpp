// 位域
// 数据类型说明符 成员名:位数
//
// 冒号后的位数用来指定一个位域所占用的二进制位数。
// 只有bool, char, int enum的成员才能够被定义为位域。
//
// 设计一个结构体存储预约的成绩信息，需要包括学号、年级和成绩3项
// 内容，学号的范围是0~99 999 999，年级分为freshman, sophomore, 
// junior, senior四种，成绩包括A, B, C ,D四个等级。

# include<iostream>
using namespace std;

enum Level {FRESHMAN, SOPHOMORE, JUNIOR, SENIOR};
enum Grade {A, B, C, D};
class Student{
public:
	Student(unsigned number, Level level, Grade grade)
		: number(number), level(level), grade(grade){}
	void show();
private:
	unsigned number : 27;
	Level level : 2;
	Grade grade : 2;
};

void Student::show(){
	cout << "Number:	" << number << endl;
	cout << "Level:		";
	switch (level){
		case FRESHMAN: cout << "freshman"; break;
		case SOPHOMORE: cout << "sophomore"; break;
		case JUNIOR:	cout << "junior";	break;
		case SENIOR:	cout << "senior";	break;
	}
	cout << endl;
	cout << "Grade:	";
	switch(grade){
		case A: cout << "A"; break;
		case B: cout << "B"; break;
		case C: cout << "C"; break;
		case D: cout << "D"; break;
	}

};

int main(){
	Student s(12345678, SOPHOMORE, B);
	cout << "Size of Student: " << sizeof(Student) << endl;
	s.show();
	return 0;
}

