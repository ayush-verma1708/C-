#include<iostream>
using namespace std;


// void isprime(int k){
//     if(k==1 || k == 2 || k==3){
//         cout<<k<<"prime";
//     }
//     for(int i = 2;i<=k/2;i++){
//         // cout<<k<<endl;
//         if(k%i==0){
//             cout<<k<<"non prime"<<endl; 
//             break;
//         }
//         else{
//             cout<<k<<"prime"<<endl;
//             break;
//         }
//     }
// }

// void primeFinder(int n , int l){
//     // for(int i = n;i<l;i++){
//     //     cout<<i;
//     // }
//     for(int i = n ; i<=l;i++){
//         // cout<<i<<endl;
//         isprime(i);
//     }
// }

// int main(){
//     int n , l;
//     // cin>>n;
//     // cin>>l;
//     n = 1;
//     l = 5;
//     primeFinder(n,l);
//     // isprime(112);
// }

// int fibb(){
// int n = 10;
// // cin>>n;
// int prev = 1;
// int prev2 = 1;
// int next;
// int temp;
// cout<<"1 1 ";
//     while(prev < n){
//     next = prev + prev2;
//     prev2 = prev;
//     prev = next;
//     cout<<next<<" ";
//     }
// }

int fact(int k){
    int ans = 1;
    for(int i = 1;i<=k;i++){
        ans = ans * i;
    }
    return ans;
}

int comb(int n , int r){
    int p = fact(n);
    int q = fact(r);
    int s = fact(n-r);
    int ans = (p)/(s * q);
    return ans; 
}

int main(){
    int j = 5;
    // cin>>j;
    for(int i = 0;i<=j;i++){
        for(int l = 0;l<=i;l++){
            // cout<<i<<" "<<l<<endl;
            cout<<comb(i,l);
        }
        cout<<endl;
    }
}