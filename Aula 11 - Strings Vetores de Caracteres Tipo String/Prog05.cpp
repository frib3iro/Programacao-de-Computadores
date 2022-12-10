#include <iostream> 
using namespace std;

int main()
{
	cout << "Em que ano sua casa foi construída? ";
	int ano;
	cin >> ano;
	cin.get(); // Para tirar o \n do buffer do teclado

	cout << "Qual é seu endereço? ";
	char endereco[80];
	cin.getline(endereco, 80);

	cout << "Ano de construção: " << ano << endl;
	cout << "Endereço: " << endereco << endl;
	cout << "Pronto!\n";

	system("pause");
	return 0;
}