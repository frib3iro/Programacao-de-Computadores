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
	jogador b = { "Rom�rio", 300'000, 800 };

	cout << "Contrata��es para o pr�ximo ano: " << a.nome << " e " << b.nome << "!\n";
	cout << "Pre�o da aquisi��o: R$ " << a.salario + b.salario << "!\n";
	return 0;
}