// 9_2.cpp
#include<iostream>
#include<cstdlib>
using namespace std;

struct Student{
	int id;
	float gpa;
};

template<class T>
class Store{
private:
	T item;
	bool haveValue;
public:
	Store();
	T &getElem();
	void putElem(const T &x);
};

//以下实现各成员函数
template<class T>
Store<T>::Store():haveValue(false){}

template<class T>
T &Store<T>::getElem(){
	if(!haveValue){
		cout<<"No item present!"<<endl;
		exit(1);
	}
	return item;
}

template<class T>
void Store<T>::putElem(const T &x){
	haveValue=true;
	item=x;
}

int main(){
	Store<int>s1, s2;
	s1.putElem(3);
	s2.putElem(-7);
	cout<<s1.getElem()<<" "<<s2.getElem()<<endl;

	Student g={1000, 23};
	Store<Student>s3;

	s3.putElem(g);
	cout<<"The stutdent id is "<<s3.getElem().id<<endl;

	Store<double>d;
	cout<<"Retriveing object d...";
	cout<<d.getElem()<<endl;

	return 0;
}

/* ouput:
3 -7
The stutdent id is 1000
Retriveing object d...No item present!
*/
