#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int arr2[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
        arr2[i] = 0;
    }
    int temp = arr[n-1];
    arr2[0]=temp;
    int l = 0;

    while(l<=n-1){
        arr2[l+1] = arr[l];
        l++;
    }


    for(int i = 0;i<n;i++){
        cout<<arr2[i];
    }
}