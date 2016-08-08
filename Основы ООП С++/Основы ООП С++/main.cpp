#include "class.h"

int main()
{
	setlocale(0, "");

	/*NewYear n1;
	n1.set();
	n1.show();*/
	
	NewYear n1;
	NewYear *n2 = new NewYear(2016,2017);
	NewYear n3(2016);

	cout << "Переменная n1" << endl;
	n1.show();
	cout << "Переменная n2" << endl;
	n2->show();
	cout << "Переменная n3" << endl;
	n3.show();

	n1.show_stat();
	n2->show_stat();
	n3.show_stat();

	system("pause");
	return 0;
}