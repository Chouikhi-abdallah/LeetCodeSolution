class Solution(object):
    def uncommonFromSentences(self, s1, s2):
        """
        :type s1: str
        :type s2: str
        :rtype: List[str]
        """
        listOfS1=[]
        listOfS2=[]
        listOfS1=s1.split()
        listOfS2=s2.split()
        ans=[]
        for i in listOfS1 :
            if i not in listOfS2 and listOfS1.count(i)==1 :
                ans.append(i)
        for i in listOfS2 :
            if i not in listOfS1 and listOfS2.count(i)==1 :
                ans.append(i)
                    
        return ans;        
            

        
        
        