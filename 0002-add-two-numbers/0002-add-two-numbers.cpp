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

/**
 two non-negative int, non-empty linked list
 digit in reverse order
 add two num and return sum as linked list
 no leading zero, except 0
*/

/**
 일의 자리부터 덧셈. 올림이 발생할 시 또 다른 int 변수에 기록
 일의 자리부터 0이 나올경우 추가 iter 진행 X
*/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int operand1 = 0;
        int operand2 = 0;
        ListNode* head = nullptr;
        ListNode* last_node = nullptr;
        while(l1 || l2 || carry)
        {
            if(l1)
            {
                operand1 = l1->val;
                l1 = l1 -> next;
            }
            else
            {
                operand1 = 0;
            }
            if(l2)
            {
                operand2 = l2->val;
                l2 = l2 -> next;
            }
            else
            {
                operand2 = 0;
            }
            int sum = (operand1 + operand2+carry) % 10;
            carry = floor((operand1+operand2+carry)/10);
            if(last_node != nullptr)
            {
                last_node->next = new ListNode(sum);
                last_node = last_node->next;
            }
            else
            {
                head = new ListNode(sum);
                last_node = head;
            }
        }
        
        return head;
    }
};