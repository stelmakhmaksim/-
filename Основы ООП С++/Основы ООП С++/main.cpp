#include <iostream>
#include "structure.h"
using namespace std;

void write_new(Library l)
{
	int i = 1;
	for each (Book p in l.classic)
	{
		cout << "������������ ����������" << endl;
		cout << "����� �����: " << i++ << endl;
		cout << "�������������: " << p.id << endl;
		cout << "���-�� �������: " << p.pages << endl;
		cout << "���������: " << p.cost << endl << endl;
	}
	i = 1;
	for each (Book p in l.horror)
	{
		cout << "��������" << endl;
		cout << "����� �����: " << i++ << endl;
		cout << "�������������: " << p.id << endl;
		cout << "���-�� �������: " << p.pages << endl;
		cout << "���������: " << p.cost << endl << endl;
	}
	i = 1;
	for each (Book p in l.fantasy)
	{
		cout << "����������" << endl;
		cout << "����� �����: " << i++ << endl;
		cout << "�������������: " << p.id << endl;
		cout << "���-�� �������: " << p.pages << endl;
		cout << "���������: " << p.cost << endl << endl;
	}

	i = 1;
	for each (Book p in l.triller)
	{
		cout << "��������" << endl;
		cout << "����� �����: " << i++ << endl;
		cout << "�������������: " << p.id << endl;
		cout << "���-�� �������: " << p.pages << endl;
		cout << "���������: " << p.cost << endl << endl;
	}

	i = 1;
	for each (Book p in l.documentary)
	{
		cout << "��������������" << endl;
		cout << "����� �����: " << i++ << endl;
		cout << "�������������: " << p.id << endl;
		cout << "���-�� �������: " << p.pages << endl;
		cout << "���������: " << p.cost << endl << endl;
	}
}

void write_old(Library l)
{
	for (int i = 0; i < sizeof (l.classic) / sizeof(Book); i++)
	{
		cout << "������������ ����������" << endl;
		cout << "����� �����: " << i + 1 << endl;
		cout << "�������������: " << l.classic[i].id << endl;
		cout << "���-�� �������: " << l.classic[i].pages << endl;
		cout << "���������: " << l.classic[i].cost << endl << endl;
	}

	for (int i = 0; i < sizeof (l.horror) / sizeof(Book); i++)
	{
		cout << "��������" << endl;
		cout << "����� �����: " << i + 1 << endl;
		cout << "�������������: " << l.horror[i].id << endl;
		cout << "���-�� �������: " << l.horror[i].pages << endl;
		cout << "���������: " << l.horror[i].cost << endl << endl;
	}

	for (int i = 0; i < sizeof (l.fantasy) / sizeof(Book); i++)
	{
		cout << "����������" << endl;
		cout << "����� �����: " << i + 1 << endl;
		cout << "�������������: " << l.fantasy[i].id << endl;
		cout << "���-�� �������: " << l.fantasy[i].pages << endl;
		cout << "���������: " << l.fantasy[i].cost << endl << endl;
	}
}

int main()
{
	setlocale(0, "");

	Book c1 = { 1, 100, 50 };
	Book c2 = { 2, 100, 50 };
	Book c3 = { 3, 100, 50 };

	Book h1 = { 4, 200, 100 };
	Book h2 = { 5, 200, 100 };
	Book h3 = { 6, 200, 100 };

	Book f1 = { 7, 300, 150 };
	Book f2 = { 8, 300, 150 };
	Book f3 = { 9, 300, 150 };

	Library l1 = { { c1, c2, c3 }, { h1, h2, h3 }, { f1, f2, f3 } };

	Book c11 = { 1, 10, 5 };
	Book c22 = { 2, 10, 5 };
	Book c33 = { 3, 10, 5 };

	Book t1 = { 4, 20, 10 };
	Book t2 = { 5, 20, 10 };
	Book t3 = { 6, 20, 10 };

	Book d1 = { 7, 30, 100 };
	Book d2 = { 8, 30, 100 };

	Library l2 = { { c11, c22, c33 }, {}, {}, { t1, t2, t3, }, { d1, d2 } };

	write_new(l1);
	write_new(l2);

	Names n1 = Kevin;
	Names n2;
	n2 = Max;
	//cout << n1<<endl;//0
	//cin >> n1;//������
	n1 = n2;
	if (n1 == Kevin)
		cout << "Kevin\n";
	else
		cout << "no Kevin\n";

	system("pause");
	return 0;
}