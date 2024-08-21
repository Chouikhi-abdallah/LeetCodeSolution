class Solution(object):
    def removeDigit(self, number, digit):
        """
        :type number: str
        :type digit: str
        :rtype: str
        """
        def remove_char_at_index(s, i):
            return s[:i] + s[i+1:]

        n = len(number)
        listOfIndex = []
        for i in range(n):
            if number[i] == digit:
                listOfIndex.append(i)

        listOfNumbers = []
        for i in listOfIndex:
            listOfNumbers.append(remove_char_at_index(number, i))
        
        listOfNumbers.sort()
        return listOfNumbers[-1]
