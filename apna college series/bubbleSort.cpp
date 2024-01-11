#include<iostream>
using namespace std;

void bubbleSort(int *arr , int n){
    int right = 1;
    while(right < n ){
        for(int i = 0;i<n - right ;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
        }
        }
        right++;
    }
}

void printArr(int *arr, int n ){
    for(int i = 0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6]={12,45,23,51,19,8};
    int n = size(arr);
    printArr(arr,6);
    bubbleSort(arr,n);
    printArr(arr,6);
}