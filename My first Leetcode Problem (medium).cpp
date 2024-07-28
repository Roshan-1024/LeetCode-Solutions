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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Initialization
        ListNode *l3 = new ListNode();
        ListNode *current = l3;

        // Algorithm
        ListNode *p1 = l1;
        ListNode *p2 = l2;
        int carry = 0;
        while(p1 != nullptr || p2 != nullptr){
            int sum = carry;
            if (p1 != nullptr) {
                sum += p1->val;
                p1 = p1->next;
            }
            if (p2 != nullptr) {
                sum += p2->val;
                p2 = p2->next;
            }

            current->val = sum % 10;
            carry = sum / 10;

            if(p1 != nullptr || p2 != nullptr || carry != 0){
                current->next = new ListNode();
                current = current->next;
            }
        }
        if (carry != 0) {
            current->val = carry;
        }
        return l3;
    }
};


//First did on Jul-22-2024 in nearly 1hr 30min.