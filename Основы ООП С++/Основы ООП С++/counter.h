#include "main.h"
//���������� ������� ��������

class Counter
{
protected://������� ���������� ��� �������
	int count;
public://�������� ���������� ��� �������
	Counter();
	Counter(int c);
	int getCount();
	Counter operator++();
	Counter operator++(int);
	void show_count();
};