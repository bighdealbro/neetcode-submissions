class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        seen=Counter(nums)
        for i in nums:
            if(seen[i]>1):
                return True
        return False