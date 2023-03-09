
//Given the head of a linked list, remove the nth node from the end of the list and return its head.

 



class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* start = new ListNode();
        start->next = head;
        ListNode* slow = start;
        ListNode* fast = start;

        for(int i = 0 ; i<n ; i++)
        {
            fast = fast->next;
        }

        while(fast->next!= NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }

        slow->next = slow->next->next;

        return start->next;
    }
};