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

	cout << "\nA soma � " << soma << endl;
	cout << "A m�dia � " << soma / 5 << endl << endl;

	system("pause");
}