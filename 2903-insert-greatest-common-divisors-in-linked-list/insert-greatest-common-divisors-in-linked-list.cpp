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
    int gcd(int a, int b) 
{ 
    int result = min(a, b); 
    while (result > 0) { 
        if (a % result == 0 && b % result == 0) { 
            break; 
        } 
        result--; 
    } 
  
    return result; 
} 
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next==nullptr)
            return head;
        else{    

        ListNode *left=head;
        ListNode *right=head->next; 
        while(right){
            ListNode* newNode = new ListNode(gcd(left->val,right->val));
            left->next=newNode;
            newNode->next=right;
            left=right;
            right=right->next;
        }

        return head;
        
        
        
        
        }

        
    }
};