#include "functions.h"

int myplus(int a, int b)//������� � ������������ ���������
{
	return a + b;
}

/*inline void func1()
{
	cout << "��� ������������ �������" << endl;
}*/

void func()//����������� ����������
{
	static int count = 1;
	cout << "������� ����������� � " << count++<<" ���\n";
}