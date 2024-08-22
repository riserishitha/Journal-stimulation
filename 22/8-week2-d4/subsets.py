class Solution(object):
    def subsets(self, nums):
        def backtrack(start, path):
            result.append(path[:])
            for i in range(start, len(nums)):
                path.append(nums[i])
                backtrack(i + 1, path)
                path.pop()
        result = []
        backtrack(0, [])
        return result