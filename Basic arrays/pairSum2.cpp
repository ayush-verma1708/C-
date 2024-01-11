#include<iostream>
using namespace std;

int maint(){
    int n;
    cin>>n;
    int arr[n];
    for(int o = 0;o<n;o++){
        cin>>arr[o];
    }
    int k = 4;
    cin>>k;
    int high = n;
    int low = 0;
    // for(int low = 0;low<=high;low++){
        while(low<high){
        if(arr[low] + arr[high] < k){
            low++;
        }
        else if(arr[low] + arr[high] >k){
            high--;
        }
        if(low + high == k){
            cout<<"true "<<low<<" "<<high;
        }
    }
        if(low == high){
        cout<<"false";
    }
    return 0;
}