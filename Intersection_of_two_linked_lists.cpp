/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
     
     ListNode *t1,*t2;
     t1=headA;t2=headB;
     int n1=0,n2=0;
     while(t1!=NULL)
     {
         n1++;
         t1=t1->next;
     }
     while(t2!=NULL)
     {
         n2++;
         t2=t2->next;
     }
     
     if(n1>=n2)
     {
        t1=headA;
        t2=headB;
     }
     else
     {
         int t=n1;
         n1=n2;
         n2=t;
         t1=headB;t2=headA;
     }
     int diff = n1-n2;
     while(diff--)
         t1=t1->next;
    if(t1==t2)
        return t1;
     while(t1->next!=NULL && t2->next!=NULL)
     {
         t1=t1->next;t2=t2->next;
         if(t1==t2)
            return t1;
     }
     
     return NULL;
     
    }
};