#include <iostream> 
using namespace std;

int main()
{
	cout << "Em que ano sua casa foi constru�da? ";
	int ano;
	cin >> ano;
	cin.get(); // Para tirar o \n do buffer do teclado

	cout << "Qual � seu endere�o? ";
	char endereco[80];
	cin.getline(endereco, 80);

	cout << "Ano de constru��o: " << ano << endl;
	cout << "Endere�o: " << endereco << endl;
	cout << "Pronto!\n";

	system("pause");
	return 0;
}