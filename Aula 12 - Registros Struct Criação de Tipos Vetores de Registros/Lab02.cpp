#include <iostream> 
using namespace std;

struct complexo
{
	float real;
	float img;
};

complexo operator+(complexo, complexo);
void exibir(complexo);
complexo ler();

int main()
{
	cout << "Digite o primeiro número complexo: ";
	complexo c1 = ler();
	cout << "Digite o segundo número complexo: ";
	complexo c2 = ler();
	complexo res = c1 + c2;
	exibir(res);

	return 0;
}

complexo operator+(complexo a, complexo b)
{
	complexo c;
	c.real = a.real + b.real;
	c.img = a.img + b.img;
	return c;
}

void exibir(complexo c)
{
	cout << c.real;
	cout << showpos;
	cout << c.img;
	cout << noshowpos;
	cout << "i";
	cout << endl;
}


complexo ler()
{
	// 5-6i
	// 3+2i

	complexo temp;
	cin >> temp.real;
	cin >> temp.img;
	cin.get();
	return temp;
}