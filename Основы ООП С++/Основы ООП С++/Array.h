#include "main.h"
int const LIMIT = 10;

class Array
{
private:
	int arr[LIMIT];
public:
	Array();
	int& operator[] (int n);

};