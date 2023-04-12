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
    ListNode* addTwoNumbers(ListNode* pL1, ListNode* pL2) {
        ListNode* pOutput = pL1;
        for(;;)
        {
            if(!pL1->next && pL2)
            {
                pL1->next = pL2->next;
                pL2->next = nullptr;
            }
            if(pL2 != nullptr)
                pL1->val += pL2->val;
            if (pL1->val > 9){
                if(pL1->next)
                    pL1->next->val+=1;
                else
                    pL1->next = new ListNode(1);
                pL1->val -= 10;
            }
            if (!pL1->next)
                break;
            pL1 = pL1->next;
            if(pL2 != nullptr)
                pL2 = pL2->next;
        }
        return pOutput;
    }
};