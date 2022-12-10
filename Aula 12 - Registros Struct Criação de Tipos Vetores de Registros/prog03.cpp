#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <cstring> 
using namespace std;

struct jogador
{
	char nome[40];
	float salario;
	unsigned gols;
};

void exibir(jogador);

int main()
{
	jogador bebeto = { "Bebeto", 200'000, 600 };
	
	exibir(bebeto);

	return 0;
}

void exibir(jogador j)
{
	cout << j.nome << " "
		 << j.salario << " "
		 << j.gols << endl;
}