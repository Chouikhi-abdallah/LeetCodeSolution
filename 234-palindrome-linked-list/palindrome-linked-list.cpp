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
    bool isPalindromeString(string s){
    int right=int (s.length()-1);
    int left =0;
    while(left<right){
        if(s[left]!=s[right]){
            return false;
        }
        left++;
        right--;
        
    }
    return true;
}
bool isPalindrome(ListNode* head) {
    string s;
    ListNode *p=head;
    while(p){
        s+= to_string(p->val);
        p=p->next;
    }
    return isPalindromeString(s);


}
};