class Solution(object):
    def dividePlayers(self, skill):
        """
        :type skill: List[int]
        :rtype: int
        """
        """if skill==[1,1,1,2,3,3,3,7,7,8,8,8,9,9]:
            return -1"""

        if sum(skill) % (len(skill) // 2) != 0:
            return -1
        else:
            target=sum(skill) // (len(skill) // 2)
            skill.sort()
            left = 0
            right = len(skill) - 1
            if skill[len(skill)-1]+skill[0]!=target:
                return -1
            else:    
                res = 0
                while left < right:
                    if(skill[left]+skill[right]!=target):
                        return -1
                    res+=skill[left]*skill[right]    
                    left += 1
                    right -= 1
        return res

        