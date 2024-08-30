class Solution:
    def maxSubArray(self, nums: list[int]) -> int:
        current_max = global_max = nums[0]
        for num in nums[1:]:
            current_max = max(num, current_max + num)
            global_max = max(global_max, current_max)
        return global_max
