#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr[n];

    for (int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int intMax = INT_MIN;
    for(int i =0;i<n;i++){
        for(int j = i ; j<n;j++){
            int sum = 0;
            for(int k = i;k<=j;k++){
                sum = arr[k] + sum;
            }
            intMax = max(intMax , sum);
        }
    }
    cout<<intMax;
}