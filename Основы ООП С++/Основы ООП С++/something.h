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
	//friend void operator >>(istream& s, Something& some);// чтобы можно было выводить/вводить сразу несколько значений,
	//friend void operator <<(ostream& s, Something& some);//необходимо тип возвращаемого значени€ сделать istream or ostream
	friend istream& operator >>(istream& s, Something& some);
	friend ostream& operator <<(ostream& s, Something& some);
};

istream& operator >>(istream& s, Something& some)//дружественные функции дл€ того, чтобы иметь доступ к пол€м somestr и someint
{
	cout << "¬ведите строку: ";
	s >> some.somestr;
	cout << "¬ведите число: ";
	s >> some.someint;
	return s;
}
ostream& operator <<(ostream& s, Something& some)//первый аргумент стоит перед оператором, второй аргумент после оператора
{
	s << some.somestr << " - " << some.someint << endl;
	return s;
}