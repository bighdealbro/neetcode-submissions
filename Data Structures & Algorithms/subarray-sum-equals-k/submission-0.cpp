class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int res=0;
        int currSum=0;
        unordered_map<int,int> prefix;
        prefix[0]++;
        
        for (int n:nums){
            currSum+=n;
            int diff=currSum-k;
            
            res+=prefix[diff];
            prefix[currSum]++;

        }
        return res;
    }
};