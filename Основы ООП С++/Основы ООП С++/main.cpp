#include "Object.h"

int main()
{
	setlocale(0, "");

	/*int* ptr = new int(3);
	cout << *ptr << endl;*/
	//������ �� ��������� ���������� ���������
	/*int n = 0;
	cout << "������� ����������� �������" << endl;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "������� "<< i << " ������� �������" << endl;
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}*/

	Object *obj = new Object();
	obj->setProp(7);
	cout << (*obj).getProp() << endl;

	delete obj;
	system("pause");
	return 0;
}