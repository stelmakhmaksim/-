#include "main.h"

class B
{
protected:
	int prop;//���� ������ ��� ��������
public:
	B(int b) : prop(b){}
	void set(int b){ prop = b; }
	int get(){ return prop; }
};