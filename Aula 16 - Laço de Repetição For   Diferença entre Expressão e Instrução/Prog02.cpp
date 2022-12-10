#include <iostream> 
using namespace std;

int main()
{
	cout << "Digite o valor do contador: ";
	int limite;
	cin >> limite;

	int i;
	for(i = limite; i; i--) // encerra quando o i é 0
		cout << "i = " << i << endl;
	cout << "Finalizando agora que i = " << i << endl;

	system("pause");
	return 0;

}