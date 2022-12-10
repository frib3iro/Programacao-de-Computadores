#include <iostream> 
using namespace std;

enum bigstep{primeiro, segundo=100, terceiro};
enum {zero, nulo=0, one=1, um=1};

int main()
{
	cout << "primeiro: " << primeiro << endl;
	cout << "segundo: " << segundo << endl;
	cout << "terceiro: " << terceiro << endl  << endl;
	cout << "zero: " << zero << endl;
	cout << "nulo: " << nulo << endl;
	cout << "one: " << one << endl;
	cout << "um: " << um << endl;


	return 0;
}