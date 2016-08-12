#include "employee.h"

int main()
{
	setlocale(0, "");

	Employee* empl;

	Manager* man = new Manager;
	Developer* dev = new Developer;
	Designer* des = new Designer;

	empl = des;//указатели на базовые классы совместимы по типу с указателями на дочерние классы
	//empl->goToWork();
	empl = dev;
	//empl->goToWork();

	Employee* mas[3];
	mas[0] = man;
	mas[1] = dev;
	mas[2] = des;

	for (int i = 0; i < 3; i++)
		mas[i]->goToWork();

	system("pause");
	return 0;
}