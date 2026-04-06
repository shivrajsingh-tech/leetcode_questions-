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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k == 0) return head;

        // Step 1: Find length
        ListNode* temp = head;
        int len = 1;
        while(temp->next != NULL){
            temp = temp->next;
            len++;
        }

        // Step 2: Make it circular
        temp->next = head;

        // Step 3: Reduce k
        k = k % len;

        // Step 4: Find new tail
        int steps = len - k;
        ListNode* newTail = head;

        for(int i = 1; i < steps; i++){
            newTail = newTail->next;
        }

        // Step 5: Break the circle
        ListNode* newHead = newTail->next;
        newTail->next = NULL;

        return newHead;
    }
};