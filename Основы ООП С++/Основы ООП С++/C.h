#include "A.h"
#include "B.h"

class C : private A, private B
{
private:
	int prop;//член класса или свойство
public:
	C(int a, int b, int c) : A(a), B(b), prop(c){}
	void set_props(int a, int b, int c){ A::prop = a; B::prop = b; prop = c; }
	int get(){ return prop; }
	void show_props()
	{
		cout << "a= " << A::get() << endl;
		cout << "b= " << B::get() << endl;
		cout << "c= " << get() << endl;
	}
};