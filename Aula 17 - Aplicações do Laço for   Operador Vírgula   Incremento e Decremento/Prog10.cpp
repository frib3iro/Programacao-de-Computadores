#include <iostream> 
using namespace std;

int main()
{
	cout << "Tabuada de vezes\n\n";

	for(int i = 1; i <=100; i++)
	{
		for(int j = 1; j <=100; j++)
			cout << i << " x " << j << " = " << i * j << "\n";
		cout << endl;
	}

	return 0;
}