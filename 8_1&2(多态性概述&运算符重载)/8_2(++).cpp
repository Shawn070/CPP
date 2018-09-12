// 8_2.cpp
// 将单目运算符“++”重载为成员函数形式

#include<iostream>
using namespace std;
class Clock{
public:
	Clock(int hour=0, int minute=0, int second=0);
	void showTime() const;
	Clock operator++();
	Clock operator++(int);
private:
	int hour, minute, second;
};

Clock::Clock(int hour/*=0*/, int minute/*=0*/, int second/*=0*/){
	if(0<=hour && hour<24 && 0<=minute && minute<60 && 0<=second && second<60){
		this->hour=hour;
		this->minute=minute;
		this->second=second;
	}else
		cout<<"Time error!"<<endl;
}

void Clock::showTime() const{
	cout<<hour<<":"<<minute<<":"<<second<<endl;
}

Clock Clock::operator++(){
	second++;
	if(second>=60){
		second-=60;
		minute++;
		if(minute>=60){
			minute-=60;
			hour=(hour+1)%24;
		}
	}
	return *this;
}

Clock Clock::operator++(int){
	Clock old = *this;
	++(*this);
	return old;
}

int main(){
	Clock myClock(23, 59, 59);
	cout<<"First time output: ";
	myClock.showTime();
	cout<<"show myClock++:	";
	(myClock++).showTime();
	cout<<"show ++myClock:	";
	(++myClock).showTime();
	return 0;
}

// 语法规定，单目运算符重载为成员函数时没有形参，
// 而后置单目运算符重置为成员函数时需要一个int型形参。
// 纯粹是用来区别前置与后置
/*
First time output: 23:59:59
show myClock++:	23:59:59
show ++myClock:	0:0:1
*/

