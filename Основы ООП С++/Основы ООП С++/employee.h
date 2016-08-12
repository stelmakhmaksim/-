#include "main.h"

class Employee//����������� ����� - ��� �����, ������� �������� ������ �������, �� ����� ������� ���������. ��� ����, ����� �����
//��� �����������, ����������, ����� ������������ ���� �� ���� ������ ����������� �������
{
public:
	virtual void goToWork() = 0 //������ ����������� �������
	{
		cout << "�������� ����� ��������!" << endl;
	}
};

class Manager : public Employee
{
public:
	void goToWork()
	{
		cout << "�������� ����� ��������!" << endl;
	}
};

class Developer : public Employee
{
public:
	void goToWork()
	{
		cout << "����������� ����� ��������!" << endl;
	}
};

class Designer : public Employee
{
public:
	void goToWork()
	{
		cout << "�������� ����� ��������!" << endl;
	}
};