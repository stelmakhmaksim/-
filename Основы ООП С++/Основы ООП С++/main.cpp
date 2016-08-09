#include "time.h"
#include "phone.h"
int main()
{
	setlocale(0, "");

	/*Time t(16000);
	t.showTime();

	int sec = t;
	int sec2 = 156;
	t = sec2;//ошибка, т.к. explicit*/

	const Phone p;
	p.setModel("model");
	p.setVersion("1.9");

	system("pause");
	return 0;
}