#include "main.h"
//перегрузка унарных операций

class Counter
{
protected://скрытые переменные или функции
	int count;
public://открытые переменные или функции
	Counter();
	Counter(int c);
	int getCount();
	Counter operator++();
	Counter operator++(int);
	void show_count();
};