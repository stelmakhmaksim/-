#include "main.h"
//���������� ������� ��������
class Counter
{
private://������� ���������� ��� �������
	int count;
public://�������� ���������� ��� �������
	Counter();
	Counter(int c);
	int getCount();
	Counter operator++();
	Counter operator++(int);
};