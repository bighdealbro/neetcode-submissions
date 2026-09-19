class Solution:
    def tribonacci(self, n: int) -> int:
        if(n==0):
            return 0
        if(n<=2):
            return 1
        tz=0
        to=1
        tt=1
        ttt=0
        
        for i in range(n-2):
            ttt=tz+to+tt
            tz=to
            to=tt
            tt=ttt
        return ttt
        