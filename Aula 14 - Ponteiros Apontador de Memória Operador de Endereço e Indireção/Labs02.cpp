#include <iostream> 
using namespace std;

int main()
{
	float torque[10] = { 2.5, 8.1, 3.4, 9.2, 5.7, 9.6, 6.3, 8.0, 5.4, 4.9 };

	float *ptr = torque;

	cout << "Primeiro elemento: " << ptr[0] << endl;
	cout << "Último elemento: " << ptr[9] << endl;

	return 0;
}

/*
Suponha que torque é um vetor de 10 floats.Declare um ponteiro
que aponte para o primeiro elemento de torque e use o ponteiro
para mostrar o primeiro e o último elemento do vetor.

Torques: 2.5, 8.1, 3.4, 9.2, 5.7, 9.6, 6.3, 8.0, 5.4, 4.9

Primeiro : 2.5
Último : 4.9
*/