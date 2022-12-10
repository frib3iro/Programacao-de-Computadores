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
	cout << "Código ASCII: ";
	cout << val.num << endl << endl;

	cout << "Digite um número: ";
	cin >> val.num;
	cout << "Código ASCII: ";
	cout << val.ch << endl << endl;

	system("pause");
	return 0;
}