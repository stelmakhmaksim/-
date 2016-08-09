#include "time.h"

int main()
{
	setlocale(0, "");

	Time t(2, 59, 59);
	int sec = t;
	t.showTime();
	cout << sec << endl;

	t = sec;
	t.showTime();

	system("pause");
	return 0;
}