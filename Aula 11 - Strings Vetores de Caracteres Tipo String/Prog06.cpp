#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <cstring> 
using namespace std;

int main()
{
	char felino[20] = "Tigre";
	char animal[20];

	strcpy(animal, felino);
	strcpy(felino, "Jaguar");

	cout << "Felino: " << felino << endl;
	cout << "Animal: " << animal << endl << endl;

	system("pause");
	return 0;
}