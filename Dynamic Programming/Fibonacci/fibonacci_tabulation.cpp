// Tabulation
#include<bits/stdc++.h>
using namespace std;

int fib(int n, vector<int> &dp)
{
    //if(n<=1) return n;
    dp[0]=0, dp[1]=1;

    //if(dp[n]!=-1) return dp[n];
    //return dp[n] =  fib(n-1, dp) + fib(n-2, dp);

    for(int i=2;i<=n;i++)
    {
        dp[i]= dp[i-1] + dp[i-2];
    }

    return dp[n];
}
int main()
{
    //what is nth fibonacci number.
    // note fibonacci starts from 1---1 is the fiboancci number not 0.
    // 0 1 1 2 3 5 - neglect 1.
    int n;
    cin>>n;
    vector<int> dp(n+1, -1);
    cout<<fib(n, dp)<<endl;
    return 0;
}