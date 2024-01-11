#include<iostream>
#include<vector>
using namespace std;

int fibb(int n,vector<int> &dp){

    //base case
    if (n<=1){
        return n;
    }

    if(dp[n]!=-1){
        return dp[n];
    }

    dp[n] = fibb(n-1,dp) + fibb(n-2,dp);
    
    return dp[n];
}

main(){
    int n;
    cin>>n;

    vector<int> dp(n+1);
    for(int i = 0;i<n+1;i++){
        dp[i] = -1;
    }

    cout<<fibb(n , dp)<<endl;
    return 0;
}