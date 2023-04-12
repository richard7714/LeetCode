class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *list3 = new ListNode();
        ListNode *l3 = list3;
        ListNode* dummy = l3;
        int carry = 0;
        while(l1 != NULL || l2 != NULL || carry) {
            int curSum = carry;
            if(l1 != NULL) {
                curSum += l1 -> val;
                l1 = l1 -> next;
            }
            if(l2 != NULL) {
                curSum += l2 -> val;
                l2 = l2 -> next;
            }
            ListNode *node = new ListNode(curSum % 10);
            l3 -> next = node;
            l3 = l3 -> next;
            carry = curSum/10;
        }
        return dummy -> next;
    }
};
