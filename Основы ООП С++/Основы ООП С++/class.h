#include <iostream>
#include <string>
using namespace std;

class NewYear
{
private://������� ���������� ��� �������
	int current_year;
	int the_next_year;
public://�������� ���������� ��� �������
	void set();
	void show();
	NewYear();
	NewYear(int c,int n);
	NewYear(int c);
};