struct Book//в структуре не происходит выделение памяти, в отличии от функции main
{
	int id;//поле структуры
	int pages;
	float cost;
};

struct Library
{
	Book classic[3];//поле структуры
	Book horror[3];
	Book fantasy[3];
	Book triller[4];
	Book documentary[2];
};

enum Names{ Jack, Kevin, Olga, Max };//проблема перечислений с потоком вывода

void write_new(Library);
void write_old(Library);