#include <iostream>
#include <string>
using namespace std;

class NewYear
{
private://������� ���������� ��� �������
	int static unix_year;
	int current_year;
	int the_next_year;
public://�������� ���������� ��� �������
	void set();
	void show();
	void show_stat();
	NewYear();
	NewYear(int c, int n);
	NewYear(int c);
	~NewYear();
};