from collections import defaultdict, deque

class Solution(object):
    def shortestDistanceAfterQueries(self, n, queries):
        paths = defaultdict(list)
        for i in range(n - 1):
            paths[i].append(i + 1)
        
        res = []

        def bfs():
            visited = [False] * n
            queue = deque([(0, 0)])
            visited[0] = True
            while queue:
                current, distance = queue.popleft()
                if current == n - 1:
                    return distance
                for neighbor in paths[current]:
                    if not visited[neighbor]:
                        visited[neighbor] = True
                        queue.append((neighbor, distance + 1))
            return -1

        for u, v in queries:
            paths[u].append(v)
            res.append(bfs())
        
        return res
