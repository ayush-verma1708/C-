#include<iostream>
// #include<minmax.h>
using namespace std;


// void selectionSort(int *arr1){
//     int n = (sizeof(arr1)/sizeof(arr1[1]));
//     for(int i = 0 ; i<n;i++){
//         for(int j = i+1;j<n;j++){
//             if(arr1[j]<arr1[i]){
//                 int temp = arr1[i];
//                 arr1[i] = arr1[j];
//                 arr1[j] = temp;
//                 // swap(arr1[j],arr1[i]);
//             }
//         }
//     }
// }

void selectionSort(int *arr1){
    int n = sizeof(arr1);
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            // cout<<arr1[i]<<" compare with "<<arr1[j]<<endl;
                if(arr1[i]>arr1[j]){
                    int temp = arr1[i];
                    arr1[i] = arr1[j];
                    arr1[j] = temp;
                }
            }
        }
    }

int main(){
    int arr1[8] = {5,21,6,35,523,6,2};
    int n = (sizeof(arr1)/sizeof(arr1[1]));
    for(int i = 0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    selectionSort(arr1);
    for(int i = 0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
}