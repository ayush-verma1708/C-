#include<iostream>
using namespace std;

main(){
    
    int a,b;
    cin>>a>>b;

    for(int num = a;num<=b;num++){
        int i = 2;
        for (i; i < num; i++)
        {
            if (num%i == 0)
            {
                break;
            }
        }
        if (i==num)
        {
            cout<<num<<endl;
        }
        
        
    }
    
}