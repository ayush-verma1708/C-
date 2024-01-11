#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr[n][n];

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int k = 0;
    for(int i = 0;i<n;i++){
        for (int j = 0; j < n; j++)
        {
            if(arr[i][j] == k){
                cout<<"Element found at"<<i<<" "<<j<<endl;
            }
            else if(i==n-1 && j==n-1){
                cout<<"Element not found"<<endl;
            }
        }
        cout<<endl;
    }

    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}