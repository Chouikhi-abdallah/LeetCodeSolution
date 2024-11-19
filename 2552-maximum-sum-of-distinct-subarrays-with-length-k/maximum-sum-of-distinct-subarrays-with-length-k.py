from collections import Counter

class Solution(object):
    def maximumSubarraySum(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        n=len(nums)
        
        summ = sum(nums[:k])  
        count = Counter(nums[:k]) 
        max_sum = summ if len(count) == k else 0  
        
        for i in range(k, n):
            count[nums[i - k]] -= 1
            if count[nums[i - k]] == 0:
                del count[nums[i - k]]
            
            count[nums[i]] += 1
            summ = summ - nums[i - k] + nums[i]
            
            if len(count) == k:
                max_sum = max(max_sum, summ)
        
        return max_sum
