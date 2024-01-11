#include<iostream>
using namespace std;

void linear_search(int *arr1, int n){
    for(int i = 0;i<4;i++){
        if(arr1[i]!=4){
            continue;
            // cout<<"true";
        }
        else{
            cout<<i<<" is position of element";
        }
    }
}

void binary_search(int *arr1 , int start , int end , int num){
    int mid = (start+end)/2;
    while(start <= end){
    if (arr1[mid]==num){
        cout<<arr1[mid]<<" Found it";
        break;
    }
    if(arr1[mid]>num){
        binary_search(arr1, start , mid - 1 , num);
    }
    else if (arr1[mid] < num){
        binary_search(arr1 , mid + 1 , end , num);
        }
    }
}

int main(){
    int arr1[10]={1,2,4,5,6,7,8,10,14,20};
    binary_search(arr1,0,10,7);
}