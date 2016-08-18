#include "something.h"

//как записывать в файл и читать оттуда пользовательские типы данных
void write_read()
{
	Something some("string", 7);
	fstream file("file.dat", ios::binary | ios::out | ios::in);//позволяет создать объект для записи и чтения информации в файл
	file.write(reinterpret_cast<char*>(&some), sizeof(Something));

	cout << file.tellg() << endl;//для того, чтобы получить информацию, где у нас сейчас стоит указатель
	file.seekg(0);//указатель стоит в конце, т.к. мы уже что-то записали в файл, а нам нужно перенести в начало
	cout << file.tellg() << endl;

	Something some2;
	file.read(reinterpret_cast<char*>(&some2), sizeof(some2));//для совместимости зачитанного и прочитанного объекта, достаточно, чтобы они
	some2.showSomething();//имели одинаковый набор полей, даже, если у них будут разные методы, данные всё равно отобразятся корректно
	//утверждение справедливо для классов, которые не содержат виртуальные функции
}
int main()
{
	setlocale(0, "");

	//write_read();

	//перегрузка операторов ввода и вывода
	Something some1, some2;
	cout << some1 << some2;
	cin >> some1 >> some2;
	//как сделать не для cin и cout написать самим
	//передача по ссылке и указателю
	system("pause");
	return 0;
}