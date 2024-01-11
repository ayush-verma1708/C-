#include<iostream>
using namespace std;


int bruteForce(int arr[],int n , int k){
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i] + arr[j] == k){
                cout<<"True "<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
    return 0;
}

bool optimised(int arr[], int n, int k){
    int low = 0;
    int high = n;
    while(low < high){
        if(arr[low] + arr[high] == k ){
            return true;
            }
        int sum = arr[low] + arr[high];
        if(sum > k){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}

int main(){
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i = 0;i<n;i++){
    //     cin>>arr[i]; 
    // }
    int n = 5;
    int k = 10;
    int arr[5] = {107,2,5,2,-7};
    cout<<optimised(arr,n,k);
}