class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* app= head;
        while(head != NULL && head->next != NULL){
            int val= head->next->val;
            head->next->val=head->val;
            head->val=val;
            head=head->next->next;
        }
        return app;
    }
};