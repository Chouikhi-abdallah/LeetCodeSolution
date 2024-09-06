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
    bool binarySearch(vector<int>& arr, int target) {
        int left = 0;
        int right = arr.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == target) {
                return true;
            }
            if (arr[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return false;
    }

    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if (!head) return nullptr;
        
        sort(nums.begin(), nums.end());

        ListNode* p = head->next;
        ListNode* p2 = head;

        while (p) {
            if (p2 == head && binarySearch(nums, p2->val)) {
                head = head->next;
                p2 = head;
                p = p->next;
            }
            else if (binarySearch(nums, p->val)) {
                p2->next = p->next;
                p = p->next;
            }
            else {
                p2 = p;
                p = p->next;
            }
        }

        return head;
    }
};
