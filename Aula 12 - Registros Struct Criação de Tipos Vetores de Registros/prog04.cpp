#include <iostream> 
using namespace std;

struct jogador
{
	char nome[40];  
	float salario;
	unsigned gols;
};

void exibir(jogador);
jogador ler();

int main()
{
	cout << "Digite as informações do jogador:\n";
	jogador bebeto = ler();

	exibir(bebeto);

	return 0;
}

void exibir(jogador j)
{
	cout << j.nome << " "
		<< j.salario << " "
		<< j.gols << endl;
}

jogador ler()
{
	jogador temp;
	cin >> temp.nome;
	cin >> temp.salario;
	cin >> temp.gols;
	return temp;
}
