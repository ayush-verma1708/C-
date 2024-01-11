#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
};
int main(){
    int num1,num2;
    cout<<"Enter 1 number:";
    cin>>num1;
    cout<<"Enter 2 number:";
    cin>>num2;
    cout<<sum(num1,num2);
}