#include "main.h"

//���������� �������� ��������
class Time
{
private:
	int hou, min, sec;
	int sec1, sec2;
public:
	Time();
	explicit  Time(int s);//explicit ��������� ����������� �������������������� �������������� �����, ����� ������ ���������������� ����������
	Time(int h, int m, int s);
	void showTime();
	operator int();
};