#include <iostream> 
#include <ctime> 
using namespace std;

int main()
{
	srand(time(NULL));
	for (int i = 0; i < 10; ++i)
		cout << rand() % 100 << " ";

	cout << endl;

	system("pause");
	return 0;
}