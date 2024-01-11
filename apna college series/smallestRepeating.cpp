#include<iostream>
using namespace std;

int findRepeat(int arr[]){
    for(int i = 0;i<7;i++){
        for(int j = i+1;j<7;j++){
            if(arr[i]==arr[j]){
                return i+1;
                break;
            }
        }
    } 
    return 0;
}

// int findRepeat(int arr[]){
//     int idx = 1+6e7;

//     for(int i = 0;i<7;i++){
//         arr2[i] = -1;
//     }
//     int min = INT_MAX;
//     for(int j = 0;j<7;j++){
    
//     }
// }


int main(){
    int arr1[7] = {1,5,3,4,3,5,6};
    cout<<findRepeat(arr1);
}