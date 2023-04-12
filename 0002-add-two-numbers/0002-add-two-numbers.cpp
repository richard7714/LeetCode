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

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* pL1, ListNode* pL2) {
        // 별도의 list를 만들지 않고, pL1에 output을 덧셈의 결과를 담는다.
        ListNode* pOutput = pL1;
        for(;;)
        {
            // pL1이 pL2보다 짧은 경우, pL1에 pL2를 이어 사용한다.
            if(!pL1->next && pL2)
            {
                pL1->next = pL2->next;
                pL2->next = nullptr;
            }
            
            // pL1, pL2 모두 null이 아닐경우 pL2의 값을 pL1에 더한다.
            if(pL2 != nullptr)
                pL1->val += pL2->val;
            
            // 합이 9를 넘길경우 carry를 고려한다.
            if (pL1->val > 9){
                
                // pL1의 다음 노드가 존재할 경우, 기존 값에 1을 추가로 더해준다.
                if(pL1->next)
                    pL1->next->val+=1;
                
                // 노드가 없는 경우, 1의 값을 갖는 노드를 만들어 준다.
                else
                    pL1->next = new ListNode(1);
                
                // carry를 제외한 값
                pL1->val -= 10;
            }
            
            // next pL1이 null일 경우 종료
            if (!pL1->next)
                break;
            
            // null이 아닐경우 다음으로
            pL1 = pL1->next;
            
            // pL2가 nullptr이 아니면 pL2 다음으로
            if(pL2 != nullptr)
                pL2 = pL2->next;
        }
        return pOutput;
    }
};