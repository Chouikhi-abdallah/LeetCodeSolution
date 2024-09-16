class Solution(object):
    def findMinDifference(self, timePoints):
        l = []
        for time in timePoints:
            hours, minutes = map(int, time.split(":"))
            total_minutes = hours * 60 + minutes
            l.append(total_minutes)
        
        l.sort()

        min_diff = float('inf')

        for i in range(1, len(l)):
            min_diff = min(min_diff, l[i] - l[i - 1])

        min_diff = min(min_diff, (l[0] + 1440) - l[-1])

        return min_diff
