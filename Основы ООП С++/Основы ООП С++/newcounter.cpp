#include "newcounter.h"

Counter NewCounter :: operator--(int)
{
	return Counter(count--);
}

Counter NewCounter :: operator--()
{
	return Counter(--count);
}

NewCounter::NewCounter(int c) : Counter(c)//������������ ������������ �� ��������
{}

void NewCounter::show_count()//���������� �������
{
	Counter::show_count();//�������� ����� �� ������ ��������
	cout << "��� ������ ������ NewCounter: " << count << endl;
}