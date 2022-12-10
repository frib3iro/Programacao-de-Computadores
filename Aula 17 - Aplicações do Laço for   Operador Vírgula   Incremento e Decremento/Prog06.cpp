#include <iostream> 
using namespace std;

int main()
{
	cout << "Entre com cinco valores:\n";
	double numero;
	double soma = 0.0;

	for(int i = 1; i <= 5; ++i)
	{
		cout << "Valor " << i << ": ";
		cin >> numero;
		soma += numero;
	}

	cout << "\nA soma é " << soma << endl;
	cout << "A mádia é " << soma / 5 << endl << endl;

	system("pause");
}