class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l=*std::max_element(weights.begin(), weights.end());
        int r= std::accumulate(weights.begin(), weights.end(), 0);
        int res=r;
        while(l<=r){
            int k=l+(r-l)/2;
            int curr_w=0;
            int curr_d=1;
            for(int w:weights){
                if(curr_w+w>k){
                    curr_d++;
                    curr_w=0;
                }
                curr_w+=w;
            }
            if(curr_d<=days){
                res=k;
                r=k-1;
            }
            else
                l=k+1;
        }
        return res;
    }
};