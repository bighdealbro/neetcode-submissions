class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        subs=[[]]
        for num in nums:
            curr_len = len(subs)
            for j in range(curr_len):
                subs.append(subs[j] + [num])
        return subs