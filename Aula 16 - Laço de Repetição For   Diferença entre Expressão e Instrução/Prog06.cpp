#include <iostream> 
using namespace std;

void crescente(int a, int b); // prot�tipo da fun��o

int main()
{
	crescente(3, 9);

	system("pause");
}

void crescente(int a, int b)
{
	for(int i = a; i <= b; i++)
		cout << i << " ";
	cout << endl;
}
