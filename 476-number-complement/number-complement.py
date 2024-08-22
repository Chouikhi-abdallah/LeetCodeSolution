class Solution(object):
    def findComplement(self, num):
        """
        :type num: int
        :rtype: int
        """
        ComplementbinaryOfNum = ''.join('1' if bit == '0' else '0' for bit in bin(num)[2:])
        return int(ComplementbinaryOfNum, 2)

