#include "functions.h"

int myplus(int a, int b)//функции с возвращаемым значением
{
	return a + b;
}

/*inline void func1()
{
	cout << "Это встраиваемая функция" << endl;
}*/

void func()//статические переменные
{
	static int count = 1;
	cout << "Функция запустилась в " << count++<<" раз\n";
}