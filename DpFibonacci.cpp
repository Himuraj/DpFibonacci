#include<iostream>
using namespace std;
// #define rep(i,a,b) for(int i=a;i<b;i++)
const int m=1e5+2;
int n;
vector<long long>dp(m,-1);
unsigned long long fib(int n){
    if(n==0){
        return 0;
    }
    if(n<3){
        return 1;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    dp[n]= fib(n-1) + fib(n-2);
    return dp[n];
}
int main(){
    cin>>n;
    
    // DP Table
    // dp[0]=0;
    // dp[1]=1;
    // dp[2]=1;
    // rep(i,3,n+1){
    //     dp[i]=-1;
    // }

    cout<<fib(n);
}