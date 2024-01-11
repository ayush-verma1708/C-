#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string a;
    cin>>a;
    int v = size(a);
    for(int i = 0;i<v;i++){
        cout<<a[i]<<" ";
    }
    int l = v-1;
    for(int j = 0;j<l/2;j++){
        swap(a[j],a[l]);
        l--;
    }
    cout<<endl;
    for(int i = 0;i<v;i++){
        cout<<a[i]<<" ";
    }
}