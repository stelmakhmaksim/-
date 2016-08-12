#include "newcounter.h"

Counter NewCounter :: operator--(int)
{
	return Counter(count--);
}

Counter NewCounter :: operator--()
{
	return Counter(--count);
}

NewCounter::NewCounter(int c) : Counter(c)//наследование конструктора от родителя
{}

void NewCounter::show_count()//перегрузка функции
{
	Counter::show_count();//вызываем метод из класса родителя
	cout << "Это объект класса NewCounter: " << count << endl;
}