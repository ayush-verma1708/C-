#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans = 1;
    int sum = 0;

    while(n!=0){
        // cout<<"1"<<endl;
        int k = n%10;
        ans = k * ans;
        sum = k + sum;
        n=n%10;
    }
    cout<<ans<<endl;
    cout<<sum+1;
    
}