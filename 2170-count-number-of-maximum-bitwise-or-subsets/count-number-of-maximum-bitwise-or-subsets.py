class Solution(object):
    def get_subsets_backtracking(self, lst):
        result = []
        
        def backtrack(start, path):
            result.append(path[:])
            for i in range(start, len(lst)):
                path.append(lst[i])
                backtrack(i + 1, path)
                path.pop()
        
        backtrack(0, [])
        return result

    def countMaxOrSubsets(self, nums):
        subsets = self.get_subsets_backtracking(nums)
        max_or = 0
        for num in nums:
            max_or |= num
        
        count = 0
        for subset in subsets:
            if subset:
                res = subset[0]
                for num in subset[1:]:
                    res |= num
                if res == max_or:
                    count += 1
        return count
