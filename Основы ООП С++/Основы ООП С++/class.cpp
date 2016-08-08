#include "class.h"

NewYear::NewYear() : current_year(0), the_next_year(0)
{
	//���� ������������
	unix_year = 1969;
}

NewYear::~NewYear()//����������
{

}

NewYear::NewYear(int c, int n) : current_year(c), the_next_year(n)
{
	//����������� � ����� �����������
	unix_year = 1971;
}

NewYear::NewYear(int c) : current_year(c)
{
	the_next_year = ++c;
	unix_year = 1970;
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

void NewYear::show_stat()
{
	cout << "����������� ���������� " << unix_year << endl;
}

int NewYear::unix_year;
