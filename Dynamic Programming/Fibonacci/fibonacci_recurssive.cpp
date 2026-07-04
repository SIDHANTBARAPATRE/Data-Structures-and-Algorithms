// recurssive way.
#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if(n<=1) return n;

    return fib(n-1) + fib(n-2);
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