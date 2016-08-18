#include "something.h"

//��� ���������� � ���� � ������ ������ ���������������� ���� ������
void write_read()
{
	Something some("string", 7);
	fstream file("file.dat", ios::binary | ios::out | ios::in);//��������� ������� ������ ��� ������ � ������ ���������� � ����
	file.write(reinterpret_cast<char*>(&some), sizeof(Something));

	cout << file.tellg() << endl;//��� ����, ����� �������� ����������, ��� � ��� ������ ����� ���������
	file.seekg(0);//��������� ����� � �����, �.�. �� ��� ���-�� �������� � ����, � ��� ����� ��������� � ������
	cout << file.tellg() << endl;

	Something some2;
	file.read(reinterpret_cast<char*>(&some2), sizeof(some2));//��� ������������� ����������� � ������������ �������, ����������, ����� ���
	some2.showSomething();//����� ���������� ����� �����, ����, ���� � ��� ����� ������ ������, ������ �� ����� ����������� ���������
	//����������� ����������� ��� �������, ������� �� �������� ����������� �������
}
int main()
{
	setlocale(0, "");

	//write_read();

	//���������� ���������� ����� � ������
	Something some1, some2;
	cout << some1 << some2;
	cin >> some1 >> some2;
	//��� ������� �� ��� cin � cout �������� �����
	//�������� �� ������ � ���������
	system("pause");
	return 0;
}