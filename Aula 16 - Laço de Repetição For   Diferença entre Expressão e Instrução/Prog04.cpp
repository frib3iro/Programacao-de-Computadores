#include <iostream> 
using namespace std;

int main()
{

	int x;
	cout << "A express�o x = 100 tem o valor ";
	cout << (x = 100) << endl;
	cout << "Agora x = " << x << endl;
	cout << "A express�o x < 3 tem o valor ";
	cout << (x < 3) << endl;
	cout << "A express�o x > 3 tem o valor ";
	cout << (x > 3) << endl;

	// cout.setf(ios_base::boolalpha);
	cout << boolalpha;
	cout << "A express�o x < 3 tem o valor ";
	cout << (x < 3) << endl;
	cout << "A express�o x > 3 tem o valor ";
	cout << (x > 3) << endl;

	system("pause");
}