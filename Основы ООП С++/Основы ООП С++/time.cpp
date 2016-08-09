#include "main.h"
#include "time.h"

Time::Time() : hou(0), min(0), sec(0)
{}

Time::Time(int h, int m, int s) : hou(h), min(m), sec(s)
{}

void Time::showTime()
{
	cout << hou << ':' << min << ':' << sec << endl;
}
//перегрузка булевской операции
bool Time::operator>(Time t2)
{
	int sec1 = hou * 3600 + min * 60 + sec;
	int sec2 = t2.hou * 3600 + t2.min * 60 + t2.sec;
	cout << sec1 << " " << sec2 << " ";
	return (sec1 > sec2) ? true : false;
}