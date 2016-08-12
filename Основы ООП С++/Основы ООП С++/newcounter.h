#include "main.h"
#include "counter.h"

class NewCounter : public Counter
{
public:
	Counter operator--();
	Counter operator--(int);
	NewCounter(int);
	void show_count();
};