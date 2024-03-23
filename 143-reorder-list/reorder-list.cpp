/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        deque<int> deq;
    ListNode *pointer=head;
    while(pointer){
        deq.push_back(pointer->val);
        pointer=pointer->next;
    }
    pointer=head;
    while (pointer && !deq.empty()) {
        pointer->val = deq.front();
        deq.pop_front();
        pointer = pointer->next;
        
        if (pointer && !deq.empty()) {
            pointer->val = deq.back();
            deq.pop_back();
            pointer = pointer->next;
        }
    }
    }
};