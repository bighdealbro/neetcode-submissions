class Solution:
    def mySqrt(self, x: int) -> int:
        low=0
        high=x
        res=-1
        while(low<=high):
            mid=int(low+(high-low)/2)
            if(mid**2<x):
                low=mid+1
                res=mid
            elif(mid**2>x):
                high=mid-1
            else:
                return mid
        return res