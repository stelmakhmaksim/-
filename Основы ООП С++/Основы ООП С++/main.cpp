#include "main.h"
//форматироавнный ввод/вывод: число 6.02 вместо того, чтобы храниться в float, хранится в виде последовательности символов '6' ',' '0' '2'

void create_file();
void read_file();

void create_file1();
void read_file1();

int main()
{
	setlocale(0, "");

	//create_file();
	//read_file();

	create_file1();
	read_file1();

	system("pause");
	return 0;
}

void create_file()
{
	char ch = 'x';
	int i = 7;
	double d = 3.21;
	string str1 = "String1", str2 = "String 2";

	ofstream outfile("file.txt");//если нет такого файла, то он автоматически создается, а если есть, то перезаписывается
	if (!outfile.is_open())
		cout << "Не удается создать файл для записи" << endl;
	else cout << "Файл успешно создан." << endl;
	outfile << ch << ' ' << i << ' ' << d << ' ' << str1 << ' ' << str2 << endl;
}

void read_file()//этот подход не позволяет обрабатывать строки содержащие пробелы
{
	char ch;
	int i;
	double d;
	string str1, str2;

	ifstream infile("file.txt");
	if (!infile.is_open())
		cout << "Не удается открыть файл для чтения." << endl;
	else
	{
		cout << "Файл открыт для чтения." << endl;
		infile >> ch >> i >> d >> str1 >> str2;
		cout << "ch= " << ch << "\ni= " << i << "\nd= " << d << "\nstr1= " << str1 << "\nstr2= " << str2 << endl;
	}
}

void create_file1()
{
	ofstream outfile("file.txt");//если нет такого файла, то он автоматически создается, а если есть, то перезаписывается
	if (!outfile.is_open())
		cout << "Не удается создать файл для записи" << endl;
	else
	{
		cout << "Файл успешно создан." << endl;
		outfile << "String 1\n" << "String 2\n" << "String 3\n" << "String 4";
	}
}

void read_file1()//этот подход не позволяет обрабатывать строки содержащие пробелы
{
	char buffer[50];
	ifstream infile("file.txt");
	if (!infile.is_open())
		cout << "Не удается открыть файл для чтения." << endl;
	else
	{
		cout << "Файл открыт для чтения." << endl;
		while (!infile.eof())//возвращает true, когда достигнут конец файла
		{
			infile.getline(buffer, 50);//если в строке больше 50 символов, то мы не считаем оставшиеся данные
			cout << buffer << endl;
		}
	}
}
