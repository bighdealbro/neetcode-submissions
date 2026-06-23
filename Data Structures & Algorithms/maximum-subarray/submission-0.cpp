class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsub=nums[0];
        int currSum=0;
        for(int n:nums){
            if (currSum<0){
                currSum=0;
            }
            currSum+=n;
            maxsub=max(maxsub,currSum);
        }
        return maxsub;
    }
};
