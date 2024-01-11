#include<iostream>
using namespace std;

main(){
    int n;
    int i = 2;
    cin >> n;
    for (i ; i < n; i++)
    {
        if (n%i==0)
        {
            cout<<"Non prime"<<endl;
            break;
        }
    }
    if (i==n)
    {
        cout<<"Prime"<<endl;
    }
    
}