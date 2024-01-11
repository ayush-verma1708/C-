#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[],int n){
    int intMax = INT_MIN;
    int cuArr[n+1];
    for(int l = 0;l<n+1;l++){
        cuArr[l] = 0;
    }

    for(int i = 0;i<n;i++){
        int sum = 0;
        int q = 0;
        for(int j = i;j<n;j++){
        sum += arr[j];
        cuArr[q] = sum;
        q++;
        intMax = max(intMax , cuArr[q]);
        }
    }
    return intMax;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int wrapsum = kadane(arr,n);

    int totalSum=0;
    for(int j = 0;j<n;j++){
        totalSum += arr[j];
        arr[j] = -arr[j];
    }
    int unwrapsum = totalSum - wrapsum;
    int ans = max(unwrapsum,wrapsum);
    cout<<ans;
}