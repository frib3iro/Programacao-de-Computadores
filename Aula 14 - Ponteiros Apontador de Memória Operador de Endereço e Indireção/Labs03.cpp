#include <iostream> 
#include <string>
using namespace std;

struct peixe
{
	string tipo;
	float peso;
	unsigned comprimento;
};

int main()
{
	peixe sardinha;
	sardinha.tipo = "sardinha";
	sardinha.peso = 2.000f;
	sardinha.comprimento = 20;

	cout << sardinha.tipo << endl;
	cout << sardinha.peso << endl;
	cout << sardinha.comprimento << endl;

	peixe *ptr = &sardinha;

	return 0;
}

// Defina um registro que descreva um peixe.O registro deve incluir o tipo(string), 
// o peso(ponto - flutuante) e o comprimento(inteiro) do peixe.Em seguida mostre :
// a.Como criar uma variável de tipo peixe
// b.Como criar um ponteiro para uma variável de tipo peixe.
