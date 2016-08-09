#include "time.h"

int main()
{
	setlocale(0, "");

	Time t(2, 59, 59);
	int sec = t;
	t.showTime();
	cout << sec << endl;
	Time t2(5);
	t = sec;
	t.showTime();
	t2.showTime();
	system("pause");
	return 0;
}