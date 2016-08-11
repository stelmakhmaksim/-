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

//�������������� ����� ������ �� ����������������� � �����������
Time::operator int()
{
	return hou * 3600 + min * 60 + sec;
}

//�������������� ����� ������ �� ������������ � ����������������
Time::Time(int s)
{
	hou = s / 3600;
	min = (s - hou * 3600) / 60;
	sec = s - hou * 3600 - min * 60;
}