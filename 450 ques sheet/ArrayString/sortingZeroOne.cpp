#include<iostream>
using namespace std;

int main(){
    int m ;
    cin>>m;
    int arr[m];
    for(int i = 0;i<m;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<m;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int arr2[m];
    int zero= 0;
    int one = 0;
    int two = 0;
    for (int i = 0; i < m; i++){
        if (arr[i]==0){
            zero++;
        }
        else if(arr[i]==1){
            one++;
        }
        else if(arr[i]==2){
            two++;
        }
    }
    cout<<"zero are "<< zero<<" one are "<<one<<" two are "<<two<<" "<<endl;
    int k = 0;
    while(zero!=0){
        arr2[k]=0;
        zero--;
        k++;
    }
    while(one!=0){
        arr2[k]=1;
        one--;
        k++;
    }
    while(two!=0){
        arr2[k]=2;
        two--;
        k++;
    }
    // cout<<k<<" "<<zero;

    for(int i = 0;i<m;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
}