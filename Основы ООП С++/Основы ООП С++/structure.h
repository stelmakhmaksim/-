struct Book//� ��������� �� ���������� ��������� ������, � ������� �� ������� main
{
	int id;//���� ���������
	int pages;
	float cost;
};

struct Library
{
	Book classic[3];//���� ���������
	Book horror[3];
	Book fantasy[3];
	Book triller[4];
	Book documentary[2];
};

enum Names{ Jack, Kevin, Olga, Max };//�������� ������������ � ������� ������

void write_new(Library);
void write_old(Library);