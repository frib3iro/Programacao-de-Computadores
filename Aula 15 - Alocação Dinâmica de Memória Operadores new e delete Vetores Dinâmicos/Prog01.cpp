#include <iostream> 
using namespace std;

int main()
{
	char ch = 'G';
	int num = 120;
	float mult = 2.6;

	int *ptr = &num;

	cout << "Sem operador de indire��o -> ptr: " << ptr << endl;
	cout << "Com operador de indire��o -> *ptr: " << *ptr << endl;

	return 0;
}