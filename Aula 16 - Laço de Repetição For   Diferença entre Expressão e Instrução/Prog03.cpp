#include <iostream> 
using namespace std;

int main()
{
	int x;
	cout << "Digite um valor positivo: ";

	for(cin >> x; x < 0; cin >> x)
		cout << "Digite um valor positivo: ";

	cout << "O valor digitado foi: " << x << endl << endl ;

	system("pause");
}