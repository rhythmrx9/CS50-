#include <iostream>
using namespace std;

int getbit (int n, int pos);

int main()
{
    int n,m;

    cout<<"enter number and position of bit :"<<" ";
    cin>>n>>m;

    cout<<getbit(n,m)<<endl;

    return 0;
}

int getbit (int n, int pos)
{
    return ((n & (1<<pos))!=0);
}