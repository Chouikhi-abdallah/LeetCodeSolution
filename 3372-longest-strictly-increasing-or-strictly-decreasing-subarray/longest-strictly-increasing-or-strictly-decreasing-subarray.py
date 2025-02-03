class Solution(object):
    def longestMonotonicSubarray(self, nums):
        longestIncreasingSubSequence = 1
        longestDecreasingSubsequence = 1
        countInc = 1
        countDec = 1

        for i in range(1, len(nums)):
            if nums[i] > nums[i - 1]:
                countInc += 1
            else:
                countInc = 1

            if nums[i] < nums[i - 1]:
                countDec += 1
            else:
                countDec = 1

            longestIncreasingSubSequence = max(longestIncreasingSubSequence, countInc)
            longestDecreasingSubsequence = max(longestDecreasingSubsequence, countDec)

        return max(longestIncreasingSubSequence, longestDecreasingSubsequence)