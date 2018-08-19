// 4_6_2(联合体).cpp : 定义控制台应用程序的入口点。
// 使用联合体保存成绩信息，并输出。

// #include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class ExamInfo {
public:
	//3种构造函数，分别用等级、是否通过和百分制来初始化
	ExamInfo(string name, char grade)
		:name(name), mode(GRADE), grade(grade) {}
	ExamInfo(string name, bool pass)
		:name(name), mode(PASS), pass(pass) {}
	ExamInfo(string name, int percent)
		:name(name), mode(PERCENTAGE), percent(percent) {}
	void show();
private:
	string name;			//课程名称
	enum {
		GRADE,
		PASS,
		PERCENTAGE
	} mode;					//采用何种计分方式，注意这里
	union {					//联合体
		char grade;			//等级制的成绩
		bool pass;			//是否通过
		int percent;		//百分制的成绩
	};
};

void ExamInfo::show() {
	cout << name << ":";
	switch (mode) {			//注意这里用的mode
	case GRADE:
		cout << grade;
		break;
	case PASS:
		cout << (pass ? "PASS" : "FAIL");
		break;
	case PERCENTAGE:
		cout << percent;
		break;
	}
	cout << endl;
}

int main()
{
	ExamInfo course1("English", 'B');
	ExamInfo course2("Calculus", true);
	ExamInfo course3("C++ Programming", 85);
	course1.show();
	course2.show();
	course3.show();
    return 0;
}

/*
	运算结果：
	English:B
	Calculus:PASS
	C++ Programming:85
*/
