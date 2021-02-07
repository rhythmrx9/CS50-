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
    int stword = 0, maxword =0;

    while(1)
    {
        if(arr[i]== ' ' || arr[i] == '\0')
        {
            if(currentlength > maxlength)
            {
                maxlength = currentlength;
                maxword = stword;
            }

            currentlength = 0;
            stword = i+1;
        }

        else
        currentlength++;
        if(arr[i]== '\0')
        {
            break;
        }
        i++;
    }

    cout << maxlength << endl;
    for (int i=0; i<maxlength; i++)
    {
        cout << arr[i + maxword];
    }

    return 0;
}