#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for (int j = 0; j < n; j++) {
        int sum = 0;
        for(int k = j ; k<n;k++){
            sum = sum + arr[k];
            cout<<sum<<" ";
        }
    }
    

}