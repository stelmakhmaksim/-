#include "main.h"

class Something
{
private:
	string somestr;
	int someint;
public:
	Something(){}
	Something(string str, int i)
	{
		somestr = str;
		someint = i;
	}

	void showSomething()
	{
		cout << somestr << ' ' << someint << endl;
	}
	friend istream& operator >>(istream& s, Something& some)//������������� ������� ��� ����, ����� ����� ������ � ����� somestr � someint
	{
		cout << "������� ������: ";
		s >> some.somestr;
		cout << "������� �����: ";
		s >> some.someint;
		return s;
	}
	friend ostream& operator <<(ostream& s, Something& some)//������ �������� ����� ����� ����������, ������ �������� ����� ���������
	{
		s << some.somestr << ' - ' << some.someint << endl;
		return s;
	}
};