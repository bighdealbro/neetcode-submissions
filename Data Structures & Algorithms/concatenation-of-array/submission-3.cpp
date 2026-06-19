class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(2*n);
        ranges::copy(nums,ans.begin());
        ranges::copy(nums,ans.begin()+n);
        return ans;
    }
};