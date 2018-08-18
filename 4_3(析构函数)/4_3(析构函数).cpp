// 4_3(��������).cpp : �������̨Ӧ�ó������ڵ㡣

// ��Ӿ�ظ���Ԥ�㣬Cirle�ࡣ
// һԲ����Ӿ�أ�������������Χ��һԲ�ι���������
// ������Χ��դ����դ���۸�Ϊ35Ԫ/�ף��������20Ԫ/
// ƽ���ס��������Ϊ3�ף���Ӿ�ذ뾶�ɼ������롣
// Ҫ���̼��㲢���������դ������ۡ�

#include "stdafx.h"
#include <iostream>
using namespace std;

const float PI = 3.141593;
const float FENCE_PRICE = 35;
const float CONCRETE_PRICE = 20;

class Circle
{
public:
	Circle(float r);			//���캯��
	float circumference();		//����Բ���ܳ�
	float area();				//����Բ�����
private:
	float radius;				//Բ�뾶
};

//���ʵ��
//���캯�����Ի����ݳ�Ա radius
Circle::Circle(float r) {
	radius = r;
}

//����Բ���ܳ�
float Circle::circumference() {
	return 2 * PI*radius;
}

//����Բ�����
float Circle::area() {
	return PI*radius*radius;
}

int main()
{
	float radius;
	cout << "Enter the radius of the pool:";
	cin >> radius;
	Circle pool(radius);			//��Ӿ�ر߽����
	Circle poolRim(radius + 3);		//դ������

	//����դ����۲����
	float fenceCost = poolRim.circumference()*FENCE_PRICE;
	cout << "Fencing Cost is $ " << fenceCost << endl;

	//���������۲����
	float concereCost = (poolRim.area() - pool.area())*CONCRETE_PRICE;
	cout << "Concrete Cost is $ " << concereCost << endl;

    return 0;
}


/*
	���н����
	Enter the radius of the pool:10
	Fencing Cost is $ 2858.85
	Concrete Cost is $ 4335.4
*/
