#include <iostream> 
using namespace std;

int main()
{

	double litros = 3.4;

	double *ptr = &litros;

	cout << litros << endl;
	cout << *ptr << endl;
	return 0;
}