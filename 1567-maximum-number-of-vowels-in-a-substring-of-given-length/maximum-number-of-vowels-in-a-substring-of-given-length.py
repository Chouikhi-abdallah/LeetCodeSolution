class Solution(object):
    def maxVowels(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: int
        """
        l = {'a', 'e', 'i', 'o', 'u'}
        maxi = 0
        x = 0
        for i in range(k):
            if s[i] in l:
                x += 1
        maxi = x        
        for i in range(k, len(s)):
            if s[i - k] in l:
                x -= 1
            if s[i] in l:
                x += 1
            maxi = max(maxi, x)
        return maxi    
        