#include "main.h"

class Employee//абстрактный класс - это такой, объекты которого нельзя создать, но можно создать указатель. Для того, чтобы класс
//был абстрактным, необходимо, чтобы существовала хотя бы одна чистая виртуальная функция
{
public:
	virtual void goToWork() = 0 //чистая виртуальная функция
	{
		cout << "Работник пошел работать!" << endl;
	}
};

class Manager : public Employee
{
public:
	void goToWork()
	{
		cout << "Менеджер пошел работать!" << endl;
	}
};

class Developer : public Employee
{
public:
	void goToWork()
	{
		cout << "Разработчик пошел работать!" << endl;
	}
};

class Designer : public Employee
{
public:
	void goToWork()
	{
		cout << "Дизайнер пошел работать!" << endl;
	}
};