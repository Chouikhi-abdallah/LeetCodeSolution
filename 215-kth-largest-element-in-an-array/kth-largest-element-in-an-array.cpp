class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(auto i:nums){
            pq.push(i);
        }
        int x=k-1;
        while(x--){
            pq.pop();
        }

        return pq.top()       ; 
        
    }
};