#include <iostream> 
using namespace std;

int main()
{ 
	struct
	{
		int x;
		int y;
	} ponto;

	cout << "Entre com a coordenada do ponto x: ";
	cin >> ponto.x;

	cout << "Entre com a coordenada do ponto y: ";
	cin >> ponto.y;

	cout << "O ponto se encontra na posição ("
		<< ponto.x
		<< ","
		<< ponto.y
		<< ")\n";
	return 0;
}