class Solution:
    def sortArray(self, nums: List[int]) -> List[int]:
        if len(nums) <= 1:
            return nums        
        mid = len(nums) 
        left_half = self.sortArray(nums[:mid])
        right_half = self.sortArray(nums[mid:])
        return self.merge(left_half, right_half)
    def merge(self, left: List[int], right: List[int]) -> List[int]:
        sorted_array = []
        i = j = 0
        while i < len(left) and j < len(right):
            if left[i] <= right[j]:
                sorted_array.append(left[i])
                i += 1
            else:
                sorted_array.append(right[j])
                j += 1
        
        while i < len(left):
            sorted_array.append(left[i])
            i += 1
        
        while j < len(right):
            sorted_array.append(right[j])
            j += 1
        
        return sorted_array