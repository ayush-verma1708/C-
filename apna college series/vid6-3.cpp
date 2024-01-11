#include<iostream>
#include<cmath>
using namespace std;

// int sumOfN(int n){
//     int sum = 0;
//     for(int i = 0 ; i<n;i++){
//         sum = sum + i;
//     }
//     return sum;
// }


// int main(){
//     cout<<sumOfN(10);
// }

void checkPythogorian(int p , int q , int r){
    int l = pow(p,2);
    int m = pow(q,2);
    int n = pow(r,2);
    if(l + m == n || l + n == m || m+n == l){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}

int main(){
    checkPythogorian(3,4,5);
}