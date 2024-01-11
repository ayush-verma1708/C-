#include<iostream>
using namespace std;

int main(){
    int n = 4;
    int count = n;
    // cin>>n;
    //i 
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
           cout<<"*";
        } 
        int space = (2*n)-(2*i);
        for(int l = 1;l<=space;l++){
            cout<<" ";
        }
        for(int j = 1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = n ; i>0;i--){
        for(int j = i;j>0;j--){
            cout<<"*";
        }
        int space = (2*n)-(2*i);
        for(int l = 1;l<=space;l++){
            cout<<" ";
        }
        for(int j = i-1;j>=0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}