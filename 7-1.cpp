//Clock.h
#include<iostream>
using namespace std;
class Clock{
public:
	void SetTime(int newH=0, int newM=0, int newS=0);
	void ShowTime();
	void ShowTime(int n);
private:
	int Hour;
	int Minute;
	int Second;
};


//Clock.cpp
#include "Clock.h"
void Clock::SetTime(int newH, int newM, int newS)
{
	Hour = newH;
	Minute = newM;
	Second = newS;
}

void Clock::ShowTime()
{
	cout<<Hour<<":"<<Minute<<":"<<Second<<endl;
}

void Clock::ShowTime(int n)
{
	cout<<Hour<<"点"<<Minute<<"分"<<Second<<"秒"<<endl;
}

//7-1.cpp
#include "Clock.h"
void main()
{
	Clock myclock;
	myclock.SetTime(12,5,0);
	myclock.ShowTime();
	myclock.ShowTime(1);
}