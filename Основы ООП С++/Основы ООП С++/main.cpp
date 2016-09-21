#include "main.h"
const int MAX = 3;

template <class Type>
class Array
{
private: 
	Type arr[MAX];
public:
	class Big{};
	class Small{};
	class ErrorIndex
	{
	public:
		int index;
		ErrorIndex(int i) : index(i){}
	};

	Array(Type* p, int len)
	{
		if (len > MAX)
			throw Big();
		if (len < MAX)
			throw Small();
		for (int i = 0; i < 3; i++)
			arr[i] = p[i];
	}
	
	Type getIndex(int);
};

template <class Type>
Type Array<Type>::getIndex(int a)
{
	if (a<0 || a>3)
		throw ErrorIndex(a);
	return arr[a];
}



int main()
{
	setlocale(0, "");
	int a[] = { 1, 2,3};
	
	try
	{
		Array<int> arrayObj(a, sizeof(a) / sizeof(int));
		cout << arrayObj.getIndex(5) << endl;
	}
	catch (Array<int>::Big)
	{
		cout << "������� ������� ������!" << endl;
	}
	catch (Array<int>::Small)
	{
		cout << "������� ��������� ������!" << endl;
	}
	catch (Array<int>::ErrorIndex e)
	{
		cout << "�������� ��� �������� "<<e.index<<" �� ����������"<< endl;
	}
	system("pause");
	return 0;
}



