#include "class.h"

int main()
{
	setlocale(0, "");

	/*NewYear n1;
	n1.set();
	n1.show();*/

	NewYear n1;
	NewYear n2(2016,2017);
	NewYear n3(2016);

	n1.show();
	n2.show();
	n3.show();

	system("pause");
	return 0;
}