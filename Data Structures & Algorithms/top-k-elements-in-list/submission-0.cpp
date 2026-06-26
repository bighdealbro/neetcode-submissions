class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        vector<vector<int>> freq(nums.size() + 1);
        for(int n:nums){
            count[n]++;
        }
        for (const auto& [key, value] : count){
            freq[value].push_back(key);
        }
        vector<int> result;
        for(int i=nums.size();i>=0;i--){
            for(int n:freq[i]){
                result.push_back(n);
                if(result.size()==k)
                    return result;
            }
        }
        return {};
    }
};
