class Solution:
    def rob(self, nums: List[int]) -> int:
        rob_even = 0
        rob_odd = 0
        for i in range(len(nums)):
            if i % 2 == 0:
                if nums[i] + rob_even > rob_odd:
                    rob_even = nums[i] + rob_even
                else:
                    rob_even = rob_odd
            else:
                if nums[i] + rob_odd > rob_even:
                    rob_odd = nums[i] + rob_odd
                else:
                    rob_odd = rob_even
        if rob_even > rob_odd:
            return rob_even
        else:
            return rob_odd
