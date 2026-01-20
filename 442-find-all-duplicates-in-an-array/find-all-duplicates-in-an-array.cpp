class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        set<int> dup;

        for (int x : nums) {
            if (dup.count(x))
                ans.push_back(x);
            else
                dup.insert(x);
        }
        return ans;
    }
};
