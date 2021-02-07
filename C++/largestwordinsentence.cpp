#include <iostream>
using namespace std;

int main()
{
    //largenst word in sentence

    int n;
    cin >> n;
    cin.ignore();
    char arr[n+1];

    cin.getline(arr,n);
    cin.ignore();

    int i=0;
    int currentlength = 0, maxlength = 0;

    while(1)
    {
        if(arr[i]== ' ||')
        if(arr[i]== '/0')
            break;

        i++
    }


}