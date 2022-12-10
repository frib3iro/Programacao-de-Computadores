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

int main()
{
	jogador a = { "Bebeto", 200'000, 600 };
	jogador b = { "Romário", 300'000, 800 };

	cout << "Contratações para o próximo ano: " << a.nome << " e " << b.nome << "!\n";
	cout << "Preço da aquisição: R$ " << a.salario + b.salario << "!\n";
	return 0;
}