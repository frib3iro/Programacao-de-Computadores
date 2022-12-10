#include <iostream> 
using namespace std;

int *GetNum(char);

int main()
{
	int *pnum = GetNum('A');
	cout << *pnum << endl;
	// esqueceu de deletar memória alocada pela função

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
