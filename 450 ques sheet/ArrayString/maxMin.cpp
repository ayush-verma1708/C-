#include<iostream>
using namespace std;

int main(){
    int min = INT_MAX;
    int max = INT_MIN;
    int n;
    cin>>n;
    int arr[n];
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    for(int i = 0;i<n;i++){
        if (arr[i]<min){
            min = arr[i];
        }
        else if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"Min Element is "<<min<<endl<<" "<<"Max Element is "<<max<<" ";
}