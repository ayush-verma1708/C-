#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int l=0 ;l<n;l++){
        cin>>arr[l];
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(arr[i]<=arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int l=0 ;l<n;l++){
        cout<<arr[l];
    }
    
}