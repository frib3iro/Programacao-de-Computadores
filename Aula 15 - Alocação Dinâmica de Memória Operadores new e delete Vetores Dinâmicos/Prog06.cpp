#include <iostream> 
using namespace std;

int main()
{
	int *pi = new int[2] { 15, 34 };
	cout << "Tamanho de um int em bytes: " << sizeof(int) << endl;
	// avança 4 bytes - sizeof(int)
	pi = pi + 1;

	short *ps = new short[2];
	cout << "Tamanho de um short em bytes: " << sizeof(short) << endl;
	// avança 2 bytes - sizeof(short)
	ps = ps + 1;

	char *pc = new char[2];
	cout << "Tamanho de um char em bytes: " << sizeof(char) << endl;
	// avança 1 bytes - sizeof(char)
	pc = pc + 1;

	system("pause");
	return 0;
}