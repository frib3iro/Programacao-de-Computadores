#include <iostream> 
using namespace std;

struct jogador
{
	char nome[20];
	float salario;
	unsigned gols;
};

void exibir(jogador *ptr)
{
	cout << ptr->gols << endl;
	ptr->gols = 1000;
}

int main()
{
	jogador novato = { "Joãozinho", 100, 1 };

	exibir(&novato);
	cout << novato.gols << endl;

	return 0;
}