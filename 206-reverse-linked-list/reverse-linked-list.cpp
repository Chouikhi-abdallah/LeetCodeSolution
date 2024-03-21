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
    ListNode* reverseList(ListNode* head) {
        if(!head)
            return nullptr;
        vector<int>v;
    ListNode *newHead=head;
    while(newHead->next){
        v.push_back(newHead->val);
        newHead=newHead->next;
    }
    v.push_back(newHead->val);
    int count=int (v.size()-1);
    newHead=head;
    while(newHead->next){
        newHead->val=v[count];
        count--;
        newHead=newHead->next;
    }
    newHead->val=v[0];
    return head;
    
    }
};