class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> seen;
        for(int i=0;i<nums.size();i++){
            if(seen.find(nums[i])!=seen.end())
                if(abs(seen[nums[i]]-i)<=k)
                    return true;
                seen[nums[i]]=i;
        }
        return false;
        
    }
};