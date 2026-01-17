class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int largest = 0;
        for (auto x : candies) {
            largest = max(x, largest);
        }
        for (auto x : candies) {
            if (x + extraCandies >= largest) {
                res.push_back(true);
            } else
                res.push_back(false);
        }
        return res;
    }
};