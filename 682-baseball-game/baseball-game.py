class Solution(object):
    def calPoints(self, operations):
        res = []
        
        for op in operations:
            if op == '+':
                temp1 = res.pop()
                temp2 = res.pop()
                res.append(temp2)
                res.append(temp1)
                res.append(temp1 + temp2)
            elif op == 'D':
                temp = res.pop()
                res.append(temp)
                res.append(2 * temp)
            elif op == 'C':
                res.pop()
            else:
                res.append(int(op))
                
        return sum(res)
