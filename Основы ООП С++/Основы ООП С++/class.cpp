#include "class.h"

NewYear::NewYear() : current_year(0), the_next_year(0)
{
	//тело конструктора
	unix_year = 1969;
}

NewYear::~NewYear()//деструктор
{

}

NewYear::NewYear(int c, int n) : current_year(c), the_next_year(n)
{
	//конструктор с двумя параметрами
	unix_year = 1971;
}

NewYear::NewYear(int c) : current_year(c)
{
	the_next_year = ++c;
	unix_year = 1970;
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

void NewYear::show_stat()
{
	cout << "Статическая переменная " << unix_year << endl;
}

int NewYear::unix_year;
