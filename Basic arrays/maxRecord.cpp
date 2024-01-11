#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i= 0;i<n;i++){
        cin>>arr[i];
    }

    int ans = 0;
        int maxValue = 0;
    for(int j = 0;j<n-1;j++){
        if (arr[j]>maxValue && arr[j]>arr[j+1])
        {
            ans++;
            cout <<ans<<" "<<maxValue<<" "<<arr[j]<<endl;
            maxValue = max(maxValue,arr[j]);
        }
    }
}