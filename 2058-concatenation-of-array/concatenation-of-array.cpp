class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // int n = 2 * nums.size();
        vector<int>ans;
        for(auto x :nums){
            ans.push_back(x);
        }
         for(auto x :nums){
            ans.push_back(x);
        }
        return ans;
        
    }
};