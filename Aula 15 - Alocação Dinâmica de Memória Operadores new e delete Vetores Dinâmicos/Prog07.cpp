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
	cout << "Digite nome, sal�rio e gols do jogador: ";
	cin >> pbeb->nome >> pbeb->salario >> pbeb->gols;

	cout << "Contrata��o para o pr�ximo ano:\n" << pbeb->nome
		<< " por " << pbeb->salario << " Reais\n";

	delete pbeb;
	system("pause");
	return 0;
}