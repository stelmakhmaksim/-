#include "class.h"

NewYear::NewYear() :current_year(0), the_next_year(0)
{
	//���� ������������
}

NewYear::NewYear(int c,int n) : current_year(c), the_next_year(n)
{
	//����������� � ����� �����������
}

NewYear::NewYear(int c) : current_year(c)
{
	the_next_year = ++c;
}

void NewYear::set()
{
	cout << "������� ������� ���: ";
	cin >> current_year;
	cout << "������� ��������� ���: ";
	cin >> the_next_year;
}

void NewYear::show()
{
	cout << "������� ���: " << current_year << endl;
	cout << "��������� ���: " << the_next_year << endl;
}
