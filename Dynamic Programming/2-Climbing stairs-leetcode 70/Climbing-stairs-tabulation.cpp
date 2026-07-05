//tabulation way
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n == 1)
            return 1;

        vector<int> dp(n + 1, -1);

        dp[0] = 1;
        dp[1] = 1;

        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];
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