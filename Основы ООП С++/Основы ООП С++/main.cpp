#include "functions.h"

int main()
{
	setlocale(0, "");

	show();

	int a, b;
	cout << "¬ведите а и b: " << endl;
	cin >> a >> b;
	numbers(a, b);

	hello();
	hello("Kate");

	cout << "¬ведите значение \n";
	cin >> a;
	change(a);
	cout << a << endl;

	b = change1(a);
	cout << b << endl;

	system("pause");
	return 0;
}