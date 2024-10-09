class Solution {
public:
    int lastStoneWeight(vector<int> stones) {
        priority_queue<int> pq;
        for (auto i : stones)
            pq.push(i);

        while (pq.size() >= 2) {
            int FirstTemp = pq.top();
            pq.pop();
            int SecondTemp = pq.top();
            pq.pop();
            if (FirstTemp == SecondTemp)
                pq.push(0);
            else if (FirstTemp > SecondTemp) {
                FirstTemp -= SecondTemp;
                pq.push(FirstTemp);
            } else {
                SecondTemp -= FirstTemp;
                pq.push(SecondTemp);
            }
        }

        return pq.top();
    }
};