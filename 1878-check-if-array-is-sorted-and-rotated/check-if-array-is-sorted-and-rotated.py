class Solution(object):
    def check(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        temp = sorted(nums)
        for i in range(len(nums)):
            temp2 = []
            for j in range(len(nums)):
                temp2.append(temp[(i + j) % len(nums)])
            if temp2 == nums:
                return True
        return False