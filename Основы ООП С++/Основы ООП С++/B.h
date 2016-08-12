#include "main.h"

class B
{
protected:
	int prop;//член класса или свойство
public:
	B(int b) : prop(b){}
	void set(int b){ prop = b; }
	int get(){ return prop; }
};