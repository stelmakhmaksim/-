#include "main.h"

class A
{
protected:
	int prop;//член класса или свойство
public:
	A(int a) : prop(a){}
	void set(int a){ prop = a; }
	int get(){ return prop; }
};