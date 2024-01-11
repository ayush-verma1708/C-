#include<iostream>
using namespace std;

int main(){
    int a= 5;
    // int x;
    int* b =&a;
    cout<<*b;
    // do{
    //     int x=a*b;
    //     cout<<a<<"x"<<b<<"= "<<x<<endl;
    //     b++;
    // }while(b!=11);
    return 0;
}