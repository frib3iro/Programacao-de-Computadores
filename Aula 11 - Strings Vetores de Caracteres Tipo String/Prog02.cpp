#include <iostream> 
#include <cstring> 
using namespace std;

int main()
{
	const int tam = 15;
	char nome[tam];
	char apelido[tam] = "C++owboy";

	cout << "Olá! eu sou " << apelido << "! Qual é o seu nome? ";
	cin >> nome;

	cout << "Bem, " << nome << ", seu nome tem " << strlen(nome) << " letras\n";
	cout << "e está armazenado em um vetor de " << sizeof(nome) << " bytes.\n";

	cout << "sua inicial é " << nome[0] << ".\n";
	apelido[3] = '\0';
	cout << "Meu apelido é " << apelido << endl;

	system("pause");
	return 0;
}