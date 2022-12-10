#include <iostream>
using namespace std;

enum mes : int {Jan = 1, Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez};

int main()
{
	mes inicio, fim; // cria variáveis do tipo mês

	inicio = Fev;   // inicio do semestre
	fim = Nov;		// fim do semestre

	cout << "Digite o número do mês atual: ";
	int atual;
	cin >> atual;    // lê o mês atual para uma variável inteira

	if (atual >= inicio && atual <= fim)
		cout << "Você está em período de aulas.\n";
	else
		cout << "Férias!\n";

	return 0;
}
