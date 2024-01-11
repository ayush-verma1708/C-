#include<iostream>
using namespace std;

int bruteForce(int arr[], int n){
int Max_sum = INT_MIN;
    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            int sum = 0;
            for(int k = i;k<=j;k++){
                sum = arr[k] + sum; 
            }
            Max_sum = max(sum , Max_sum);
        }
    }
    return Max_sum;

}

int betterCode(int arr[], int n){
    int arr2[n+1];
    arr2[0] = 0;
    for(int i = 0;i<n;i++){
        arr2[i+1] = arr[i] + arr2[i]; 
    }
    int max_sum = INT_MIN;
    for(int i = 1;i<=n;i++){
        int sum =0;
        for(int j = 0;j<i;j++){
            sum = arr2[i] - arr2[j];
            max_sum = max(sum,max_sum);
        }
    }
    return max_sum;
}

int kadane(int arr[],int n){
    int currSum = 0;
    int maxSum = INT_MIN;

    for(int i = 0;i<n;i++){
        currSum = currSum + arr[i];
        if(currSum<0){
            currSum = 0;
        }
        maxSum = max(maxSum , currSum);
    }
    return maxSum;
}

int circularSum(int arr[],int n){
    int totalSum = 0;
    for(int i = 0;i<n;i++){
        totalSum = arr[i] + totalSum; 
    }
    int arr2[n];
    for(int i = 0;i<n;i++){
        arr2[i] = arr[i] * -1;
    }

    int nonWrapping = kadane(arr2,n)*-1;

    return totalSum - nonWrapping;

}

int main(){
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i = 0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int n = 5;
    // int arr[5] = {-1,4,-1,7,-4};
    // int ans = kadane(arr,n);
    // cout<<ans;
    int n = 7;
    int arr[7] = {-4,4,6,6,-10,-11,12};
    cout<<circularSum(arr,n);
}
