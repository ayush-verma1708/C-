#include<iostream>
using namespace std;

int numberPattern(int n){ 
    for(int i= 0;i<=n;i++){
        for(int j = 0;j<=i;j++){
            if(j==0 || j==n-1){
                cout<<"1";
            }
            else{
                cout<<"2";
            }
        }
        cout<<endl;
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    numberPattern(n);
}