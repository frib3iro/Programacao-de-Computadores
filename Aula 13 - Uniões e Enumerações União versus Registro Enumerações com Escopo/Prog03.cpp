#include <iostream> 
#include <random> 
using namespace std;

enum Sexo { masculino, feminino };

int main()
{

	cout << "Sorteando o sexo do beb�...\n";
	
	random_device rand;
	int sorteio = rand() % 2;
	cout << "O numero sorteado foi: " << sorteio << endl;

	if (sorteio == masculino)
		cout << "parab�ns, um menino!\n";
	if (sorteio == feminino)
		cout << "parab�ns, uma menina!\n";

	return 0;
}