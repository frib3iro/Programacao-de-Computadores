#include <iostream> 
using namespace std;

int *GetNum(char);

int main()
{
	int *pnum = GetNum('A');
	cout << *pnum << endl;
	// esqueceu de deletar mem�ria alocada pela fun��o

	pnum = GetNum('B');
	cout << *pnum << endl;

	system("pause");
	return 0;
}

int *GetNum(char ch)
{
	int *p = new int{ ch };

	return p;
}
