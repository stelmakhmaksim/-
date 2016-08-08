#include "main.h"

//перегрузка бинарных операций
class Time
{
private:
	int hou, min, sec;
public:
	Time();
	Time(int h, int m, int s);
	void showTime();
	Time operator+(Time);
};