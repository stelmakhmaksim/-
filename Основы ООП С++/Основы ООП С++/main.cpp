#include <iostream>
using namespace std;

struct Book//в структуре не происходит выделение памяти, в отличии от функции main
{
	int id;//поле структуры
	int pages;
	float cost;
};

void write(Book b)
{
	cout << "Идентификатор книги: " << b.id << endl;
	cout << "Кол-во страниц книги: " << b.pages << endl;
	cout << "Стоимость книги: " << b.cost << endl << endl;
}


int main()
{
	setlocale(0, "");

	Book b1;
	b1.id = 1;
	b1.pages = 150;
	b1.cost = 99.9;
	write(b1);

	b1 = { 1, 15, 33 };
	write(b1);

	Book b2 = { 2, 300, 130.5 };
	write(b2);

	Book b3;
	b3 = { 3, 5, 8 };
	write(b3);

	b3 = b1;
	write(b3);

	system("pause");
	return 0;
}