#include <iostream>
using namespace std;

int main()
{

	int a=10;
	int *aptr=&a;

	cout << aptr << endl;

	aptr++;

	cout << aptr << endl;
	

	char ch = 'a';
	char *cptr = &ch;

	cout << cptr << endl;

	cptr++

	cout << cptr << endl;

	return 0;
}