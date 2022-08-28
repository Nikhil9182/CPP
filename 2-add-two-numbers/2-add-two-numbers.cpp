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
        int number1 = 0,number2 = 0,carry=0;
        ListNode* l3 = new ListNode(0);
        ListNode* ans = l3;
        while(l1 || l2)
        {
            if(l1 != NULL)
            {
                number1 = l1->val;
                l1 = l1->next;
            }
            else
                number1 = 0;
            if(l2 != NULL)
            {
                number2 = l2->val;
                l2 = l2->next;
            }
            else
                number2 = 0;
            int sum = number1 + number2 + carry;
            l3->next = new ListNode(sum%10);
            l3 = l3->next;
            carry = (sum>9)?1:0;
        }
        if(carry == 1)
        {
            l3->next = new ListNode(1);
        }
        return ans->next;
    }
};