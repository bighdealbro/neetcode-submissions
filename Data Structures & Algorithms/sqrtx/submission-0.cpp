class Solution {
public:
    int mySqrt(int x) {
        int low=0;
        int high=x;
        int res;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(pow(mid,2)>x)
                high=mid-1;
            else if(pow(mid,2)<x){
                low=mid+1;
                res=mid;
            }
            else
                return mid;
        }
        return res;
    }
};