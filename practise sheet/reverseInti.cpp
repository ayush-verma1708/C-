#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>0){
        while(n!=0){
            cout<<n%10;
            n=n/10;
        }
    }
    else{
        n = n*-1;
        cout<<"-";
        while(n!=0){
            cout<<n%10;
            n=n/10;
        }
    }
    cout<<"done";
}