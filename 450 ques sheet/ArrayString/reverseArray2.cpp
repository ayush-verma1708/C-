#include<iostream>
using namespace std;

int main(){
    int n = 0;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int l = 0;l<n;l++){
        cout<<arr[l]<<" ";
    }
    cout<<endl;

    int k = n-1;
    for(int j = 0; j<n/2;j++){
        swap(arr[k],arr[j]);
        k--;
    }

    for(int l = 0;l<n;l++){
        cout<<arr[l]<<" ";
    }
}