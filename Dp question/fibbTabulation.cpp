#include<iostream>
#include<vector>
using namespace std;

int fibb(int n,vector<int> &dp){
    //base case
    if (n<=1){
        dp[n] = n;
    }
    dp[0] = 0;
    dp[1] = 1;

    for(int i = 2 ; i<=n ; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

main(){
    int n;
    cin>>n;

    vector<int> dp(n+1);


    cout<<fibb(n , dp)<<endl;
    return 0;
}