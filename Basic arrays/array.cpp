#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<array[i]<<" ";
    // }
    int k = 0;
    for(int j = 0;j<n;j++){
        k = array[0];
        if (array[j]>k)
        {
            k= array[j];
        }
    }
        cout<<k<<endl;
    
    return 0;
}