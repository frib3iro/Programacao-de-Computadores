#include <iostream> 
using namespace std;

int main()
{
	int total = 6;
	int* ptr;

	ptr = &total;

	cout << "Conte�do de total = " << total << endl;
	cout << "Conte�do apontado = " << *ptr << endl;

	cout << "Endere�o de total = " << &total << endl;
	cout << "Conte�do de ptr   = " << ptr << endl;

	*ptr = *ptr + 1;
	cout << "Agora total vale = " << total << endl;

	return 0;
}