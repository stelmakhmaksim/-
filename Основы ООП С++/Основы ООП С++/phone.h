#include "main.h"
class Phone
{
private:
	int year;
	mutable string model;
	string owner;
	mutable string version;//��������� �������� ����������� �������� ����������������� ����
public:
	void setModel(string m)const{ model = m; }
	void setVersion(string v)const{ version = v; }//������ ������� �������� ���������� ���� ����������������� ���� ������ ������ ���� const
};