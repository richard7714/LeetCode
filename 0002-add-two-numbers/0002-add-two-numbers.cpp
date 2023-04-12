class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       /* ListNode p1=NULL;
        ListNode c1=l1;
        ListNode t1=c1->next;
        ListNode p2=NULL;
        ListNode c2=l2;
        ListNode t2=c2->next;
        while(t1!=NULL)
        {
            c1->next=p1;
            p1=c1;
            c1=t1;
            t1=t1->next;
        }
        while(t2!=NULL)
        {
            c2->next=p2;
            p2=c2;
            c2=t2;
            t2=t2->next;
        }
        int con1=0;
        int con2=0;
        ListNode cur1=l1;
        ListNode cur2=l2;
        while(cur1!=NULL)
        {
            con1++;
            cur1=cur1->next;
        }
        while(cur2!=NULL)
        {
            con2++;
            cur2=cur2->next;
        }
        if(con1==con2)
        {
            while(con1--)
            {
                int k=c1->val+c2->val;
                if(k>9)
                {
                   int s=k%10;
                   ListNode *ans 
                }
            }
        }*/
        ListNode *ans=new ListNode();
        ListNode *p1=l1;
        ListNode *p2=l2;
        ListNode *cur=ans;
        int c=0;
        int x,y;
        while(p1!=NULL ||p2 !=NULL)
        {
            x=(p1!=NULL)?p1->val:0;
            y=(p2!=NULL)?p2->val:0;
            int sum=x+y+c;
            c=sum/10;
            cur->next=new ListNode(sum%10);
            cur=cur->next;

            if(p1!=NULL)
            {
                p1=p1->next;
            }
            if(p2!=NULL)
            {
                p2=p2->next;
            }
        }  
        if(c>0)
        {
            cur->next=new ListNode(c);
        } 
        return ans->next;     
    }
};