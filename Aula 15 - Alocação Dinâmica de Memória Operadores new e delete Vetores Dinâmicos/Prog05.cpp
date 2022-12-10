#include <iostream> 
using namespace std;

int main()
{
	// memória para três double's
	double *triplo = new double[3];
	triplo[0] = 0.2;
	triplo[1] = 0.5;
	triplo[2] = 0.8;

	cout << "triplo[1] = " << triplo[1] << endl;
	triplo = triplo + 1; // incrementa o ponteiro
	cout << "Agora triplo[0] = " << triplo[0] << endl;
	cout << "Agora triplo[1] = " << triplo[1] << endl;
	triplo = triplo - 1; //retorna ao inicio

	delete[]triplo; // libera a memória

	system("pause");
	return 0;
}