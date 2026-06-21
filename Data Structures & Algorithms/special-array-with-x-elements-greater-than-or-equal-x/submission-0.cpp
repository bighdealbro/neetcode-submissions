class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        std::vector<int> counts(n + 1, 0);
        for(int num:nums){
            if(num>=n)
                counts[n]++;
            else
                counts[num]++;
        }
        int x=0;
        for(int j=n;j>=0;j--){
            x+=counts[j];
            if(x==j)
                return j;
        }
    return -1;
    }
};