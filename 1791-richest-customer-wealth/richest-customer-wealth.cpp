class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        for (auto x : accounts) {
            int sum = 0;
            for (auto y : x) {
                sum += y;
            }
            if (sum > ans) {
                ans = sum;
            }
        }

        return ans;
    }
};