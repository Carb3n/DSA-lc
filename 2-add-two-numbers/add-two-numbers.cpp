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
        vector<int> v1, v2, v3;
        ListNode* temp = l1;
        while(temp){
            v1.push_back(temp->val);
            temp = temp->next;
        }
        temp = l2;
        while(temp){
            v2.push_back(temp->val);
            temp = temp->next;
        }
        int n = v1.size();
        int m = v2.size();
        int carry = 0;
        int i = 0;
        while(i < n || i < m || carry){
            int x = (i < n) ? v1[i] : 0;
            int y = (i < m) ? v2[i] : 0;
            int sum = x + y + carry;
            v3.push_back(sum % 10);
            carry = sum / 10;
            i++;
        }
        ListNode* dummy = new ListNode(-1);
        temp = dummy;
        for(int num : v3){
            temp->next = new ListNode(num);
            temp = temp->next;
        }
        return dummy->next;
    }
};