#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int frogJump(const vector<int>& height) {
        // Handle empty input
        if (height.empty()) return 0;


        int n = (int)height.size();


        vector<int> dp(n, INT_MAX);


        int prev1 = 0;
        int prev2 = 0;


        for (int ind = 1; ind < n; ind++) {

            int jumpOne = prev1 + abs(height[ind] - height[ind - 1]);


            int jumpTwo = INT_MAX;


            if (ind > 1) {
                jumpTwo = prev2 + abs(height[ind] - height[ind - 2]);
            }


            int curr =  min(jumpOne, jumpTwo);

            prev2 = prev1;
            prev1 = curr;
        }


        return prev1;
    }
};

int main() {

    vector<int> height{30, 10, 60, 10, 60, 50};


    Solution sol;


    cout << sol.frogJump(height) << endl; // Expected: 40
    return 0;
}
