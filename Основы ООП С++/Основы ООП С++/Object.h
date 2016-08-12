#include "main.h"

class Object
{
private:
	int prop;
public:
	~Object()
	{
		cout << "Объект удален" << endl;
	}

	void setProp(int prop)
	{
		this->prop = prop;
	}
	
	int getProp()
	{
		return prop;
	}
};