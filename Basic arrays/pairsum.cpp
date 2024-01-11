#include<iostream>
using namespace std;

bool pairSum(int n, int arr[]){
    int k = 4;
    // cin>>k;  //value of k
    int minSum=0;
    for(int j = 0;j<n;j++){
        if(arr[j]>k){
            continue;
        }
        for(int p = j;p<n;p++){
            if(arr[j]+arr[p]==k){
                return true;
                break;
            }
        }
    }
    return false;
}
int main(){
    int n = 4;
    // cin>>n; //no. of input
    int arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }

    bool ans = pairSum(4,arr);
    cout<<ans;
}