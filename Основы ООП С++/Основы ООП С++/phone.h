#include "main.h"
class Phone
{
private:
	int year;
	mutable string model;
	string owner;
	mutable string version;//позволяет изменять константное значение пользовательского типа
public:
	void setModel(string m)const{ model = m; }
	void setVersion(string v)const{ version = v; }//методы которые изменяют константые поля пользовательского типа данных должны быть const
};