#include<iostream>
#include<vector>
using namespace std;

int fibonacci(int n, vector<int> &dp){
    //base case
    if(n == 1 || n == 0) return n;

    // step3
    if(dp[n] != -1) return dp[n];

    //step 2
    dp[n] = fibonacci(n-1,dp) + fibonacci(n-2,dp);
    return dp[n];
}


int main(){
    
    int n = 8;
    vector<int>dp (n+1,-1);

    for(int i =0 ; i<n; i++){
        cout<<fibonacci(i,dp)<<" ";
    }
    cout<<endl;
    return 0;
}