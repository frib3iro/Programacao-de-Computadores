#include <iostream> 
using namespace std;

int main()
{
	int total1 = 10;
	int total2 = 6;

	int *ptr = &total1;

	cout << "=======================" << endl;
	cout << ptr << endl;
	cout << *ptr << endl;

	cout << "=======================" << endl;

	cout << total2 << endl;
	cout << &total2 << endl;

	cout << "=======================" << endl;
	return 0;
}