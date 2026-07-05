// Recurssive way.
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Recursive way
    int stairs(int n) {
        // Base case
        if (n == 1 || n == 0) {
            return 1;
        }

        return stairs(n - 1) + stairs(n - 2);
    }

    int climbStairs(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        return stairs(n);
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter number of stairs: ";
    cin >> n;

    cout << "Number of distinct ways = " << obj.climbStairs(n) << endl;

    return 0;
}