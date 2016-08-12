#include "counter.h"

Counter::Counter() :count(0)
{}

Counter::Counter(int c) : count(c)
{}

int Counter::getCount()
{
	return count;
}

//count++
Counter Counter::operator++(int)
{
	return Counter(count++);
}

//++count
Counter Counter::operator++()
{
	return Counter(++count);
}

void Counter::show_count()
{
	cout << "Это объект класса Counter: " << count << endl;
}