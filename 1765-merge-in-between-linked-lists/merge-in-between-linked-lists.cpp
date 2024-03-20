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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
         ListNode *p1=list1;
    ListNode *p2=list1;
    ListNode *p3=list2;
    ListNode *p4=list2;
    int counter1=a-1;
    while(counter1--){
        p1=p1->next;
    }
    int counter2=b+1;
    while(counter2--){
        p2=p2->next;
    }
    while(p4->next){
        p4=p4->next;
    }
    p1->next=p3;
    p4->next=p2;
    
    return list1;
    }
};