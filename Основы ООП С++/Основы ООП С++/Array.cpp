#include "Array.h"
//���������� �������� ���������� ������� []
Array::Array()
{
	for (int i = 0; i < LIMIT; i++)
		arr[i] = 0;
}

int& Array::operator[](int n)
{
	if (n < 0 || n >= LIMIT)
	{
		cout << "������ ����������" << endl;
		exit(1);
	}
	return arr[n];
}