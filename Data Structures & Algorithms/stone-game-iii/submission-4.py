class Solution:
    def stoneGameIII(self, stoneValue: List[int]) -> str:
        n = len(stoneValue)
        dp_1 = dp_2 = dp_3 = 0 
        
        for i in range(n - 1, -1, -1):
            res = float("-inf")
            
            res = max(res, stoneValue[i] - dp_1)
            
            if i + 1 < n:
                res = max(res, stoneValue[i] + stoneValue[i+1] - dp_2)
                
            if i + 2 < n:
                res = max(res, stoneValue[i] + stoneValue[i+1] + stoneValue[i+2] - dp_3)
            
            dp_3 = dp_2
            dp_2 = dp_1
            dp_1 = res
            
        if dp_1 > 0:
            return "Alice"
        elif dp_1 < 0:
            return "Bob"
        else:
            return "Tie"