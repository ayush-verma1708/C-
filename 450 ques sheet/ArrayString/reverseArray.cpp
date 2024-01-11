#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int arr2[n];
    int k = 0;
    for(int j = n-1;j>=0;j--){
            arr2[k]=arr[j];
            k++; 
    }
    for(int i = 0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
}