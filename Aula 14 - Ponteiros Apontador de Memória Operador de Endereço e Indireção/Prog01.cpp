#include <iostream> 
using namespace std;

int main()
{
	int total = 6;
	int* ptr;

	ptr = &total;

	cout << "Conteúdo de total = " << total << endl;
	cout << "Conteúdo apontado = " << *ptr << endl;

	cout << "Endereço de total = " << &total << endl;
	cout << "Conteúdo de ptr   = " << ptr << endl;

	*ptr = *ptr + 1;
	cout << "Agora total vale = " << total << endl;

	return 0;
}