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
	jogador *time = new jogador[22];
	cout << "Digite nome, salário e gols do jogador: ";
	cin >> time[0].nome; cin >> time[0].salario; cin >> time[0].gols;
	cin >> time[1].nome; cin >> time[1].salario; cin >> time[1].gols;

	cout << "Custo da aquisição: R$" << time[0].salario + time[1].salario << "!\n";

	delete[]time;
	system("pause");
	return 0;
}