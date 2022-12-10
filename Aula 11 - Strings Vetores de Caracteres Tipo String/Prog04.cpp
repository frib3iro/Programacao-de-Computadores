#include <iostream> 
using namespace std;

int main()
{
	const int TamVet = 20;

	char nome[TamVet];
	char sobremesa[TamVet];

	cout << "Entre com seu nome: ";
	cin.getline(nome, TamVet);

	cout << "Entre com sua sobremesa favorita: ";
	cin.getline(sobremesa, TamVet);

	cout << "Eu tenho um " << sobremesa;
	cout << " para você, " << nome << endl << endl;

	system("pause");
	return 0;
}