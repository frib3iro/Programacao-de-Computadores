#include <iostream>
using namespace std;

enum mes : int {Jan = 1, Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez};

int main()
{
	mes inicio, fim; // cria vari�veis do tipo m�s

	inicio = Fev;   // inicio do semestre
	fim = Nov;		// fim do semestre

	cout << "Digite o n�mero do m�s atual: ";
	int atual;
	cin >> atual;    // l� o m�s atual para uma vari�vel inteira

	if (atual >= inicio && atual <= fim)
		cout << "Voc� est� em per�odo de aulas.\n";
	else
		cout << "F�rias!\n";

	return 0;
}
