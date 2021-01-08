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

    //cumulative sum approach to find max sum of subarray

    int cursum[n+1];
    cursum[0]=0;

    for(int i=1; i<=n; i++){
        cursum[i] = cursum[i-1] + arr[i-1];
    }
    int maxsum = INT_MIN;
    for(int i=1; i<=n; i++){
        int sum = 0;
        for(int j=0; j<i; j++){
            sum = cursum[i] - cursum[j];
            maxsum = max(sum,maxsum);
        }
    }
    
    cout<<maxsum;
    return 0;
}