#include <iostream> 
using namespace std;

int main()
{
	int x = 5;
	int y = ++x;

	cout << x << " " << y << endl;

	int z = 5;
	int w = z++;

	cout << z << " " << w << endl;

	system("pause");
}