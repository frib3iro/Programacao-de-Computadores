#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <cstring> 
using namespace std;

struct jogador 
{
	char nome[20];
	float salario;
	unsigned gols;
};

int main()
{
	jogador zico;
	zico.gols = 700;
	zico.salario = 40'000;
	strcpy(zico.nome, "Zico");
	
	cout << zico.nome << " fez " << zico.gols << " gols, recebendo R$: " << zico.salario << endl;

	return 0;
}

