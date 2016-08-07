#include "class.h"

NewYear::NewYear() :current_year(0), the_next_year(0)
{
	//тело конструктора
}

NewYear::NewYear(int c,int n) : current_year(c), the_next_year(n)
{
	//конструктор с двумя параметрами
}

NewYear::NewYear(int c) : current_year(c)
{
	the_next_year = ++c;
}

void NewYear::set()
{
	cout << "Введите текущий год: ";
	cin >> current_year;
	cout << "Введите следующий год: ";
	cin >> the_next_year;
}

void NewYear::show()
{
	cout << "Текущий год: " << current_year << endl;
	cout << "Следующий год: " << the_next_year << endl;
}
