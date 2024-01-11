#include<iostream>
using namespace std;

void insertionSort(int *arr, int n){
    for(int i = 1 ; i<n;i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current && j >=0){
            arr[j+1] = arr[j];  
            j--;
        }
        arr[j+1] = current;
    }
}

void printArray(int * arr, int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[6]  = {12,23,45,51,19,8};
    printArray(arr,6);
    insertionSort(arr,6);
    printArray(arr,6);
}