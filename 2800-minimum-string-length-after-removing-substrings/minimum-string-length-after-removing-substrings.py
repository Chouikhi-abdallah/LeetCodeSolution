class Solution(object):
    def minLength(self, s):
        """
        :type s: str
        :rtype: int
        """
        stack = []
        stack.append(s[0])
        
        for i in range(1, len(s)):
            if stack and ((stack[-1] == 'A' and s[i] == 'B') or (stack[-1] == 'C' and s[i] == 'D')):
                stack.pop()  
            else:
                stack.append(s[i])  
                
        return len(stack)
