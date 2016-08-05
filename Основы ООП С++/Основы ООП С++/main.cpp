#include "functions.h"

int main()
{
	setlocale(0, "");
	int a, b;
	cout << "¬ведите числа а и b: ";
	cin >> a >> b;
	cout << myplus(a, b) << endl;
	system("pause");
	return 0;
}