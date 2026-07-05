// Space optimmised.
#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    //dp[0]=0, dp[1]=1;

    int prev1 = 1, prev2 = 0;

    int curr;
    for(int i=2;i<=n;i++)
    {
        curr= prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
        
    }

    return curr;
}
int main()
{
    //what is nth fibonacci number.
    // note fibonacci starts from 1---1 is the fiboancci number not 0.
    // 0 1 1 2 3 5 - neglect 1.
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}