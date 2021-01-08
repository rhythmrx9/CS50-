#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[], int n);

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //max circular subarray sum = total sum of array -sum of non-contributing elements

    int wrapsum;
    int nonwrapsum;

    nonwrapsum=kadane(arr,n);

    int totalsum=0;

    for(int i=0;i<n;i++){
        totalsum += arr[i];
        arr[i]=-arr[i];
    }

    wrapsum = totalsum + kadane(arr,n);

    cout<<max(wrapsum,nonwrapsum)<<endl;

    return 0;
}


int kadane(int arr[], int n){
    
    int cursum=0;
    int maxsum=INT_MIN;

    for(int i=0;i<n;i++){
        cursum += arr[i];
        if(cursum<0){
            cursum=0;
        }
        maxsum=max(maxsum,cursum);
    }
    return maxsum;
}