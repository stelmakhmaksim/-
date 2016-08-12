#include "main.h"

void addFive(int *p)
{
	*p += 5;
}

int main()
{
	setlocale(0, "");
	//основы указателей
	/*int var1 = 3, var2 = 5;
	cout << var1 << endl << &var1 << endl << var2 << endl << &var2 << endl;
	int* p;
	p = &var1;
	cout << p << endl << *p << endl;
	*p = 11;
	cout << "var1 " << var1 << endl;*/

	//перебор массива с помощью указателей
	/*int arr[] = { 1, 2, 3 };
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	cout << arr[i] <<endl;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	cout << *(arr + i) << endl;
	for each (int p in arr)
	{
	cout << p <<endl ;
	}*/

	//передача указателей в функцию
	int a = 3;
	cout << "a = " << a << endl;
	cout << a;
	addFive(&a);
	cout << " + 5 = " << a << endl;


	system("pause");
	return 0;
}