#include <iostream> 
using namespace std;

union CharInt
{
	short num;
	char ch;
};

int main()
{
	CharInt val = { 0 };
	cout << sizeof(CharInt) << " bytes\n\n";
	cout << "Digite um caractere: ";
	cin >> val.ch;
	cout << "C�digo ASCII: ";
	cout << val.num << endl << endl;

	cout << "Digite um n�mero: ";
	cin >> val.num;
	cout << "C�digo ASCII: ";
	cout << val.ch << endl << endl;

	system("pause");
	return 0;
}