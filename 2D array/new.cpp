#include<iostream>
using namespace std;


int binarySearch(int arr[],int start , int end, int n ){
    int mid = (start + end)/2;
    // cout<<arr[mid];
    
    if(arr[mid] == n){
        return mid;
    }
    else if(arr[mid]>n){
        return binarySearch(arr,start, mid -1 , n);
    }
    else if(arr[mid]<n){
        return binarySearch(arr,mid+1,end,n);
    }

    return 0;
}

int main(){
    int arr[] = {1,2,3,5,5,6,34};
    int s = (sizeof(arr)/sizeof(arr[0]));
    // cout<<s;
    // int SortedArr[s];
    int n;
    cin>>n;
    // cout<<s;
    cout<<binarySearch(arr,0,s,n);
    // cout<<arr;
    return 0;
}