class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        n = len(coins)
        dp = [[amount + 1] * (amount + 1) for _ in range(n + 1)]
        
        for i in range(n + 1):
            dp[i][0] = 0
            
        for i in range(1, n + 1):
            c = coins[i - 1]
            for a in range(1, amount + 1):
                exclude_coin = dp[i - 1][a]
                if a - c >= 0:
                    include_coin = 1 + dp[i][a - c]
                    dp[i][a] = min(exclude_coin, include_coin)
                else:
                    dp[i][a] = exclude_coin
                    
        return dp[n][amount] if dp[n][amount] != amount + 1 else -1
