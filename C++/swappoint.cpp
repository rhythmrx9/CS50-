#include <iostream>
using namespace std;

int swap(int *a, int *b);

int main()
{

	int a=2;
	int b=3;

	int *aptr=&a;
	int *bptr=&b;

	cout << a << " " << b << endl;

	swap(aptr,bptr);
	
	cout << a << " " << b << endl;
}

int swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
