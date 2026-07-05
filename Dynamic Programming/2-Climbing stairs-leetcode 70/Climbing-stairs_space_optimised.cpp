//space optimised way.
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n == 0 || n == 1)
            return 1;

        int prev1 = 1;
        int prev2 = 1;

        for (int i = 2; i <= n; i++) {
            int curr = prev1 + prev2;
            prev1 = prev2;
            prev2 = curr;
        }

        return prev2;
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