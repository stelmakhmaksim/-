#include "functions.h"

void show()//������� �������
{
	std::cout << "� ������� �������!!!" << endl;
}

void numbers(int a, int b)//������� � �����������
{
	if (a <= b)
	while (a <= b)
		cout << a++ << "\t";
	else if (a >= b)
	while (a >= b)
		cout << b++ << "\t";
}

void hello(string name)//������� � ����������� �� ���������
{
	cout << "\n������ " << name << endl;
}

void change(int &c)//�������� ���������� �� ������
{
	c += 10;
}

int change1(int c){
	c += 10;
	return c;
}
