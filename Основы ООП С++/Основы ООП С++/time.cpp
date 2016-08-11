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

//t3 = t1 + t2; t1 - вызывает операцию, а t2 является аргументом
Time Time :: operator+(Time t2)
{
	Time t_res;
	t_res.sec = sec + t2.sec;
	if (t_res.sec >= 60)
	{
		t_res.sec -= 60;
		t_res.min = 1;
	}

	t_res.min += min + t2.min;
	if (t_res.min >= 60)
	{
		t_res.min -= 60;
		t_res.hou = 1;
	}

	t_res.hou += hou + t2.hou;
	return t_res;
}