#include<iostream>
using namespace std;

int main(){
    int arr[6] = {0,-9,1,3,-4,5};

    int arr1[6];
    int max = INT_MIN;

    for(int i = 0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i = 0;i<6;i++){
        if(arr[i]>max){
            // cout<<arr[i]<<" ";
            arr1[i] = arr[i]; 
            max = arr[i];
        }
        arr1[i] = max;
    }

    for(int i = 0;i<6;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
}