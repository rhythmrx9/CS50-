#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //using kadane's algorithm to calculate max sum of subarray

    int cursum=0;
    int maxsum=INT_MIN;

    for(int i=0;i<n;i++){
        cursum += arr[i];
        if(cursum<0){
            cursum=0;
        }
        maxsum=max(maxsum,cursum);
    }
    cout<<maxsum<<endl;

return 0;
} 