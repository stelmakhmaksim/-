#include "functions.h"

void show()//простая функция
{
	std::cout << "Я простая функция!!!" << endl;
}

void numbers(int a, int b)//функция с параметрами
{
	if (a <= b)
	while (a <= b)
		cout << a++ << "\t";
	else if (a >= b)
	while (a >= b)
		cout << b++ << "\t";
}

void hello(string name)//функция с параметрами по умолчанию
{
	cout << "\nПривет " << name << endl;
}

void change(int &c)//передача параметров по ссылке
{
	c += 10;
}

int change1(int c){
	c += 10;
	return c;
}
