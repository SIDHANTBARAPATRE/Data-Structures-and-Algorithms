//memoization way
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int stairs(int n, vector<int> &dp) {
        // Base case
        if (n == 1 || n == 0) {
            return 1;
        }

        if (dp[n] != -1)
            return dp[n];

        return dp[n] = stairs(n - 1, dp) + stairs(n - 2, dp);
    }

    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);
        return stairs(n, dp);
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;

    cout << "Number of distinct ways to climb " << n
         << " stairs = " << obj.climbStairs(n) << endl;

    return 0;
}