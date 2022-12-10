#include <iostream> 
#include <cstring> 
using namespace std;

int main()
{
	char nome[] = "Vamos estudar C++";

	for(int i = 0; nome[i]; i++)
		cout << nome[i];
	cout << endl;

	system("pause");
}