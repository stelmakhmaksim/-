#include "time.h"
#include "Array.h"

int main()
{
	setlocale(0, "");
	/*Time t1(1,15,47);
	Time t2(1,16,46);
	if (t1 > t2)
	cout << "t1>t2" << endl;
	else cout << "t2>=t1 "<<endl;*/

	Array a1;
	cout << a1[5] << endl;
	a1[5] = 7;
	cout << a1[5] << endl;

	system("pause");
	return 0;
}