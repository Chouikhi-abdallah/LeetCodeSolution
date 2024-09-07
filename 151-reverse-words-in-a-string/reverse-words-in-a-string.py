class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        s=s.strip()
        lst = s.split()
        ans = ""
        for i in reversed(lst):
            ans += i
            ans += ' '
        ans=ans.strip()
        return ans        
        