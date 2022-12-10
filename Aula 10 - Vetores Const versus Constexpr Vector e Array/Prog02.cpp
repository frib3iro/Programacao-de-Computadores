#include <iostream> 
#include <random>
using namespace std;

int main()
{
	random_device rd;
	mt19937 mt(rd());
	uniform_int_distribution<int> dist(1, 60);


	for (int i = 0; i < 10; i++)
	{
		for (int i = 0; i < 6; ++i)
		{
			int num = dist(mt);
			if (num < 10)
				cout << "0" << num << " ";
			else
				cout << num << " ";
		}
		cout << endl;
	}

	cout << endl;
	system("pause");
	return 0;
}