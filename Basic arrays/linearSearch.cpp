#include<iostream>
using namespace std;
int main(){
    int key;
    cin>>key;
    int arr[5] = {1,2,9,4,6};
    for(int i = 0; i<5 ; i++){
        if (arr[i] == key)
        {
            cout<<i<<endl;
            break;
        }
    }
    cout<<"element not found"<<endl;
}