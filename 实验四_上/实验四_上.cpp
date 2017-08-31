// ʵ����_��.cpp : �������̨Ӧ�ó������ڵ㡣
// ��һ��
// ����һ��CPU�࣬�����ȼ���rank����Ƶ�ʣ�frequency������ѹ��valtage�������ԣ����������г�Ա����run��stop��
// ���У�
// rankΪö������CPU_Rank,����Ϊenum CPU_Rank{P1=1, P2, P3, P4, P5, P6, P7}��frequencyΪ��λ��MHz����������voltageΪ�����͵ĵ�ѹֵ��
// ע�ⲻͬ�������Եĳ�Ա���ʷ�ʽ�����۲칹�캯�������������ĵ���˳��

#include "stdafx.h"
#include <iostream>
using namespace std;

enum CPU_Rank { P1 = 1, P2, P3, P4, P5, P6, P7 };
class CPU
{
	CPU_Rank rank;
	int frequency;
	float voltage;
public:
	CPU(CPU_Rank r, int f, float v)
	{
		rank = r;
		frequency = f;
		voltage = v;
		cout << "������һ��CPU!" << endl;
	}
	~CPU() { cout << "������һ��CPU!" << endl; }	//��������

	CPU_Rank GetRank() const { return rank; }		//�ⲿ�ӿں���
	int GetFrequency() const { return frequency; }
	float GetVoltage() const { return voltage; }

	void SetRank(CPU_Rank r) { rank = r; }
	void SetFrequency(int f) { frequency = f; }
	void SetVoltage(float v) { voltage = v; }

	void Run() { cout << "CPU��ʼ���У�" << endl; }
	void Stop() { cout << "CPUֹͣ���У�" << endl; }
};

int main()
{
	CPU a(P6, 300, 2.8);
	a.Run();
	a.Stop();

    return 0;
}

