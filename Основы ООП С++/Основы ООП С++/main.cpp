#include "C.h"

class A1
{
public:
	void show(){ cout << "Вызов функции" << endl; }
};

class B1:public A1
{};

class B2:public A1
{};

class C1:public B1, public B2
{};

int main()
{
	setlocale(0, "");

	/*C c(0,1,2);
	c.show_props();
	c.set_props(3, 4, 5);
	c.show_props();*/

	C1 c;
	c.B1::show();

	system("pause");
	return 0;
}