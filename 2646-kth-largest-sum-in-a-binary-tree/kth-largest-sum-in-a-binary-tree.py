class Solution:
    def kthLargestLevelSum(self, root: TreeNode, k: int) -> int:
        # max heap
        pq = []
        bfs_queue = deque()
        bfs_queue.append(root)

        while bfs_queue:
            # level order traversal
            size = len(bfs_queue)
            level_sum = 0
            for _ in range(size):
                node = bfs_queue.popleft()
                level_sum += node.val
                if node.left:
                    # add left child
                    bfs_queue.append(node.left)
                if node.right:
                    # add right child
                    bfs_queue.append(node.right)

            # Make sum negative to maintain a max heap
            heapq.heappush(pq, -level_sum)

        if len(pq) < k:
            return -1

        for _ in range(k - 1):
            heapq.heappop(pq)

        # Convert sum back to positive
        return -heapq.heappop(pq)