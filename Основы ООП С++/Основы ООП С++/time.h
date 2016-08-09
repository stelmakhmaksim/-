#include "main.h"

//перегрузка бинарных операций
class Time
{
private:
	int hou, min, sec;
	int sec1, sec2;
public:
	Time();
	Time(int h, int m, int s);
	void showTime();
	void showSec();
	bool operator>(Time);
};