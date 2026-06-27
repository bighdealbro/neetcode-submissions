class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> count;
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        for (auto const& [element, freq] : count) {
            if (freq > nums.size()/3) {
                result.push_back(element);
            }
        }
        return result;
        
    }
};