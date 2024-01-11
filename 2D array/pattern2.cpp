#include<iostream>
using namespace std;

// int triangle(){
//     int n = 5;
//     for(int i = 1;i<=n;i++){
//         for (int j = 1; j <= n-i ; j++){
//             cout<<" ";
//         }
//         for(int j = 1;j<=i;j++){
//             cout<<j<<" ";
//         }

//         cout<<endl;
//     }
// }

// int palindromicPattern(){
//     int n = 5;
//     for(int i = 1;i<=n;i++){
//         for(int j = 1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j = n ; j>0;j--){
//             if((i+j)- n > 0){
//                 cout<<(i + j) - n;
//             }
//         }
//         for(int j = 2;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }



// int star(){
//     int n = 4;
//     for(int i = 1;i<=n;i++){
//         for(int j = 1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j = 1; j<=i;j++){
//             cout<<"*";
//         }
//         for(int j = 2 ; j<=i;j++){
//             cout<<"*";
//         }
//     cout<<endl;
//     }
//     for(int i = n;i>0;i--){
//         for(int j = 1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j = 1; j<=i;j++){
//             cout<<"*";
//         }
//         for(int j = 2 ; j<=i;j++){
//             cout<<"*";
//         }
//     cout<<endl;
//     }
// }

int main(){
    int n = 9;
    for(int i = 1; i<=3;i++){
        for(int j = 1;j<=n;j++){
            if((i+j)%4 == 0 || i==2 && j%4==0 ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}