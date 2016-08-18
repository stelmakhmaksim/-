#include "main.h"

class Something
{
private:
	string somestr;
	int someint;
public:
	Something(){}
	Something(string str, int i)
	{
		somestr = str;
		someint = i;
	}

	void showSomething()
	{
		cout << somestr << ' ' << someint << endl;
	}
	friend istream& operator >>(istream& s, Something& some)//дружественные функции дл€ того, чтобы иметь доступ к пол€м somestr и someint
	{
		cout << "¬ведите строку: ";
		s >> some.somestr;
		cout << "¬ведитн число: ";
		s >> some.someint;
		return s;
	}
	friend ostream& operator <<(ostream& s, Something& some)//первый аргумент стоит перед оператором, второй аргумент после оператора
	{
		s << some.somestr << ' - ' << some.someint << endl;
		return s;
	}
};