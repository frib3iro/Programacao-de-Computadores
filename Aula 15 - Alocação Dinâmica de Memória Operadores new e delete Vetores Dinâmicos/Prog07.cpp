#include <iostream> 
using namespace std;

struct jogador
{
	char nome[20];
	float salario;
	unsigned gols;
};

int main()
{
	jogador *pbeb = new jogador;
	cout << "Digite nome, salário e gols do jogador: ";
	cin >> pbeb->nome >> pbeb->salario >> pbeb->gols;

	cout << "Contratação para o próximo ano:\n" << pbeb->nome
		<< " por " << pbeb->salario << " Reais\n";

	delete pbeb;
	system("pause");
	return 0;
}