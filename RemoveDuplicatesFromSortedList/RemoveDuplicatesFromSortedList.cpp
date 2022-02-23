class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return head;
        ListNode* a=head;
        while(head->next != NULL){
            if(head->next->val==head->val) head->next=head->next->next;
            else head=head->next;
        }
        return a;
    }
};