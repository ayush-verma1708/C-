#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr1[n];
    for (int i = 0; i < n ; i++)
    {
        cin>>arr1[i];
    }
    
    for (int i = 0; i < n ; i++)
    {
       cout<<arr1[i]<<"  ";
    }
    int k = 0;

    if(n%2!=0){
        cout<<"odd"<<endl;
        k = arr1[n-1]; 
    }
    for (int i = 0; i <= n-1; i+=2)
    {
        int temp = arr1[i+1];
        arr1[i+1] = arr1[i];
        arr1[i] = temp;
    }
    arr1[n-1]=k;
    cout<<endl;
     
    for (int i = 0; i < n ; i++)
    {
       cout<<arr1[i]<<"  ";
    }

}