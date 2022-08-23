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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *slow=head,*fast = head;
     ListNode *prev;
     int cnt=0;   
     while(fast)
     {
            if(cnt>=n)
            {
                prev=slow;
                slow=slow->next;
            }
            fast=fast->next;
            cnt++;
     }
     if(prev)   
     prev->next=slow->next;
     
	 //case when 1st value is to be deleted
     if(cnt==n)
     {
         return slow->next;
     }
        
     return head;
    }
};