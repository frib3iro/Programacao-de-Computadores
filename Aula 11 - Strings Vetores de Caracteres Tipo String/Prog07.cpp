#include <iostream> 
#include <string> 
using namespace std;

int main()
{
	char felino[20] = "Jaguar";
	string animal = "pantera";

	cout << "Entre com o nome de dois felinos:\n";
	cin >> felino;
	cin >> animal;

	cout << "Aqui est�o os felinos:\n";
	cout << felino << " e " << animal << endl;

	cout << "A terceira letra dos felinos:\n";
	cout << felino[2] << " " << animal[2] << endl;

	system("pause");
	return 0;
}