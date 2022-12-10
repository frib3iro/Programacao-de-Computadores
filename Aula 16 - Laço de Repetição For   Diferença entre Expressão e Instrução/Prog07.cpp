#include <iostream> 
using namespace std;

void inverte(int[], int); // protótipo da função

int main()
{
	int nums[5] = { 40,50,60,70,80 };
	inverte(nums, 5);

	system("pause");
}

void inverte(int vet[], int tam)
{
	for(int i = tam-1; i >= 0; i--)
		cout << vet[i] << " ";
	cout << endl;

}
