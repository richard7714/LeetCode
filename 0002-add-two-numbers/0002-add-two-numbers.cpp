class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode();
        ListNode* curr = result;
        int carry = 0;
        while(l1 != nullptr || l2 != nullptr || carry != 0) {       
            int sum = 0;
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            } 
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }
            sum += carry;
            curr->next = new ListNode(sum % 10);
            carry = floor(sum / 10);
            curr = curr->next;
        }
        return result->next;
    }
};