class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> count;
        for(int i=0;i<nums.size();i++){
            if(count[nums[i]]>=(nums.size()/2))
                return nums[i];
            count[nums[i]]++;
        }
        return -1;
        
    }
};