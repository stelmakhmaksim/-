#include "main.h"

//перегрузка бинарных операций
class Time
{
private:
	int hou, min, sec;
	int sec1, sec2;
public:
	Time();
	explicit  Time(int s);//explicit исключает вероятность несанкционированного преобразования типов, можно только инициализировать переменную
	Time(int h, int m, int s);
	void showTime();
	operator int();
};