class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL) return true;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* curr = slow;
        ListNode* prev = NULL;

        while(curr != NULL){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        ListNode* firstt = head;
        ListNode* secondd = prev;

        while(secondd != NULL){
            if(firstt->val != secondd->val){
                return false;
            }
            firstt = firstt->next;
            secondd = secondd->next;
        }

        return true;
    }
};