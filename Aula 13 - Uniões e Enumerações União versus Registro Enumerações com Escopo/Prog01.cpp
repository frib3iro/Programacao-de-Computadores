#include <iostream> 
using namespace std;

union identificador
{
	char ch;
	int num;
	double frac;
};

int main()
{
	identificador id;
	cout << sizeof(id) << " bytes." << endl;
	id.ch = 'a';
	cout << id.ch << endl;

	id.num = 65;
	cout << id.num << endl;
	
	cout << id.ch << endl; 

	system("pause");
	return 0;
}