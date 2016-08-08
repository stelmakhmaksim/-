#include "counter.h"
#include "time.h"

int main()
{
	setlocale(0, "");

	/*Counter c1;
	Counter c2;
	cout << c1.getCount() << endl;
	c1++;
	c2 = ++c1;
	cout << c2.getCount() << endl;
	cout << c1.getCount() << endl;
	c2=c1++;
	cout << c2.getCount() << endl;
	cout << c1.getCount() << endl;*/

	Time t1(2, 15, 56);
	Time t2(3, 45, 5);
	Time t3(5, 5, 5);
	t3 = t2 + t1 + t3;
	t3.showTime();

	system("pause");
	return 0;
}