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
    ListNode* middleNode(ListNode* head) {
         int totalNode = 0;
    ListNode *pointer = head;
    while (pointer != nullptr) {
        totalNode++;
        pointer = pointer->next;
    }
    
        int t=(totalNode/2);
        while(t--){
            head=head->next;}
        
    
        
    
 
    
    return head;}
};