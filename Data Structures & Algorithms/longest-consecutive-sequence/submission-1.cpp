class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         unordered_set<int> seen(nums.begin(), nums.end());
        int longest=0;
        for(int n:nums){
            if(!seen.contains(n - 1)){
                int length=1;
                while(seen.contains(n + length)){
                    length++;
                }
                longest=max(longest,length);
            }
        }
        return longest;
        
    }
};
