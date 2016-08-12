#include "newcounter.h"

int main()
{
	setlocale(0, "");

	Counter c;
	NewCounter nc(4);
	c++;
	nc++;
	nc--;
	nc--;
	//cout << c.getCount() << endl;
	//cout << nc.getCount() << endl;

	c.show_count();
	cout << endl;
	nc.show_count(); // сначала будет искать метод в своем классе и только потом в классе родителя

	system("pause");
	return 0;
}