class Solution(object):
    def isPrefixOfWord(self, sentence, searchWord):
        """
        :type sentence: str
        :type searchWord: str
        :rtype: int
        """
        count=0
        for i in sentence.split():
            count += 1
            if searchWord in i[0:len(searchWord)]:
                return count
        return -1        


        