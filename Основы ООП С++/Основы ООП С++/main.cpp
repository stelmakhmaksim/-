#include "main.h"
//��������������� ����/�����: ����� 6.02 ������ ����, ����� ��������� � float, �������� � ���� ������������������ �������� '6' ',' '0' '2'

void create_file();
void read_file();

void create_file1();
void read_file1();

int main()
{
	setlocale(0, "");

	//create_file();
	//read_file();

	create_file1();
	read_file1();

	system("pause");
	return 0;
}

void create_file()
{
	char ch = 'x';
	int i = 7;
	double d = 3.21;
	string str1 = "String1", str2 = "String 2";

	ofstream outfile("file.txt");//���� ��� ������ �����, �� �� ������������� ���������, � ���� ����, �� ����������������
	if (!outfile.is_open())
		cout << "�� ������� ������� ���� ��� ������" << endl;
	else cout << "���� ������� ������." << endl;
	outfile << ch << ' ' << i << ' ' << d << ' ' << str1 << ' ' << str2 << endl;
}

void read_file()//���� ������ �� ��������� ������������ ������ ���������� �������
{
	char ch;
	int i;
	double d;
	string str1, str2;

	ifstream infile("file.txt");
	if (!infile.is_open())
		cout << "�� ������� ������� ���� ��� ������." << endl;
	else
	{
		cout << "���� ������ ��� ������." << endl;
		infile >> ch >> i >> d >> str1 >> str2;
		cout << "ch= " << ch << "\ni= " << i << "\nd= " << d << "\nstr1= " << str1 << "\nstr2= " << str2 << endl;
	}
}

void create_file1()
{
	ofstream outfile("file.txt");//���� ��� ������ �����, �� �� ������������� ���������, � ���� ����, �� ����������������
	if (!outfile.is_open())
		cout << "�� ������� ������� ���� ��� ������" << endl;
	else
	{
		cout << "���� ������� ������." << endl;
		outfile << "String 1\n" << "String 2\n" << "String 3\n" << "String 4";
	}
}

void read_file1()//���� ������ �� ��������� ������������ ������ ���������� �������
{
	char buffer[50];
	ifstream infile("file.txt");
	if (!infile.is_open())
		cout << "�� ������� ������� ���� ��� ������." << endl;
	else
	{
		cout << "���� ������ ��� ������." << endl;
		while (!infile.eof())//���������� true, ����� ��������� ����� �����
		{
			infile.getline(buffer, 50);//���� � ������ ������ 50 ��������, �� �� �� ������� ���������� ������
			cout << buffer << endl;
		}
	}
}
