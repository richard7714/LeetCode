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