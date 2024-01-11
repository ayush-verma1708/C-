#include<iostream>
using namespace std;

int binarySearch(int arr[],int a , int start , int end ){
    
    if(start<=end){
    int mid = (start+end)/2;
        if(a==arr[mid]){
            return mid;
            }
        else if(a<arr[mid]){
            binarySearch(arr,a,start,mid-1);
            }   
        else{
            binarySearch(arr,a,mid+1,end);
            }
    }
    return -1;
    }

int main(){
    int arr[5] = {1,2,4,5,7};
    int k;
    cin>>k;
    int e = sizeof(arr) / sizeof(arr[0]);;
    int g = binarySearch(arr , k , 0 , e);
    cout<<g<<endl;
}