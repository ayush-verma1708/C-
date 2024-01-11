#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    int minIndex = 1e6+2;
    int ai[n+1];
    for(int i = 0;i<n;i++){
        arr[i] = -1;
    }

    for(int i = 0 ; i<n ; i++){
        if (ai[i] != -1)
        {
            ai[i] == i;
            minIndex = min(minIndex, ai[arr[i]]);
        }
        else{
            ai[arr[i]] = i; 
        }
    }
    if(minIndex == INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<< minIndex +1 << endl;
    }
}