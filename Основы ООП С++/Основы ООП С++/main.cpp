#include "main.h"
	//��������������� ���� � ����� ������ ������������� ������������ ������ ��� ��������� �������� � ����� ����������
	//� ��� ������� ���������� ������������� ������������ �������� ����/�����, �����, ��� ������ ��������� � ����������� ������
//������������ ����/�����
void write_file(string str1)
{
	string str = str1;
	ofstream output;
	output.open("file.txt");
	for (int i = 0; i < str.size(); i++)
		output.put(str[i]);
}

void read_file()
{
	ifstream input;
	input.open("file.txt");
	
	cout<<input.rdbuf()<<endl;//������� ������ ����� �� � ����������
	/*char ch;
	while (input.get(ch))//���������� ��� �������, ���� �� ������ �� ����� �����
		cout << ch;
	cout << endl;*/
}

//�������� ����/�����
void write_file1(int* arr1)
{
	int arr[10];
	for (int i = 0; i < 10; i++)
		arr[i] = *(arr1 + i);
	ofstream output("file.txt", ios::binary);
	output.write(reinterpret_cast<char*>(arr), sizeof(arr));
	output.close();
}

void read_file1(int* arr)
{
	int arr2[10];
	ifstream input("file.txt", ios::binary);
	input.read(reinterpret_cast<char*>(arr2), sizeof(arr2));
	input.close();

	for (int i = 0; i < sizeof(arr2)/sizeof(int); i++)
		cout << arr[i] << " - " << arr2[i] << endl;
}
int main()
{
	setlocale(0, "");
	/*//put() ��� ������ ������� � ���� � get() ��� ��������� ������� �� �����
	string str1 = "Just some text!";
	write_file(str1);
	read_file();*/

	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	write_file1(arr);
	read_file1(arr);

	system("pause");
	return 0;
}