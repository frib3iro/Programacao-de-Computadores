#include <iostream> 
using namespace std;

int main()
{
	int *vet = new int[10];

	for(int i = 0; i < 10; i += 2)
	{
		cout << "Digite o numero " << i << ": ";
		cin >> vet[i];
	}

	for(int i = 1; i < 10; i += 2)
		vet[i] = 0;

	delete[] vet;

	return 0;
}