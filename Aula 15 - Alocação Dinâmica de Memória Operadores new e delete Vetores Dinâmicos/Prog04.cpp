#include <iostream> 
using namespace std;

int main()
{
	cout << "Criando o tamanho do vetor: " << endl;

	int *vet = new int[5];

	vet[0] = 15;
	vet[1] = 5;
	vet[2] = 30;
	vet[3] = 28;
	vet[4] = 40;

	cout << "Mostrando o objeto apontado: " << *vet << endl;
	cout << "Mostrando o endereço de memoria: " << vet << endl;

	cout << vet[0] << endl;
	cout << vet[1] << endl;
	cout << vet[2] << endl;
	cout << vet[3] << endl;
	cout << vet[4] << endl;

	delete[]vet;
	system("pause");
	return 0;
}