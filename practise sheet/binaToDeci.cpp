#include<iostream>
using namespace std;


// int rev(){

// }

int main(){
    int n;
    cin>>n;
    int Ans = 0;
    int count=1;
    while(n!=0){
        int bit = n&1;
        
        Ans = (10*count * bit) + Ans;

        n = n>>1;
        count=count*10;
    }
    cout<<Ans;
}