#include <iostream> 
#include <cstring>
using namespace std;

int main()
{
	cout << "Digite uma palavra: ";
	char palavra[20];
	cin >> palavra;

	//inverte string, modificando a string original
	char temp;
	//int i, j;

	for(int j = 0, i = strlen(palavra) - 1; j < i; i--, j++)
	{
		temp = palavra[i];
		palavra[i] = palavra[j];
		palavra[j] = temp;
	}

	cout << palavra << "\npronto.\n";

	system("pause");
}