#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <string> 
using namespace std;

int main()
{
	char vAnimal[20];
	char vFelino[20] = "Jaguar";
	string sAnimal;
	string sFelino = "Pantera";

	strcpy(vAnimal, vFelino); // copia vetores de caracteres
	sAnimal = sFelino; // copia strings

	strcat(vAnimal, "ibe"); // adiciona "ibe" ao final do vetor
	sAnimal = sAnimal + " rosa"; // adiciona "rosa" ao final de string

	cout << vAnimal << " contém " << strlen(vAnimal) << " caracteres.\n";
	cout << sAnimal << " contém " << sAnimal.size() << " caracteres.\n";

	system("pause");
	return 0;
}