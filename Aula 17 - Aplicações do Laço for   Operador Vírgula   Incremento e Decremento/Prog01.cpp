#include <iostream> 
using namespace std;

int main()
{
	cout << "Entre com um valor inteiro: ";
	int passo;
	cin >> passo;

	cout << "Contando de " << passo << " em " << passo << ":\n";

	for(int i = 0; i <= 100; i += passo)
		cout << i << endl;
	
	system("pause");
	return 0;
}