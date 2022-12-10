#include <iostream> 
#include <random>
using namespace std;

int main()
{
	random_device rd;
	mt19937 mt(rd());
	uniform_int_distribution<int> dist(1, 10);

	// Cria o vetor de 6 posições
	int mega[6] = {};

	// Preenche o vetor com 6 números inteiros
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			int num = dist(mt);
			if (mega[i] == num)
				int num = dist(mt);
			else
				mega[i] = num;
		}
	}

	// mostra o vetor com 6 números inteiros
	for (int i = 0; i < 6; i++)
	{
		cout << mega[i] << " ";
	}

	cout << endl;

	system("pause");
	return 0;
}