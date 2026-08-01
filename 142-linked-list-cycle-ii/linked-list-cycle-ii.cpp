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
    ListNode *detectCycle(ListNode *head) {
        ListNode*fast=head;
        ListNode*slow=head;
        while(fast!=nullptr && fast->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast){
                ListNode* entry = head;
                while(entry != slow){
                    entry = entry->next;
                    slow = slow->next;// Move both pointers one step; they meet at the cycle's starting node.
                }
                return entry;
            }
        }
        return nullptr; //we have to return a pointer
    }
};